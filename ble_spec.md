

# BLE Command Specification

## ⚠️ COMPLETE REWRITE BASED ON FIRMWARE ANALYSIS ⚠️
**This specification has been completely rewritten based on actual firmware decompilation and analysis.**

The original specification was fundamentally incorrect and mixed up simple commands with complex subcommand commands. This rewrite reflects the actual firmware implementation.

---

# BLE Command Flow

```
BLE Radio receives packet → Hardware interrupt triggered

ble_work_thread()
    ↓
handle_message_dequeue()
    ↓
manage_ble_connection_state_comprehensive()
    ↓
process_ble_command()
    ↓
spec_ble_command_hook()
    ↓
    ├── Special commands (0x47, 0xf1, 0xf4, 0xf5) → process_ble_post_request()
    └── Standard commands → continue
    ↓
ble_process_post_req()  ← MAIN ROUTER
    ↓
Command ID Check:
    ├── 0x01-0x27 → ble_process_put_req()
    │   ↓
    │   switch(packets) {
    │   ├── case 1,2,3,5,0xb,0x14 → spi_master_transaction_debug() → master_process_get_req() → Send 0xC9 response
    │   ├── case 4 → handle_whitelist_app_from_app()
    │   ├── case 6 → set_system_timestamp() → unix_timestamp_to_datetime() → update_timer_interval()
    │   │   ↓
    │   │   switch(*(undefined1 *)(param_3 + 1)) {  // Subcommand switch
    │   │   ├── case 1 → set_system_timestamp() → unix_timestamp_to_datetime() → update_timer_interval() → load_work_mode_settings() → initialize_config_signature()
    │   │   ├── case 2 → simple response
    │   │   └── case 3 → work mode configuration logic
    │   │   }
    │   ├── case 0xd → copy_to_work_mode_buffer() → set_work_mode_status() → validate_memory_bounds()
    │   ├── case 0xe → is_panoramic_mode_active() → enable_dmic_stream() → z_spin_lock_valid()
    │   ├── case 0xf → copy_to_work_mode_buffer() → set_work_mode_flags() → validate_memory_bounds()
    │   ├── case 0x10 → get_work_mode() → z_spin_lock_valid()
    │   │   ↓
    │   │   switch(*(byte *)(param_3 + 1)) {  // Subcommand switch
    │   │   ├── case 1 → reset work mode flags → z_spin_lock_valid()
    │   │   ├── case 2 → set work mode flags → update_persist_task_status() → z_spin_lock_valid()
    │   │   └── default → error
    │   │   }
    │   ├── case 0x15 → enqueue_file() → z_spin_lock_valid() → get_current_time_ms()
    │   ├── case 0x16 → CRC32 validation → z_spin_lock_valid()
    │   ├── case 0x17 → set_system_navigation_mode() → get_current_time_ms() → z_spin_lock_valid()
    │   ├── case 0x18 → get_work_mode() → render_panoramic_view() → handle_work_mode_finish()
    │   ├── case 0x1c → set_dmic_stream_state()
    │   ├── case 0x1e → get_work_mode() → requestAudioInfoToApp() → send_audio_stream_file_to_app()
    │   │   ↓
    │   │   switch(*(undefined1 *)(param_3 + 1)) {  // Subcommand switch
    │   │   ├── case 1 → requestAudioInfoToApp(0)
    │   │   ├── case 2 → send_audio_stream_file_to_app() → delAudioStreamRecord()
    │   │   └── case 3 → quick note data handling → upgradeQuickNoteDataToFlash()
    │   │   }
    │   ├── case 0x1f → onboarding_ble_process() → enqueue_file()
    │   ├── case 0x20 → enqueue_file() → z_spin_lock_valid()
    │   ├── case 0x22 → get_work_mode_status()
    │   ├── case 0x24 → set_work_mode_status()
    │   ├── case 0x25 → get_work_mode() → HEARTBEAT_SEQ++
    │   ├── case 0x26 → get_work_mode() → update_persist_task_status() → z_spin_lock_valid()
    │   │   ↓
    │   │   switch(local_138 & 0xff) {  // Subcommand switch
    │   │   ├── case 1 → set system flag
    │   │   ├── case 2 → validate parameters → spi_master_transaction_debug() → master_process_get_req()
    │   │   ├── case 3 → get_system_ready_state() → z_spin_lock_valid(&MICROPHONE_THREAD_SYNC)
    │   │   └── case 4 → set lum gear → z_spin_lock_valid()
    │   │   }
    │   ├── case 0x27 → system control → z_spin_lock_valid()
    │   └── default → Send 0xCA "error put req." response
    │   }
    │
    ├── 0x29-0x45 → ble_process_get_req()
    │   ↓
    │   switch(packets) {
    │   ├── case 0x29 → spi_master_transaction_debug() → inline logic (get_brightness)
    │   ├── case 0x2a → spi_master_transaction_debug() → inline logic (get_anti_shake)
    │   ├── case 0x2b → spi_master_transaction_debug() → inline logic (get_display_mode)
    │   ├── case 0x2c → inline logic (get_device_info) → spi_master_transaction_debug()
    │   ├── case 0x2d → spi_master_transaction_debug() → dump_hex_data() → inline logic (get_mn_mac)
    │   ├── case 0x2e → process_whitelist_app_packet_data()
    │   ├── case 0x2f → spi_master_transaction_debug() → inline logic (get_stocks_info)
    │   ├── case 0x32 → spi_master_transaction_debug() → inline logic (get_wakeup_angle)
    │   ├── case 0x33 → spi_master_transaction_debug() → master_process_get_req()
    │   ├── case 0x34 → spi_master_transaction_debug() → inline logic (get_device_sn)
    │   ├── case 0x35 → spi_master_transaction_debug() → inline logic (get_esb_channel)
    │   ├── case 0x36 → process_data_and_send_response()
    │   ├── case 0x37 → spi_master_transaction_debug() → inline logic (get_ble_version)
    │   ├── case 0x38 → spi_master_transaction_debug() → inline logic (get_hardware_version)
    │   ├── case 0x39 → spi_master_transaction_debug() → inline logic (get_ble_mac)
    │   ├── case 0x3a → spi_master_transaction_debug() → inline logic (get_device_name)
    │   ├── case 0x3b → spi_master_transaction_debug() → inline logic (get_ble_name)
    │   ├── case 0x3c → spi_master_transaction_debug() → inline logic (get_ble_pin)
    │   ├── case 0x3d → spi_master_transaction_debug() → inline logic (get_ble_pin_length)
    │   ├── case 0x3e → spi_master_transaction_debug() → inline logic (get_ble_pin_type)
    │   ├── case 0x3f → spi_master_transaction_debug() → inline logic (get_ble_pin_format)
    │   └── default → Send 0xCA "error get req." response
    │   }
    │
    ├── 0x47+ → Special system handling
    │   ├── case 0x4a → handle DFU operations
    │   ├── case 0x4c → handle UID drop package with Bluetooth manager
    │   ├── case 0x47 → get_ancs_connection_handle + bt_connection_disconnect
    │   ├── case 0x50 → dashboard_lock (BLE_REQ_PUT_DASHBOARD_LOCK)
    │   ├── case 0xf4 → process_message_dequeue_with_callback_execution()
    │   ├── case 0xf5 → handle_command_data_processing()
    │   ├── case 0xf1 → send_dmic_msg()
    │   └── default → Send 0xCA "error post req." response
```

# Command Structure Patterns

### **Simple Commands**
```
[Command][Length][Data][Padding]
```

### **Commands with Subcommands**
```
[Command][Length][Subcommand][Additional Data][Padding]
```

### **Subcommand Location**
- **Primary subcommand**: `param_3[1]` (second byte of data)
- **Secondary parameters**: `param_3[2:]` (additional data bytes)

### **Response Patterns**
- **Success**: `[Command][0xC9][Data][Padding]`
- **Error**: `[Command][0xCA][Error Message][Padding]`

# PUT Commands (0x01-0x27)

## **Simple Commands (spi_master_transaction_debug → master_process_get_req)**

### **Basic Settings**
- **0x01** - put_brightness (BLE_REQ_PUT_BRIGHTNESS)
- **0x02** - put_anti_shake_enable (BLE_REQ_PUT_ANTI_SHAKE_ENABLE)
- **0x03** - put_display_mode (BLE_REQ_PUT_DISPLAY_MODE)
- **0x0b** - put_wakeup_angle (BLE_REQ_PUT_WAKEUP_ANGLE) - Sets the heads-up viewing angle

### **System Operations**
- **0x05** - put_internal_debug (BLE_REQ_PUT_INTERNAL_DEBUG) - Debug operations, IMU trigger, log level, screen ID
- **0x14** - put_notify_en (BLE_REQ_PUT_NOTIFY_EN) - Enable/disable notifications

### **Missing from Original Spec**
- **0x07** - put_countdown_timer (BLE_REQ_PUT_COUNTDOWN_TIMER) - Set countdown timer with enable/disable
- **0x08** - put_schedule_task (BLE_REQ_PUT_SCHEDULE_TASK) - Save schedule task data
- **0x09** - put_teleprompter_info (BLE_REQ_PUT_TELEPROMPTER_INFO) - Set teleprompter information
- **0x0a** - put_navigation_info (BLE_REQ_PUT_NAVIGATION_INFO) - Set navigation mode

## **Complex Commands with Subcommands**

### **0x06 - Teleprompter/Work Mode Management**
- **0x0601** - teleprompter initialize (set_system_timestamp → unix_timestamp_to_datetime → update_timer_interval → load_work_mode_settings → initialize_config_signature)
- **0x0602** - teleprompter acknowledge (simple response)
- **0x0603** - teleprompter work mode configure

### **0x0d - Teleprompter Data Handling**
- **0x0d01** - set system timestamp and work mode status
- **0x0d02** - configure work mode parameters
- **0x0d03** - handle teleprompter packet data

### **0x0e - DMIC Stream Control**
- **0x0e01** - open DMIC stream (starts teleprompter task with screen ID 0x0B, streams audio data over BLE)
- **0x0e02** - close DMIC stream

### **0x0f - Teleprompter Buffer Management**
- **0x0f01** - initialize teleprompter buffer
- **0x0f02** - handle teleprompter packet data
- **0x0f03** - manage teleprompter buffer state

### **0x10 - Work Mode Control**
- **0x1001** - reset work mode flags and cleanup
- **0x1002** - set work mode flags and update persistent task status

### **0x15 - File Management**
- **0x1501** - enqueue file with sequence counter validation

### **0x16 - CRC32 Validation**
- **0x1601** - validate CRC32 checksum

### **0x17 - Navigation Mode**
- **0x1701** - set system navigation mode

### **0x18 - Panoramic View**
- **0x1801** - render panoramic view or handle work mode finish

### **0x1c - DMIC Stream State**
- **0x1c01** - set DMIC stream state and language type

### **0x1e - Audio/Quick Note Management**
- **0x1e01** - request audio information from app
- **0x1e02** - handle voice data streaming and deletion (send_audio_stream_file_to_app → delAudioStreamRecord)
- **0x1e03** - manage quick note data (create/update/delete → upgradeQuickNoteDataToFlash)

### **0x1f - Onboarding**
- **0x1f01** - process onboarding BLE data

### **0x20 - Font Upgrade**
- **0x2001** - handle font upgrade with validation

### **0x22 - Dashboard Sync**
- **0x2201** - handle dashboard information sync

### **0x24 - Teleprompter Suspend**
- **0x2401** - handle teleprompter suspend state

### **0x25 - App Sync Packet**
- **0x2504** - app synchronization packet (heartbeat/keepalive, increments HEARTBEAT_SEQ counter)

### **0x26 - System Control**
- **0x2601** - set system flag
- **0x2602** - validate parameters and perform SPI transaction (spi_master_transaction_debug → master_process_get_req)
- **0x2603** - handle microphone thread synchronization
- **0x2604** - set lum gear (brightness control)

### **0x27 - System Control**
- **0x2701** - set system control parameter

## **Special Functions**
- **0x04** - handle_whitelist_app_from_app()

# GET Commands (0x29-0x45)

## **Basic Info Retrieval (Simple Commands)**
- **0x29** - get_brightness (BLE_REQ_GET_BRIGHTNESS)
- **0x2a** - get_anti_shake_enable (BLE_REQ_GET_ANTI_SHAKE_ENABLE)
- **0x2b** - get_display_mode (BLE_REQ_GET_DISPLAY_MODE)
- **0x2c** - get_device_info (BLE_REQ_GET_DEVICE_INFO)
- **0x2d** - get_mn_s_mac (BLE_REQ_GET_MN_S_MAC)
- **0x2f** - get_stocks_info (BLE_REQ_GET_STOCKS_INFO)
- **0x32** - get_wakeup_angle (BLE_REQ_GET_WAKEUP_ANGLE)
- **0x33** - get_glasses_sn (BLE_REQ_GET_GLASSES_SN)
- **0x34** - get_device_sn (BLE_REQ_GET_DEVICE_SN)
- **0x35** - get_esb_channel (BLE_REQ_GET_ESB_CHANNEL)
- **0x37** - get_ble_version (BLE_REQ_GET_BLE_VERSION)
- **0x38** - get_hardware_version (BLE_REQ_GET_HARDWARE_VERSION)
- **0x39** - get_ble_mac (BLE_REQ_GET_BLE_MAC)
- **0x3a** - get_device_name (BLE_REQ_GET_DEVICE_NAME)
- **0x3b** - get_ble_name (BLE_REQ_GET_BLE_NAME)
- **0x3c** - get_ble_pin (BLE_REQ_GET_BLE_PIN)
- **0x3d** - get_ble_pin_length (BLE_REQ_GET_BLE_PIN_LENGTH)
- **0x3e** - get_ble_pin_type (BLE_REQ_GET_BLE_PIN_TYPE)
- **0x3f** - get_ble_pin_format (BLE_REQ_GET_BLE_PIN_FORMAT)

## **Complex GET Commands**
- **0x2e** - process_whitelist_app_packet_data()
- **0x36** - process_data_and_send_response()

## **Unavailable GET Commands (0xCA Error)**
- **0x30** - Resource management (internal GUI only)
- **0x31** - Resource management (internal GUI only)
- **0x40** - Resource management (internal GUI only)
- **0x41** - Resource management (internal GUI only)
- **0x42** - Resource management (internal GUI only)
- **0x43** - Resource management (internal GUI only)
- **0x44** - Resource management (internal GUI only)
- **0x45** - Resource management (internal GUI only)

# Special System Commands (0x47+)

## **System Control**
- **0x47** - get_ancs_connection_handle() → bt_connection_disconnect()

## **Firmware Update & System Management**
- **0x4a** - handle DFU (Device Firmware Update) operations
- **0x4c** - handle UID drop package with Bluetooth manager

## **Dashboard Control**
- **0x50** - dashboard_lock (BLE_REQ_PUT_DASHBOARD_LOCK) - Lock/unlock dashboard with work mode validation

## **Message Queue Management**
- **0xf4** - process_message_dequeue_with_callback_execution()
- **0xf5** - handle_command_data_processing()

## **DMIC Management**
- **0xf1** - send_dmic_msg()

# Complete Command Table

| Command | Category | Description | Example Request Packet |
|---------|----------|-------------|------------------------|
| **0x01** | Basic Settings | put_brightness | `01 2A 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x02** | Basic Settings | put_anti_shake_enable | `02 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x03** | Basic Settings | put_display_mode | `03 01 00 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x04** | Special Functions | handle_whitelist_app_from_app | `04 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x05** | Basic Settings | put_internal_debug | `05 01 00 1E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x06** | Teleprompter | teleprompter initialize | `06 0F 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x07** | Basic Settings | put_countdown_timer | `07 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x08** | Basic Settings | put_schedule_task | `08 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x09** | Basic Settings | put_teleprompter_info | `09 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x0a** | Basic Settings | put_navigation_info | `0A 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x0b** | Basic Settings | put_wakeup_angle | `0B 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x0d** | Teleprompter Data | set system timestamp and work mode status | `0D 0F 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x0e** | DMIC Stream | open DMIC stream (starts teleprompter task, streams audio) | `0E 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x0f** | Teleprompter Buffer | initialize teleprompter buffer | `0F 0F 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x10** | Work Mode Control | reset work mode flags and cleanup | `10 02 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x14** | Basic Settings | put_notify_en | `14 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x15** | File Management | enqueue file with sequence counter validation | `15 0F 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x16** | CRC32 Validation | validate CRC32 checksum | `16 0F 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x17** | Navigation Mode | set system navigation mode | `17 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x18** | Panoramic View | render panoramic view or handle work mode finish | `18 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x1c** | DMIC Stream State | set DMIC stream state and language type | `1C 0F 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x1e** | Audio/Quick Note | request audio information from app | `1E 06 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x1f** | Onboarding | process onboarding BLE data | `1F 0F 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x20** | Font Upgrade | handle font upgrade with validation | `20 0F 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x22** | Dashboard Sync | handle dashboard information sync | `22 08 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x24** | Teleprompter Suspend | handle teleprompter suspend state | `24 0F 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x25** | App Sync | app synchronization packet (heartbeat/keepalive) | `25 0A 00 04 01 01 0A 0A 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x26** | System Control | set system flag | `26 06 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x27** | System Control | set system control parameter | `27 02 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x29** | Basic Info | get_brightness | `29 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x2a** | Basic Info | get_anti_shake_enable | `2A 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x2b** | Basic Info | get_display_mode | `2B 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x2c** | Basic Info | get_device_info | `2C 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x2d** | Basic Info | get_mn_s_mac | `2D 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x2e** | Complex GET | process_whitelist_app_packet_data | `2E 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x2f** | Basic Info | get_stocks_info | `2F 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x32** | Basic Info | get_wakeup_angle | `32 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x33** | Complex GET | get_glasses_sn | `33 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x34** | Basic Info | get_device_sn | `34 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x35** | Basic Info | get_esb_channel | `35 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x36** | Complex GET | process_data_and_send_response | `36 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x37** | Basic Info | get_ble_version | `37 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x38** | Basic Info | get_hardware_version | `38 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x39** | Basic Info | get_ble_mac | `39 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x3a** | Basic Info | get_device_name | `3A 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x3b** | Basic Info | get_ble_name | `3B 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x3c** | Basic Info | get_ble_pin | `3C 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x3d** | Basic Info | get_ble_pin_length | `3D 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x3e** | Basic Info | get_ble_pin_type | `3E 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x3f** | Basic Info | get_ble_pin_format | `3F 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x4a** | Special System | handle DFU (Device Firmware Update) operations | `4A 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x4c** | Special System | handle UID drop package with Bluetooth manager | `4C 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x50** | Dashboard Control | dashboard_lock | `50 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0x47** | Special System | get_ancs_handle + bt_connection_disconnect | `47 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0xf1** | Special System | send_dmic_msg | `F1 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0xf4** | Special System | process_message_dequeue_with_callback_execution | `F4 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |
| **0xf5** | Special System | handle_command_data_processing | `F5 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` |

# Key Architectural Insights

1. **PUT commands (0x01-0x27)** handle configuration and data modification
2. **GET commands (0x29-0x45)** retrieve information and status
3. **Subcommands allow one command ID to handle multiple related operations**
4. **Resource management commands (0x30-0x45) are internal-only, not exposed via BLE**
5. **Special system commands (0x47+) handle low-level system operations**
6. **All commands follow the same packet structure but have different processing logic**
7. **`spi_master_transaction_debug()` is a wrapper that calls `master_process_get_req()` - the real work happens in the latter function**

# Notes

- **Simple Commands**: Can be called directly with basic parameters
- **Subcommands**: Must include the subcommand byte in the data payload
- **Data Field**: For most commands, the data field content is ignored, but the length must be correct
- **Padding**: All packets are padded to exactly 20 bytes with zeros
- **Length Field**: 2 bytes, little-endian format (e.g., `01 00` = 1 byte, `0F 00` = 15 bytes)
- **Subcommand Format**: For subcommands, the first byte of data is the subcommand ID

## **Display Persistence and Dashboard Control**

**Important Discovery**: The dashboard is not controlled by a simple "keep on" command. Instead:

1. **Display stays awake** when there's an active persistent task (screen ID > 1)
2. **Command 0x0E** starts a teleprompter task (screen ID 0x0B) that streams audio and keeps display awake
3. **Command 0x0F** starts a teleprompter buffer task (screen ID 0x09) that can keep display awake
4. **Dashboard visibility** is controlled by starting tasks that render UI content, not by display mode settings

**To keep dashboard visible**: Start a persistent task that shows UI content (like teleprompter or teleprompter buffer), rather than trying to set a "display always on" mode.

**Note**: Command 0x25 (App Sync) requires subcommand 0x04 to work. Using subcommand 0x02 will cause the command to do nothing.

## **Screen ID System and Display Control**

The firmware uses a screen ID system to manage display persistence:

- **Screen ID 0x00-0x01**: Idle/suspend states - display can sleep
- **Screen ID 0x06**: Dashboard screen - shows dashboard UI
- **Screen ID 0x0B**: Teleprompter screen - streams audio, keeps display awake
- **Screen ID 0x0C**: QuickNote screen - keeps display awake
- **Screen ID 0x0F**: Panoramic mode screen - keeps display awake

**Display sleep prevention** happens when `check_work_mode_state_valid()` returns true, which occurs when:
- There's an active persistent task (screen ID > 1)
- The task is in a running state (status = 2)

**Key insight**: Display persistence is a side effect of having active tasks, not a direct setting.

# Command Routing Logic

```c
// Main routing in ble_process_post_req()
if (_command_id - 1 < 0x27) {
    ble_process_put_req(param_1, packet, param_3);  // Commands 0x01-0x27
    return 0;
}
if (_command_id - 0x29 < 0x1d) {
    ble_process_get_req((byte)param_1, packet, (byte)param_3);  // Commands 0x29-0x45
    return 0;
}

// PUT command routing in master_process_get_req()
switch(command_id - 1) {
case 0:   // Command 0x01 - BLE_REQ_PUT_BRIGHTNESS
case 1:   // Command 0x02 - BLE_REQ_PUT_ANTI_SHAKE_ENABLE  
case 2:   // Command 0x03 - BLE_REQ_PUT_DISPLAY_MODE
case 3:   // Command 0x04 - BLE_REQ_GET_WHITELIST_APP_PACKET_DATA
case 4:   // Command 0x05 - BLE_REQ_PUT_INTERNAL_DEBUG
case 6:   // Command 0x07 - BLE_REQ_PUT_COUNTDOWN_TIMER
case 7:   // Command 0x08 - BLE_REQ_PUT_SCHEDULE_TASK
case 8:   // Command 0x09 - BLE_REQ_PUT_TELEPROMPTER_INFO
case 9:   // Command 0x0a - BLE_REQ_PUT_NAVIGATION_INFO
case 10:  // Command 0x0b - BLE_REQ_PUT_WAKEUP_ANGLE
case 0xc: // Command 0x0d - BLE_REQ_PUT_TELEPROMPTER_DATA
case 0xe: // Command 0x0f - BLE_REQ_PUT_TELEPROMPTER_BUFFER
case 0x10: // Command 0x11 - BLE_REQ_PUT_WORK_MODE_CONTROL
case 0x13: // Command 0x14 - BLE_REQ_PUT_NOTIFY_EN
case 0x25: // Command 0x26 - BLE_REQ_PUT_GLASSES_SETTING
}
```





ok wow for some reason this started a stream of data:

0E 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00


'


maybe better prompt:
```
Let me give you a straightforward plan for establishing confidence in the existence and structure of a BLE command.

1. Start at @ble_work_thread.c 
2. Assume a packet comes in with a particular structure, in this case `25 0A 00 02 01 01 0A 0A 00 00 00 00 00 00 00 00 00 00 00 00`
3. Trace the function calls, keeping track of how the packet data gets converted, moved, mutated, copied to other variables. Especially the first 2 bytes.
4. Continue to follow the function call chain until you can no longer find any references to the first 2 bytes of the packet.
5. Explore what you've found to determine how the rest of the packet data is parsed. It is hopefully simpler. 
```




possible ble_context data structure:
```c
struct ble_context {
    // Command processing state
    uint8_t command_ready_flag;           // 0x00 - Flag indicating if ready to process commands
    uint8_t connection_state;             // 0x01 - Current BLE connection state
    
    // Memory management
    void* tx_buffer;                      // 0x10 - Transmit buffer (malloc'd, size 0x2b8)
    uint8_t dmic_data;                    // 0x18 - DMIC data byte
    
    // Connection management
    uint8_t connection_flags[0x200];      // 0x218 - Connection state flags (0x200 bytes)
    uint8_t processing_flag;              // 0x248 - Flag for processing state
    
    // Command processing
    void** command_table;                 // 0x250 - Array of command function pointers
    uint8_t* command_buffer;              // 0x254 - Pointer to current command buffer
    uint32_t command_index;               // 0x35c - Index into command table
    uint32_t command_param;               // 0x358 - Command parameter/length
    uint32_t command_data;                // 0x360 - Additional command data
    
    // System state
    uint8_t work_mode_flag;               // 0x364 - Work mode state flag
    
    // Large buffer area
    uint8_t large_buffer[0x100];          // 0x600 (0x258 + 0x3a8) - 256-byte buffer
    
    // Additional fields found in master_process_get_req.c
    uint8_t spinlock[0x80];              // 0x80 - Spinlock area
    uint8_t extended_data[0x1000];       // 0x1000+ - Extended data area
    // ... many more fields extending to at least 0x1054
};
```




