// Auto-generated. Do not edit!

// (in-package carla_ros_scenario_runner_types.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class CarlaScenario {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.name = null;
      this.scenario_file = null;
      this.destination = null;
      this.target_speed = null;
    }
    else {
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = '';
      }
      if (initObj.hasOwnProperty('scenario_file')) {
        this.scenario_file = initObj.scenario_file
      }
      else {
        this.scenario_file = '';
      }
      if (initObj.hasOwnProperty('destination')) {
        this.destination = initObj.destination
      }
      else {
        this.destination = new geometry_msgs.msg.Pose();
      }
      if (initObj.hasOwnProperty('target_speed')) {
        this.target_speed = initObj.target_speed
      }
      else {
        this.target_speed = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type CarlaScenario
    // Serialize message field [name]
    bufferOffset = _serializer.string(obj.name, buffer, bufferOffset);
    // Serialize message field [scenario_file]
    bufferOffset = _serializer.string(obj.scenario_file, buffer, bufferOffset);
    // Serialize message field [destination]
    bufferOffset = geometry_msgs.msg.Pose.serialize(obj.destination, buffer, bufferOffset);
    // Serialize message field [target_speed]
    bufferOffset = _serializer.float64(obj.target_speed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type CarlaScenario
    let len;
    let data = new CarlaScenario(null);
    // Deserialize message field [name]
    data.name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [scenario_file]
    data.scenario_file = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [destination]
    data.destination = geometry_msgs.msg.Pose.deserialize(buffer, bufferOffset);
    // Deserialize message field [target_speed]
    data.target_speed = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.name.length;
    length += object.scenario_file.length;
    return length + 72;
  }

  static datatype() {
    // Returns string type for a message object
    return 'carla_ros_scenario_runner_types/CarlaScenario';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a57b70b952db486ef90799fd443235a8';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    #
    # Copyright (c) 2020 Intel Corporation.
    #
    # This work is licensed under the terms of the MIT license.
    # For a copy, see <https://opensource.org/licenses/MIT>.
    #
    string name
    string scenario_file
    geometry_msgs/Pose destination
    float64 target_speed
    
    
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new CarlaScenario(null);
    if (msg.name !== undefined) {
      resolved.name = msg.name;
    }
    else {
      resolved.name = ''
    }

    if (msg.scenario_file !== undefined) {
      resolved.scenario_file = msg.scenario_file;
    }
    else {
      resolved.scenario_file = ''
    }

    if (msg.destination !== undefined) {
      resolved.destination = geometry_msgs.msg.Pose.Resolve(msg.destination)
    }
    else {
      resolved.destination = new geometry_msgs.msg.Pose()
    }

    if (msg.target_speed !== undefined) {
      resolved.target_speed = msg.target_speed;
    }
    else {
      resolved.target_speed = 0.0
    }

    return resolved;
    }
};

module.exports = CarlaScenario;
