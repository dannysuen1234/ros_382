// Auto-generated. Do not edit!

// (in-package mir_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class SafetyStatus {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.is_connected = null;
      this.is_firmware_ok = null;
      this.firmware_version = null;
      this.in_protective_stop = null;
      this.in_emergency_stop = null;
      this.sto_feedback = null;
      this.is_restart_required = null;
      this.is_safety_muted = null;
      this.max_lin_speed = null;
      this.max_rot_speed = null;
      this.mute_mask = null;
      this.partial_mute_mask = null;
      this.is_limited_speed_active = null;
      this.is_lifter_down = null;
      this.in_sleep_mode = null;
      this.in_manual_mode = null;
      this.is_manual_mode_restart_required = null;
    }
    else {
      if (initObj.hasOwnProperty('is_connected')) {
        this.is_connected = initObj.is_connected
      }
      else {
        this.is_connected = false;
      }
      if (initObj.hasOwnProperty('is_firmware_ok')) {
        this.is_firmware_ok = initObj.is_firmware_ok
      }
      else {
        this.is_firmware_ok = false;
      }
      if (initObj.hasOwnProperty('firmware_version')) {
        this.firmware_version = initObj.firmware_version
      }
      else {
        this.firmware_version = 0;
      }
      if (initObj.hasOwnProperty('in_protective_stop')) {
        this.in_protective_stop = initObj.in_protective_stop
      }
      else {
        this.in_protective_stop = false;
      }
      if (initObj.hasOwnProperty('in_emergency_stop')) {
        this.in_emergency_stop = initObj.in_emergency_stop
      }
      else {
        this.in_emergency_stop = false;
      }
      if (initObj.hasOwnProperty('sto_feedback')) {
        this.sto_feedback = initObj.sto_feedback
      }
      else {
        this.sto_feedback = false;
      }
      if (initObj.hasOwnProperty('is_restart_required')) {
        this.is_restart_required = initObj.is_restart_required
      }
      else {
        this.is_restart_required = false;
      }
      if (initObj.hasOwnProperty('is_safety_muted')) {
        this.is_safety_muted = initObj.is_safety_muted
      }
      else {
        this.is_safety_muted = false;
      }
      if (initObj.hasOwnProperty('max_lin_speed')) {
        this.max_lin_speed = initObj.max_lin_speed
      }
      else {
        this.max_lin_speed = 0.0;
      }
      if (initObj.hasOwnProperty('max_rot_speed')) {
        this.max_rot_speed = initObj.max_rot_speed
      }
      else {
        this.max_rot_speed = 0.0;
      }
      if (initObj.hasOwnProperty('mute_mask')) {
        this.mute_mask = initObj.mute_mask
      }
      else {
        this.mute_mask = 0;
      }
      if (initObj.hasOwnProperty('partial_mute_mask')) {
        this.partial_mute_mask = initObj.partial_mute_mask
      }
      else {
        this.partial_mute_mask = 0;
      }
      if (initObj.hasOwnProperty('is_limited_speed_active')) {
        this.is_limited_speed_active = initObj.is_limited_speed_active
      }
      else {
        this.is_limited_speed_active = false;
      }
      if (initObj.hasOwnProperty('is_lifter_down')) {
        this.is_lifter_down = initObj.is_lifter_down
      }
      else {
        this.is_lifter_down = false;
      }
      if (initObj.hasOwnProperty('in_sleep_mode')) {
        this.in_sleep_mode = initObj.in_sleep_mode
      }
      else {
        this.in_sleep_mode = false;
      }
      if (initObj.hasOwnProperty('in_manual_mode')) {
        this.in_manual_mode = initObj.in_manual_mode
      }
      else {
        this.in_manual_mode = false;
      }
      if (initObj.hasOwnProperty('is_manual_mode_restart_required')) {
        this.is_manual_mode_restart_required = initObj.is_manual_mode_restart_required
      }
      else {
        this.is_manual_mode_restart_required = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SafetyStatus
    // Serialize message field [is_connected]
    bufferOffset = _serializer.bool(obj.is_connected, buffer, bufferOffset);
    // Serialize message field [is_firmware_ok]
    bufferOffset = _serializer.bool(obj.is_firmware_ok, buffer, bufferOffset);
    // Serialize message field [firmware_version]
    bufferOffset = _serializer.int32(obj.firmware_version, buffer, bufferOffset);
    // Serialize message field [in_protective_stop]
    bufferOffset = _serializer.bool(obj.in_protective_stop, buffer, bufferOffset);
    // Serialize message field [in_emergency_stop]
    bufferOffset = _serializer.bool(obj.in_emergency_stop, buffer, bufferOffset);
    // Serialize message field [sto_feedback]
    bufferOffset = _serializer.bool(obj.sto_feedback, buffer, bufferOffset);
    // Serialize message field [is_restart_required]
    bufferOffset = _serializer.bool(obj.is_restart_required, buffer, bufferOffset);
    // Serialize message field [is_safety_muted]
    bufferOffset = _serializer.bool(obj.is_safety_muted, buffer, bufferOffset);
    // Serialize message field [max_lin_speed]
    bufferOffset = _serializer.float64(obj.max_lin_speed, buffer, bufferOffset);
    // Serialize message field [max_rot_speed]
    bufferOffset = _serializer.float64(obj.max_rot_speed, buffer, bufferOffset);
    // Serialize message field [mute_mask]
    bufferOffset = _serializer.uint8(obj.mute_mask, buffer, bufferOffset);
    // Serialize message field [partial_mute_mask]
    bufferOffset = _serializer.uint8(obj.partial_mute_mask, buffer, bufferOffset);
    // Serialize message field [is_limited_speed_active]
    bufferOffset = _serializer.bool(obj.is_limited_speed_active, buffer, bufferOffset);
    // Serialize message field [is_lifter_down]
    bufferOffset = _serializer.bool(obj.is_lifter_down, buffer, bufferOffset);
    // Serialize message field [in_sleep_mode]
    bufferOffset = _serializer.bool(obj.in_sleep_mode, buffer, bufferOffset);
    // Serialize message field [in_manual_mode]
    bufferOffset = _serializer.bool(obj.in_manual_mode, buffer, bufferOffset);
    // Serialize message field [is_manual_mode_restart_required]
    bufferOffset = _serializer.bool(obj.is_manual_mode_restart_required, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SafetyStatus
    let len;
    let data = new SafetyStatus(null);
    // Deserialize message field [is_connected]
    data.is_connected = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [is_firmware_ok]
    data.is_firmware_ok = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [firmware_version]
    data.firmware_version = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [in_protective_stop]
    data.in_protective_stop = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [in_emergency_stop]
    data.in_emergency_stop = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [sto_feedback]
    data.sto_feedback = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [is_restart_required]
    data.is_restart_required = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [is_safety_muted]
    data.is_safety_muted = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [max_lin_speed]
    data.max_lin_speed = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [max_rot_speed]
    data.max_rot_speed = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [mute_mask]
    data.mute_mask = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [partial_mute_mask]
    data.partial_mute_mask = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [is_limited_speed_active]
    data.is_limited_speed_active = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [is_lifter_down]
    data.is_lifter_down = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [in_sleep_mode]
    data.in_sleep_mode = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [in_manual_mode]
    data.in_manual_mode = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [is_manual_mode_restart_required]
    data.is_manual_mode_restart_required = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 34;
  }

  static datatype() {
    // Returns string type for a message object
    return 'mir_msgs/SafetyStatus';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'f5cb6a913e2b7e074185c459a63c7796';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool is_connected
    
    bool is_firmware_ok
    int32 firmware_version
    
    bool in_protective_stop
    bool in_emergency_stop
    bool sto_feedback
    bool is_restart_required
    
    bool is_safety_muted
    float64 max_lin_speed
    float64 max_rot_speed
    
    # Defines for filling out the mute_mask
    uint8 MUTE_FRONT_RIGHT  = 1
    uint8 MUTE_FRONT_CENTER = 2
    uint8 MUTE_FRONT_LEFT   = 4
    uint8 MUTE_LEFT_CENTER  = 8
    uint8 MUTE_REAR_LEFT    = 16
    uint8 MUTE_REAR_CENTER  = 32
    uint8 MUTE_REAR_RIGHT   = 64
    uint8 MUTE_RIGHT_CENTER = 128
    
    uint8 MUTE_FRONT        = 7
    uint8 MUTE_LEFT         = 28
    uint8 MUTE_REAR         = 112
    uint8 MUTE_RIGHT        = 193
    uint8 MUTE_SIDES        = 221
    uint8 MUTE_ALL          = 255
    
    uint8 mute_mask
    uint8 partial_mute_mask
    
    bool is_limited_speed_active
    bool is_lifter_down
    bool in_sleep_mode
    
    bool in_manual_mode
    bool is_manual_mode_restart_required
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SafetyStatus(null);
    if (msg.is_connected !== undefined) {
      resolved.is_connected = msg.is_connected;
    }
    else {
      resolved.is_connected = false
    }

    if (msg.is_firmware_ok !== undefined) {
      resolved.is_firmware_ok = msg.is_firmware_ok;
    }
    else {
      resolved.is_firmware_ok = false
    }

    if (msg.firmware_version !== undefined) {
      resolved.firmware_version = msg.firmware_version;
    }
    else {
      resolved.firmware_version = 0
    }

    if (msg.in_protective_stop !== undefined) {
      resolved.in_protective_stop = msg.in_protective_stop;
    }
    else {
      resolved.in_protective_stop = false
    }

    if (msg.in_emergency_stop !== undefined) {
      resolved.in_emergency_stop = msg.in_emergency_stop;
    }
    else {
      resolved.in_emergency_stop = false
    }

    if (msg.sto_feedback !== undefined) {
      resolved.sto_feedback = msg.sto_feedback;
    }
    else {
      resolved.sto_feedback = false
    }

    if (msg.is_restart_required !== undefined) {
      resolved.is_restart_required = msg.is_restart_required;
    }
    else {
      resolved.is_restart_required = false
    }

    if (msg.is_safety_muted !== undefined) {
      resolved.is_safety_muted = msg.is_safety_muted;
    }
    else {
      resolved.is_safety_muted = false
    }

    if (msg.max_lin_speed !== undefined) {
      resolved.max_lin_speed = msg.max_lin_speed;
    }
    else {
      resolved.max_lin_speed = 0.0
    }

    if (msg.max_rot_speed !== undefined) {
      resolved.max_rot_speed = msg.max_rot_speed;
    }
    else {
      resolved.max_rot_speed = 0.0
    }

    if (msg.mute_mask !== undefined) {
      resolved.mute_mask = msg.mute_mask;
    }
    else {
      resolved.mute_mask = 0
    }

    if (msg.partial_mute_mask !== undefined) {
      resolved.partial_mute_mask = msg.partial_mute_mask;
    }
    else {
      resolved.partial_mute_mask = 0
    }

    if (msg.is_limited_speed_active !== undefined) {
      resolved.is_limited_speed_active = msg.is_limited_speed_active;
    }
    else {
      resolved.is_limited_speed_active = false
    }

    if (msg.is_lifter_down !== undefined) {
      resolved.is_lifter_down = msg.is_lifter_down;
    }
    else {
      resolved.is_lifter_down = false
    }

    if (msg.in_sleep_mode !== undefined) {
      resolved.in_sleep_mode = msg.in_sleep_mode;
    }
    else {
      resolved.in_sleep_mode = false
    }

    if (msg.in_manual_mode !== undefined) {
      resolved.in_manual_mode = msg.in_manual_mode;
    }
    else {
      resolved.in_manual_mode = false
    }

    if (msg.is_manual_mode_restart_required !== undefined) {
      resolved.is_manual_mode_restart_required = msg.is_manual_mode_restart_required;
    }
    else {
      resolved.is_manual_mode_restart_required = false
    }

    return resolved;
    }
};

// Constants for message
SafetyStatus.Constants = {
  MUTE_FRONT_RIGHT: 1,
  MUTE_FRONT_CENTER: 2,
  MUTE_FRONT_LEFT: 4,
  MUTE_LEFT_CENTER: 8,
  MUTE_REAR_LEFT: 16,
  MUTE_REAR_CENTER: 32,
  MUTE_REAR_RIGHT: 64,
  MUTE_RIGHT_CENTER: 128,
  MUTE_FRONT: 7,
  MUTE_LEFT: 28,
  MUTE_REAR: 112,
  MUTE_RIGHT: 193,
  MUTE_SIDES: 221,
  MUTE_ALL: 255,
}

module.exports = SafetyStatus;
