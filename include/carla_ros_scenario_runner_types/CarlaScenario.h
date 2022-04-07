// Generated by gencpp from file carla_ros_scenario_runner_types/CarlaScenario.msg
// DO NOT EDIT!


#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES_MESSAGE_CARLASCENARIO_H
#define CARLA_ROS_SCENARIO_RUNNER_TYPES_MESSAGE_CARLASCENARIO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace carla_ros_scenario_runner_types
{
template <class ContainerAllocator>
struct CarlaScenario_
{
  typedef CarlaScenario_<ContainerAllocator> Type;

  CarlaScenario_()
    : name()
    , scenario_file()
    , destination()
    , target_speed(0.0)  {
    }
  CarlaScenario_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , scenario_file(_alloc)
    , destination(_alloc)
    , target_speed(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _scenario_file_type;
  _scenario_file_type scenario_file;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _destination_type;
  _destination_type destination;

   typedef double _target_speed_type;
  _target_speed_type target_speed;





  typedef boost::shared_ptr< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> const> ConstPtr;

}; // struct CarlaScenario_

typedef ::carla_ros_scenario_runner_types::CarlaScenario_<std::allocator<void> > CarlaScenario;

typedef boost::shared_ptr< ::carla_ros_scenario_runner_types::CarlaScenario > CarlaScenarioPtr;
typedef boost::shared_ptr< ::carla_ros_scenario_runner_types::CarlaScenario const> CarlaScenarioConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a57b70b952db486ef90799fd443235a8";
  }

  static const char* value(const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa57b70b952db486eULL;
  static const uint64_t static_value2 = 0xf90799fd443235a8ULL;
};

template<class ContainerAllocator>
struct DataType< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
{
  static const char* value()
  {
    return "carla_ros_scenario_runner_types/CarlaScenario";
  }

  static const char* value(const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
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

  static const char* value(const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.scenario_file);
      stream.next(m.destination);
      stream.next(m.target_speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CarlaScenario_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "scenario_file: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.scenario_file);
    s << indent << "destination: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.destination);
    s << indent << "target_speed: ";
    Printer<double>::stream(s, indent + "  ", v.target_speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARLA_ROS_SCENARIO_RUNNER_TYPES_MESSAGE_CARLASCENARIO_H