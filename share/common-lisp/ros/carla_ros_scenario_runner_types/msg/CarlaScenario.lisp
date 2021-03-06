; Auto-generated. Do not edit!


(cl:in-package carla_ros_scenario_runner_types-msg)


;//! \htmlinclude CarlaScenario.msg.html

(cl:defclass <CarlaScenario> (roslisp-msg-protocol:ros-message)
  ((name
    :reader name
    :initarg :name
    :type cl:string
    :initform "")
   (scenario_file
    :reader scenario_file
    :initarg :scenario_file
    :type cl:string
    :initform "")
   (destination
    :reader destination
    :initarg :destination
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (target_speed
    :reader target_speed
    :initarg :target_speed
    :type cl:float
    :initform 0.0))
)

(cl:defclass CarlaScenario (<CarlaScenario>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CarlaScenario>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CarlaScenario)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name carla_ros_scenario_runner_types-msg:<CarlaScenario> is deprecated: use carla_ros_scenario_runner_types-msg:CarlaScenario instead.")))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <CarlaScenario>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader carla_ros_scenario_runner_types-msg:name-val is deprecated.  Use carla_ros_scenario_runner_types-msg:name instead.")
  (name m))

(cl:ensure-generic-function 'scenario_file-val :lambda-list '(m))
(cl:defmethod scenario_file-val ((m <CarlaScenario>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader carla_ros_scenario_runner_types-msg:scenario_file-val is deprecated.  Use carla_ros_scenario_runner_types-msg:scenario_file instead.")
  (scenario_file m))

(cl:ensure-generic-function 'destination-val :lambda-list '(m))
(cl:defmethod destination-val ((m <CarlaScenario>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader carla_ros_scenario_runner_types-msg:destination-val is deprecated.  Use carla_ros_scenario_runner_types-msg:destination instead.")
  (destination m))

(cl:ensure-generic-function 'target_speed-val :lambda-list '(m))
(cl:defmethod target_speed-val ((m <CarlaScenario>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader carla_ros_scenario_runner_types-msg:target_speed-val is deprecated.  Use carla_ros_scenario_runner_types-msg:target_speed instead.")
  (target_speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CarlaScenario>) ostream)
  "Serializes a message object of type '<CarlaScenario>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'name))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'scenario_file))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'scenario_file))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'destination) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'target_speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CarlaScenario>) istream)
  "Deserializes a message object of type '<CarlaScenario>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'scenario_file) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'scenario_file) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'destination) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'target_speed) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CarlaScenario>)))
  "Returns string type for a message object of type '<CarlaScenario>"
  "carla_ros_scenario_runner_types/CarlaScenario")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CarlaScenario)))
  "Returns string type for a message object of type 'CarlaScenario"
  "carla_ros_scenario_runner_types/CarlaScenario")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CarlaScenario>)))
  "Returns md5sum for a message object of type '<CarlaScenario>"
  "a57b70b952db486ef90799fd443235a8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CarlaScenario)))
  "Returns md5sum for a message object of type 'CarlaScenario"
  "a57b70b952db486ef90799fd443235a8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CarlaScenario>)))
  "Returns full string definition for message of type '<CarlaScenario>"
  (cl:format cl:nil "#~%# Copyright (c) 2020 Intel Corporation.~%#~%# This work is licensed under the terms of the MIT license.~%# For a copy, see <https://opensource.org/licenses/MIT>.~%#~%string name~%string scenario_file~%geometry_msgs/Pose destination~%float64 target_speed~%~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CarlaScenario)))
  "Returns full string definition for message of type 'CarlaScenario"
  (cl:format cl:nil "#~%# Copyright (c) 2020 Intel Corporation.~%#~%# This work is licensed under the terms of the MIT license.~%# For a copy, see <https://opensource.org/licenses/MIT>.~%#~%string name~%string scenario_file~%geometry_msgs/Pose destination~%float64 target_speed~%~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CarlaScenario>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'name))
     4 (cl:length (cl:slot-value msg 'scenario_file))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'destination))
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CarlaScenario>))
  "Converts a ROS message object to a list"
  (cl:list 'CarlaScenario
    (cl:cons ':name (name msg))
    (cl:cons ':scenario_file (scenario_file msg))
    (cl:cons ':destination (destination msg))
    (cl:cons ':target_speed (target_speed msg))
))
