;; Auto-generated. Do not edit!


(when (boundp 'carla_ros_scenario_runner_types::ExecuteScenario)
  (if (not (find-package "CARLA_ROS_SCENARIO_RUNNER_TYPES"))
    (make-package "CARLA_ROS_SCENARIO_RUNNER_TYPES"))
  (shadow 'ExecuteScenario (find-package "CARLA_ROS_SCENARIO_RUNNER_TYPES")))
(unless (find-package "CARLA_ROS_SCENARIO_RUNNER_TYPES::EXECUTESCENARIO")
  (make-package "CARLA_ROS_SCENARIO_RUNNER_TYPES::EXECUTESCENARIO"))
(unless (find-package "CARLA_ROS_SCENARIO_RUNNER_TYPES::EXECUTESCENARIOREQUEST")
  (make-package "CARLA_ROS_SCENARIO_RUNNER_TYPES::EXECUTESCENARIOREQUEST"))
(unless (find-package "CARLA_ROS_SCENARIO_RUNNER_TYPES::EXECUTESCENARIORESPONSE")
  (make-package "CARLA_ROS_SCENARIO_RUNNER_TYPES::EXECUTESCENARIORESPONSE"))

(in-package "ROS")





(defclass carla_ros_scenario_runner_types::ExecuteScenarioRequest
  :super ros::object
  :slots (_scenario ))

(defmethod carla_ros_scenario_runner_types::ExecuteScenarioRequest
  (:init
   (&key
    ((:scenario __scenario) (instance carla_ros_scenario_runner_types::CarlaScenario :init))
    )
   (send-super :init)
   (setq _scenario __scenario)
   self)
  (:scenario
   (&rest __scenario)
   (if (keywordp (car __scenario))
       (send* _scenario __scenario)
     (progn
       (if __scenario (setq _scenario (car __scenario)))
       _scenario)))
  (:serialization-length
   ()
   (+
    ;; carla_ros_scenario_runner_types/CarlaScenario _scenario
    (send _scenario :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; carla_ros_scenario_runner_types/CarlaScenario _scenario
       (send _scenario :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; carla_ros_scenario_runner_types/CarlaScenario _scenario
     (send _scenario :deserialize buf ptr-) (incf ptr- (send _scenario :serialization-length))
   ;;
   self)
  )

(defclass carla_ros_scenario_runner_types::ExecuteScenarioResponse
  :super ros::object
  :slots (_result ))

(defmethod carla_ros_scenario_runner_types::ExecuteScenarioResponse
  (:init
   (&key
    ((:result __result) nil)
    )
   (send-super :init)
   (setq _result __result)
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; bool _result
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _result
       (if _result (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _result
     (setq _result (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass carla_ros_scenario_runner_types::ExecuteScenario
  :super ros::object
  :slots ())

(setf (get carla_ros_scenario_runner_types::ExecuteScenario :md5sum-) "187c543ddd5b7cc9946c7300a36a0316")
(setf (get carla_ros_scenario_runner_types::ExecuteScenario :datatype-) "carla_ros_scenario_runner_types/ExecuteScenario")
(setf (get carla_ros_scenario_runner_types::ExecuteScenario :request) carla_ros_scenario_runner_types::ExecuteScenarioRequest)
(setf (get carla_ros_scenario_runner_types::ExecuteScenario :response) carla_ros_scenario_runner_types::ExecuteScenarioResponse)

(defmethod carla_ros_scenario_runner_types::ExecuteScenarioRequest
  (:response () (instance carla_ros_scenario_runner_types::ExecuteScenarioResponse :init)))

(setf (get carla_ros_scenario_runner_types::ExecuteScenarioRequest :md5sum-) "187c543ddd5b7cc9946c7300a36a0316")
(setf (get carla_ros_scenario_runner_types::ExecuteScenarioRequest :datatype-) "carla_ros_scenario_runner_types/ExecuteScenarioRequest")
(setf (get carla_ros_scenario_runner_types::ExecuteScenarioRequest :definition-)
      "





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
---
bool result


")

(setf (get carla_ros_scenario_runner_types::ExecuteScenarioResponse :md5sum-) "187c543ddd5b7cc9946c7300a36a0316")
(setf (get carla_ros_scenario_runner_types::ExecuteScenarioResponse :datatype-) "carla_ros_scenario_runner_types/ExecuteScenarioResponse")
(setf (get carla_ros_scenario_runner_types::ExecuteScenarioResponse :definition-)
      "





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
---
bool result


")



(provide :carla_ros_scenario_runner_types/ExecuteScenario "187c543ddd5b7cc9946c7300a36a0316")


