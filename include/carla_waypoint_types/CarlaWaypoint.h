// Generated by gencpp from file carla_waypoint_types/CarlaWaypoint.msg
// DO NOT EDIT!


#ifndef CARLA_WAYPOINT_TYPES_MESSAGE_CARLAWAYPOINT_H
#define CARLA_WAYPOINT_TYPES_MESSAGE_CARLAWAYPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace carla_waypoint_types
{
template <class ContainerAllocator>
struct CarlaWaypoint_
{
  typedef CarlaWaypoint_<ContainerAllocator> Type;

  CarlaWaypoint_()
    : road_id(0)
    , section_id(0)
    , lane_id(0)
    , is_junction(false)
    , pose()  {
    }
  CarlaWaypoint_(const ContainerAllocator& _alloc)
    : road_id(0)
    , section_id(0)
    , lane_id(0)
    , is_junction(false)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _road_id_type;
  _road_id_type road_id;

   typedef int32_t _section_id_type;
  _section_id_type section_id;

   typedef int32_t _lane_id_type;
  _lane_id_type lane_id;

   typedef uint8_t _is_junction_type;
  _is_junction_type is_junction;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> const> ConstPtr;

}; // struct CarlaWaypoint_

typedef ::carla_waypoint_types::CarlaWaypoint_<std::allocator<void> > CarlaWaypoint;

typedef boost::shared_ptr< ::carla_waypoint_types::CarlaWaypoint > CarlaWaypointPtr;
typedef boost::shared_ptr< ::carla_waypoint_types::CarlaWaypoint const> CarlaWaypointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace carla_waypoint_types

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/melodic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'carla_waypoint_types': ['/home/himanshu/carla-ros-bridge/catkin_ws/src/carla_waypoint_types/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "99235d247406855b2598c797ec698ae4";
  }

  static const char* value(const ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x99235d247406855bULL;
  static const uint64_t static_value2 = 0x2598c797ec698ae4ULL;
};

template<class ContainerAllocator>
struct DataType< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "carla_waypoint_types/CarlaWaypoint";
  }

  static const char* value(const ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"# Copyright (c) 2020 Intel Corporation.\n"
"#\n"
"# This work is licensed under the terms of the MIT license.\n"
"# For a copy, see <https://opensource.org/licenses/MIT>.\n"
"#\n"
"\n"
"int32 road_id\n"
"int32 section_id\n"
"int32 lane_id\n"
"bool is_junction\n"
"geometry_msgs/Pose pose\n"
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

  static const char* value(const ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.road_id);
      stream.next(m.section_id);
      stream.next(m.lane_id);
      stream.next(m.is_junction);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CarlaWaypoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::carla_waypoint_types::CarlaWaypoint_<ContainerAllocator>& v)
  {
    s << indent << "road_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.road_id);
    s << indent << "section_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.section_id);
    s << indent << "lane_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lane_id);
    s << indent << "is_junction: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_junction);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARLA_WAYPOINT_TYPES_MESSAGE_CARLAWAYPOINT_H
