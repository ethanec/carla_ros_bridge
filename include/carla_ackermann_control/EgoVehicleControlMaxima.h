// Generated by gencpp from file carla_ackermann_control/EgoVehicleControlMaxima.msg
// DO NOT EDIT!


#ifndef CARLA_ACKERMANN_CONTROL_MESSAGE_EGOVEHICLECONTROLMAXIMA_H
#define CARLA_ACKERMANN_CONTROL_MESSAGE_EGOVEHICLECONTROLMAXIMA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace carla_ackermann_control
{
template <class ContainerAllocator>
struct EgoVehicleControlMaxima_
{
  typedef EgoVehicleControlMaxima_<ContainerAllocator> Type;

  EgoVehicleControlMaxima_()
    : max_steering_angle(0.0)
    , max_speed(0.0)
    , max_accel(0.0)
    , max_decel(0.0)
    , min_accel(0.0)
    , max_pedal(0.0)  {
    }
  EgoVehicleControlMaxima_(const ContainerAllocator& _alloc)
    : max_steering_angle(0.0)
    , max_speed(0.0)
    , max_accel(0.0)
    , max_decel(0.0)
    , min_accel(0.0)
    , max_pedal(0.0)  {
  (void)_alloc;
    }



   typedef float _max_steering_angle_type;
  _max_steering_angle_type max_steering_angle;

   typedef float _max_speed_type;
  _max_speed_type max_speed;

   typedef float _max_accel_type;
  _max_accel_type max_accel;

   typedef float _max_decel_type;
  _max_decel_type max_decel;

   typedef float _min_accel_type;
  _min_accel_type min_accel;

   typedef float _max_pedal_type;
  _max_pedal_type max_pedal;





  typedef boost::shared_ptr< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> const> ConstPtr;

}; // struct EgoVehicleControlMaxima_

typedef ::carla_ackermann_control::EgoVehicleControlMaxima_<std::allocator<void> > EgoVehicleControlMaxima;

typedef boost::shared_ptr< ::carla_ackermann_control::EgoVehicleControlMaxima > EgoVehicleControlMaximaPtr;
typedef boost::shared_ptr< ::carla_ackermann_control::EgoVehicleControlMaxima const> EgoVehicleControlMaximaConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace carla_ackermann_control

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'carla_msgs': ['/opt/ros/melodic/share/carla_msgs/cmake/../msg'], 'carla_ackermann_control': ['/home/himanshu/carla-ros-bridge/catkin_ws/src/carla_ackermann_control/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9895ba8c0c51c81d773f7d191f9aeb3e";
  }

  static const char* value(const ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9895ba8c0c51c81dULL;
  static const uint64_t static_value2 = 0x773f7d191f9aeb3eULL;
};

template<class ContainerAllocator>
struct DataType< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> >
{
  static const char* value()
  {
    return "carla_ackermann_control/EgoVehicleControlMaxima";
  }

  static const char* value(const ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"# Copyright (c) 2018-2019 Intel Corporation.\n"
"#\n"
"# This work is licensed under the terms of the MIT license.\n"
"# For a copy, see <https://opensource.org/licenses/MIT>.\n"
"#\n"
"# This represents some ego vehicle control maximal values\n"
"\n"
"# vehicle maximum values\n"
"float32 max_steering_angle\n"
"float32 max_speed\n"
"float32 max_accel\n"
"float32 max_decel\n"
"float32 min_accel\n"
"float32 max_pedal\n"
;
  }

  static const char* value(const ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.max_steering_angle);
      stream.next(m.max_speed);
      stream.next(m.max_accel);
      stream.next(m.max_decel);
      stream.next(m.min_accel);
      stream.next(m.max_pedal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EgoVehicleControlMaxima_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::carla_ackermann_control::EgoVehicleControlMaxima_<ContainerAllocator>& v)
  {
    s << indent << "max_steering_angle: ";
    Printer<float>::stream(s, indent + "  ", v.max_steering_angle);
    s << indent << "max_speed: ";
    Printer<float>::stream(s, indent + "  ", v.max_speed);
    s << indent << "max_accel: ";
    Printer<float>::stream(s, indent + "  ", v.max_accel);
    s << indent << "max_decel: ";
    Printer<float>::stream(s, indent + "  ", v.max_decel);
    s << indent << "min_accel: ";
    Printer<float>::stream(s, indent + "  ", v.min_accel);
    s << indent << "max_pedal: ";
    Printer<float>::stream(s, indent + "  ", v.max_pedal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARLA_ACKERMANN_CONTROL_MESSAGE_EGOVEHICLECONTROLMAXIMA_H