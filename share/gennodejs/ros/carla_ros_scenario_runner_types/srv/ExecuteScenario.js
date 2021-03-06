// Auto-generated. Do not edit!

// (in-package carla_ros_scenario_runner_types.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let CarlaScenario = require('../msg/CarlaScenario.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class ExecuteScenarioRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.scenario = null;
    }
    else {
      if (initObj.hasOwnProperty('scenario')) {
        this.scenario = initObj.scenario
      }
      else {
        this.scenario = new CarlaScenario();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ExecuteScenarioRequest
    // Serialize message field [scenario]
    bufferOffset = CarlaScenario.serialize(obj.scenario, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ExecuteScenarioRequest
    let len;
    let data = new ExecuteScenarioRequest(null);
    // Deserialize message field [scenario]
    data.scenario = CarlaScenario.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += CarlaScenario.getMessageSize(object.scenario);
    return length;
  }

  static datatype() {
    // Returns string type for a service object
    return 'carla_ros_scenario_runner_types/ExecuteScenarioRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'bbb073181f183d07c3de4418b78e4cd3';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    
    
    
    
    
    CarlaScenario scenario
    
    ================================================================================
    MSG: carla_ros_scenario_runner_types/CarlaScenario
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
    const resolved = new ExecuteScenarioRequest(null);
    if (msg.scenario !== undefined) {
      resolved.scenario = CarlaScenario.Resolve(msg.scenario)
    }
    else {
      resolved.scenario = new CarlaScenario()
    }

    return resolved;
    }
};

class ExecuteScenarioResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.result = null;
    }
    else {
      if (initObj.hasOwnProperty('result')) {
        this.result = initObj.result
      }
      else {
        this.result = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ExecuteScenarioResponse
    // Serialize message field [result]
    bufferOffset = _serializer.bool(obj.result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ExecuteScenarioResponse
    let len;
    let data = new ExecuteScenarioResponse(null);
    // Deserialize message field [result]
    data.result = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'carla_ros_scenario_runner_types/ExecuteScenarioResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'eb13ac1f1354ccecb7941ee8fa2192e8';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool result
    
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ExecuteScenarioResponse(null);
    if (msg.result !== undefined) {
      resolved.result = msg.result;
    }
    else {
      resolved.result = false
    }

    return resolved;
    }
};

module.exports = {
  Request: ExecuteScenarioRequest,
  Response: ExecuteScenarioResponse,
  md5sum() { return '187c543ddd5b7cc9946c7300a36a0316'; },
  datatype() { return 'carla_ros_scenario_runner_types/ExecuteScenario'; }
};
