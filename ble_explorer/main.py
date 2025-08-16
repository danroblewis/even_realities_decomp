from fastapi import FastAPI, Request, HTTPException, Form
from fastapi.responses import HTMLResponse, RedirectResponse
from fastapi.staticfiles import StaticFiles
from fastapi.templating import Jinja2Templates
from pydantic import BaseModel, Field
from typing import List, Optional, Dict, Any
import json
import os
from pathlib import Path

app = FastAPI(title="BLE UART Protocol Testing Harness", version="1.0.0")

# Mount templates and static files
templates = Jinja2Templates(directory="templates")
app.mount("/static", StaticFiles(directory="static"), name="static")

# Data file path
DATA_FILE = "ble_message_types.json"

# Pydantic models
class Attribute(BaseModel):
    name: str
    width: Optional[int] = None
    is_max_width: bool = False  # True if width represents max width, False if fixed width
    description: Optional[str] = ""
    default_value: Optional[str] = None
    is_computed: bool = False
    computed_from: Optional[str] = None

class MessageType(BaseModel):
    id: str
    name: str
    description: Optional[str] = ""
    attributes: List[Attribute]

class MessageTypeCreate(BaseModel):
    name: str
    description: Optional[str] = ""
    attributes: List[Attribute]

class MessageTypeUpdate(BaseModel):
    name: Optional[str] = None
    description: Optional[str] = None
    attributes: Optional[List[Attribute]] = None

# Data storage functions
def load_data() -> Dict[str, MessageType]:
    if os.path.exists(DATA_FILE):
        with open(DATA_FILE, 'r') as f:
            data = json.load(f)
            return {k: MessageType(**v) for k, v in data.items()}
    return {}

def save_data(data: Dict[str, MessageType]):
    with open(DATA_FILE, 'w') as f:
        json.dump({k: v.dict() for k, v in data.items()}, f, indent=2)

def generate_id() -> str:
    data = load_data()
    counter = len(data) + 1
    while f"msg_{counter:03d}" in data:
        counter += 1
    return f"msg_{counter:03d}"

# Routes
@app.get("/", response_class=HTMLResponse)
async def home(request: Request):
    data = load_data()
    return templates.TemplateResponse("index.html", {"request": request, "message_types": data.values()})

@app.get("/message-types/new", response_class=HTMLResponse)
async def new_message_type_form(request: Request):
    return templates.TemplateResponse("message_type_form.html", {"request": request, "message_type": None})

@app.get("/test-form", response_class=HTMLResponse)
async def test_form(request: Request):
    with open("simple_test.html", "r") as f:
        content = f.read()
    return HTMLResponse(content=content)

@app.post("/message-types", response_class=HTMLResponse)
async def create_message_type(
    request: Request,
    name: str = Form(...),
    description: str = Form(""),
    attribute_names: List[str] = Form(...),
    attribute_widths: List[str] = Form(...),
    attribute_is_max_width: List[str] = Form(default=[]),
    attribute_descriptions: List[str] = Form(...),
    attribute_default_values: List[str] = Form(...),
    attribute_computed: List[str] = Form(default=[]),
    attribute_computed_from: List[str] = Form(default=[])
):
    # Parse attributes
    attributes = []
    for i, attr_name in enumerate(attribute_names):
        if attr_name.strip():
            width = None
            is_max_width = False
            
            if attribute_widths[i].strip():
                try:
                    width = int(attribute_widths[i])
                except ValueError:
                    pass
            
            # Check if this attribute uses max width
            if i < len(attribute_is_max_width) and attribute_is_max_width[i] == "true":
                is_max_width = True
            
            # Check if this attribute is computed by looking for the specific field
            is_computed = False
            computed_from = None
            
            # Look for computed checkbox and computed_from field for this specific index
            form_data = await request.form()
            computed_key = f"attribute_computed_{i}"
            computed_from_key = f"attribute_computed_from_{i}"
            
            if computed_key in form_data:
                is_computed = True
                if computed_from_key in form_data:
                    computed_from = form_data[computed_from_key].strip() if form_data[computed_from_key].strip() else None
            
            attributes.append(Attribute(
                name=attr_name.strip(),
                width=width,
                is_max_width=is_max_width,
                description=attribute_descriptions[i].strip(),
                default_value=attribute_default_values[i].strip() if attribute_default_values[i].strip() else None,
                is_computed=is_computed,
                computed_from=computed_from
            ))
    
    # Ensure first attribute is always "command"
    if not attributes:
        attributes.insert(0, Attribute(name="command", width=1, is_max_width=False, description="Command identifier", default_value=None, is_computed=False, computed_from=None))
    elif attributes[0].name != "command":
        attributes.insert(0, Attribute(name="command", width=1, is_max_width=False, description="Command identifier", default_value=None, is_computed=False, computed_from=None))
    
    message_type = MessageType(
        id=generate_id(),
        name=name,
        description=description,
        attributes=attributes
    )
    
    data = load_data()
    data[message_type.id] = message_type
    save_data(data)
    
    return RedirectResponse(url="/", status_code=303)

@app.get("/message-types/{message_type_id}/edit", response_class=HTMLResponse)
async def edit_message_type_form(request: Request, message_type_id: str):
    data = load_data()
    if message_type_id not in data:
        raise HTTPException(status_code=404, detail="Message type not found")
    
    return templates.TemplateResponse("message_type_form.html", {
        "request": request, 
        "message_type": data[message_type_id]
    })

@app.post("/message-types/{message_type_id}", response_class=HTMLResponse)
async def update_message_type(
    request: Request,
    message_type_id: str,
    name: str = Form(...),
    description: str = Form(""),
    attribute_names: List[str] = Form(...),
    attribute_widths: List[str] = Form(...),
    attribute_is_max_width: List[str] = Form(default=[]),
    attribute_descriptions: List[str] = Form(...),
    attribute_default_values: List[str] = Form(...),
    attribute_computed: List[str] = Form(default=[]),
    attribute_computed_from: List[str] = Form(default=[])
):
    data = load_data()
    if message_type_id not in data:
        raise HTTPException(status_code=404, detail="Message type not found")
    
    # Parse attributes (same logic as create)
    attributes = []
    for i, attr_name in enumerate(attribute_names):
        if attr_name.strip():
            width = None
            is_max_width = False
            
            if attribute_widths[i].strip():
                try:
                    width = int(attribute_widths[i])
                except ValueError:
                    pass
            
            # Check if this attribute uses max width
            if i < len(attribute_is_max_width) and attribute_is_max_width[i] == "true":
                is_max_width = True
            
            # Check if this attribute is computed by looking for the specific field
            is_computed = False
            computed_from = None
            
            # Look for computed checkbox and computed_from field for this specific index
            form_data = await request.form()
            computed_key = f"attribute_computed_{i}"
            computed_from_key = f"attribute_computed_from_{i}"
            
            if computed_key in form_data:
                is_computed = True
                if computed_from_key in form_data:
                    computed_from = form_data[computed_from_key].strip() if form_data[computed_from_key].strip() else None
            
            attributes.append(Attribute(
                name=attr_name.strip(),
                width=width,
                is_max_width=is_max_width,
                description=attribute_descriptions[i].strip(),
                default_value=attribute_default_values[i].strip() if attribute_default_values[i].strip() else None,
                is_computed=is_computed,
                computed_from=computed_from
            ))
    
    # Ensure first attribute is always "command"
    if not attributes:
        attributes.insert(0, Attribute(name="command", width=1, is_max_width=False, description="Command identifier", default_value=None, is_computed=False, computed_from=None))
    elif attributes[0].name != "command":
        attributes.insert(0, Attribute(name="command", width=1, is_max_width=False, description="Command identifier", default_value=None, is_computed=False, computed_from=None))
    
    data[message_type_id] = MessageType(
        id=message_type_id,
        name=name,
        description=description,
        attributes=attributes
    )
    save_data(data)
    
    return RedirectResponse(url="/", status_code=303)

@app.post("/message-types/{message_type_id}/delete")
async def delete_message_type(message_type_id: str):
    data = load_data()
    if message_type_id not in data:
        raise HTTPException(status_code=404, detail="Message type not found")
    
    del data[message_type_id]
    save_data(data)
    
    return RedirectResponse(url="/", status_code=303)

# API endpoints for programmatic access
@app.get("/api/message-types")
async def get_message_types():
    return load_data()

@app.get("/api/message-types/{message_type_id}")
async def get_message_type(message_type_id: str):
    data = load_data()
    if message_type_id not in data:
        raise HTTPException(status_code=404, detail="Message type not found")
    return data[message_type_id]

if __name__ == "__main__":
    import uvicorn
    uvicorn.run(app, port=8000)
