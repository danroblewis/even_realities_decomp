# BLE Explorer Project Overview

## Purpose and Ambition

**BLE Explorer** is a developer tool designed to help engineers, testers, and protocol designers interactively explore, test, and manage Bluetooth Low Energy (BLE) UART protocol message types. The project provides a modern web interface and a robust backend for defining, sending, and parsing custom BLE messages, making it easier to reverse-engineer, document, and validate BLE device communication.

The ambition of BLE Explorer is to become the go-to harness for BLE protocol development, supporting:
- Rapid prototyping of new message types and attributes
- Easy extension and sharing of protocol definitions
- Interactive packet inspection and parsing
- Seamless integration with BLE hardware for real-world testing

---

## The Message Schema Database JSON Files

The project uses three main JSON files to manage protocol definitions and data:

### 1. `ble_message_types.json`
- **Purpose:** Stores all defined BLE message types, including their unique IDs, names, descriptions, and attribute lists.
- **Usage:** This is the primary source of truth for the protocol. Each message type describes the structure of a BLE packet, including the order, width, and meaning of each attribute (field).
- **How it's used:** When sending or parsing packets, the application refers to this file to know how to serialize/deserialize the data.

### 2. `ble_sequences.json`
- **Purpose:** (If present) Stores sequences of messages, such as multi-step command flows or test scripts.
- **Usage:** Useful for automating device interactions or documenting multi-packet exchanges.

### 3. `ble_devices.json`
- **Purpose:** (If present) Stores information about known BLE devices, such as their names, addresses, and any device-specific configuration.
- **Usage:** Helps with device selection, filtering, and connection management in the UI.

---

## Packet Parsing Functions

The core of BLE Explorer is its ability to parse and interpret BLE packets according to the defined message types. The main parsing logic is found in the `ble_manager.py` file, and works as follows:

### 1. **Local Parsing (`_parse_packet_local`)**
- Attempts to parse a given hex packet using hardcoded rules for known command codes.
- Useful as a fallback if the main message type definitions are unavailable.

### 2. **Main Parsing (`_parse_packet`)**
- Tries to match the incoming packet to a message type defined in `ble_message_types.json`.
- Steps:
  1. Converts the hex string to bytes.
  2. Extracts the command code (usually the first byte).
  3. Looks up all message types with a matching command code and length.
  4. Picks the best match and deserializes the packet into attribute-value pairs.
  5. Returns both the parsed data and the message type metadata.

### 3. **Re-parsing Messages (`ensure_message_parsed`)**
- Ensures that a `BLEMessage` object has its `parsed_data` populated, re-parsing if necessary.

**Note:** The parsing logic is designed to be extensible. As you add new message types, the parser will automatically recognize and handle them.

---

## How to Add New Message Types

Adding new message types allows BLE Explorer to understand and generate new kinds of BLE packets. Here’s how to do it:

### 1. **Edit `ble_message_types.json`**

Each message type is an object with:
- `id`: Unique identifier (e.g., `"msg_057"`)
- `name`: Human-readable name (e.g., `"get_device_info"`)
- `description`: What the message does
- `attributes`: Ordered list of attribute objects

Each attribute has:
- `name`: Attribute name (first must always be `"command"`)
- `width`: Number of bytes (integer)
- `is_max_width`: `true` if this is a variable-length field, otherwise `false`
- `description`: (Optional) What this field means
- `default_value`: (Optional) Default hex value as a string (e.g., `"01"`)
- `is_computed`: `true` if this field is computed from another
- `computed_from`: (Optional) Name of the source attribute, if `is_computed` is set.

#### Example: Adding a New Command Message Type

Suppose you want to add a new command called "get_device_info" with command code `0x30`:



