// Generated by gencpp from file carla_ros_scenario_runner_types/CarlaScenarioList.msg
// DO NOT EDIT!


#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES_MESSAGE_CARLASCENARIOLIST_H
#define CARLA_ROS_SCENARIO_RUNNER_TYPES_MESSAGE_CARLASCENARIOLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <carla_ros_scenario_runner_types/CarlaScenario.h>

namespace carla_ros_scenario_runner_types
{
template <class ContainerAllocator>
struct CarlaScenarioList_
{
  typedef CarlaScenarioList_<ContainerAllocator> Type;

  CarlaScenarioList_()
    : scenarios()  {
    }
  CarlaScenarioList_(const ContainerAllocator& _alloc)
    : scenarios(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >::other >  _scenarios_type;
  _scenarios_type scenarios;





  typedef boost::shared_ptr< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> const> ConstPtr;

}; // struct CarlaScenarioList_

typedef ::carla_ros_scenario_runner_types::CarlaScenarioList_<std::allocator<void> > CarlaScenarioList;

typedef boost::shared_ptr< ::carla_ros_scenario_runner_types::CarlaScenarioList > CarlaScenarioListPtr;
typedef boost::shared_ptr< ::carla_ros_scenario_runner_types::CarlaScenarioList const> CarlaScenarioListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace carla_ros_scenario_runner_types

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'carla_ros_scenario_runner_types': ['/home/himanshu/carla-ros-bridge/catkin_ws/src/carla_ros_scenario_runner_types/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2049b8f7345d7ac927f7c5e13a4170a0";
  }

  static const char* value(const ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2049b8f7345d7ac9ULL;
  static const uint64_t static_value2 = 0x27f7c5e13a4170a0ULL;
};

template<class ContainerAllocator>
struct DataType< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "carla_ros_scenario_runner_types/CarlaScenarioList";
  }

  static const char* value(const ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"# Copyright (c) 2020 Intel Corporation.\n"
"#\n"
"# This work is licensed under the terms of the MIT license.\n"
"# For a copy, see <https://opensource.org/licenses/MIT>.\n"
"#\n"
"CarlaScenario[] scenarios\n"
"\n"
"\n"
"================================================================================\n"
"MSG: carla_ros_scenario_runner_types/CarlaScenario\n"
"#\n"
"# Copyright (c) 2020 Intel Corporation.\n"
"#\n"
"# This work is licensed under the terms of the MIT license.\n"
"# For a copy, see <https://opensource.org/licenses/MIT>.\n"
"#\n"
"string name\n"
"string scenario_file\n"
"geometry_msgs/Pose destination\n"
"float64 target_speed\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.scenarios);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CarlaScenarioList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::carla_ros_scenario_runner_types::CarlaScenarioList_<ContainerAllocator>& v)
  {
    s << indent << "scenarios[]" << std::endl;
    for (size_t i = 0; i < v.scenarios.size(); ++i)
    {
      s << indent << "  scenarios[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >::stream(s, indent + "    ", v.scenarios[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARLA_ROS_SCENARIO_RUNNER_TYPES_MESSAGE_CARLASCENARIOLIST_H