// Generated by gencpp from file mir_msgs/SafetyStatus.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_SAFETYSTATUS_H
#define MIR_MSGS_MESSAGE_SAFETYSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mir_msgs
{
template <class ContainerAllocator>
struct SafetyStatus_
{
  typedef SafetyStatus_<ContainerAllocator> Type;

  SafetyStatus_()
    : is_connected(false)
    , is_firmware_ok(false)
    , firmware_version(0)
    , in_protective_stop(false)
    , in_emergency_stop(false)
    , sto_feedback(false)
    , is_restart_required(false)
    , is_safety_muted(false)
    , max_lin_speed(0.0)
    , max_rot_speed(0.0)
    , mute_mask(0)
    , partial_mute_mask(0)
    , is_limited_speed_active(false)
    , is_lifter_down(false)
    , in_sleep_mode(false)
    , in_manual_mode(false)
    , is_manual_mode_restart_required(false)  {
    }
  SafetyStatus_(const ContainerAllocator& _alloc)
    : is_connected(false)
    , is_firmware_ok(false)
    , firmware_version(0)
    , in_protective_stop(false)
    , in_emergency_stop(false)
    , sto_feedback(false)
    , is_restart_required(false)
    , is_safety_muted(false)
    , max_lin_speed(0.0)
    , max_rot_speed(0.0)
    , mute_mask(0)
    , partial_mute_mask(0)
    , is_limited_speed_active(false)
    , is_lifter_down(false)
    , in_sleep_mode(false)
    , in_manual_mode(false)
    , is_manual_mode_restart_required(false)  {
  (void)_alloc;
    }



   typedef uint8_t _is_connected_type;
  _is_connected_type is_connected;

   typedef uint8_t _is_firmware_ok_type;
  _is_firmware_ok_type is_firmware_ok;

   typedef int32_t _firmware_version_type;
  _firmware_version_type firmware_version;

   typedef uint8_t _in_protective_stop_type;
  _in_protective_stop_type in_protective_stop;

   typedef uint8_t _in_emergency_stop_type;
  _in_emergency_stop_type in_emergency_stop;

   typedef uint8_t _sto_feedback_type;
  _sto_feedback_type sto_feedback;

   typedef uint8_t _is_restart_required_type;
  _is_restart_required_type is_restart_required;

   typedef uint8_t _is_safety_muted_type;
  _is_safety_muted_type is_safety_muted;

   typedef double _max_lin_speed_type;
  _max_lin_speed_type max_lin_speed;

   typedef double _max_rot_speed_type;
  _max_rot_speed_type max_rot_speed;

   typedef uint8_t _mute_mask_type;
  _mute_mask_type mute_mask;

   typedef uint8_t _partial_mute_mask_type;
  _partial_mute_mask_type partial_mute_mask;

   typedef uint8_t _is_limited_speed_active_type;
  _is_limited_speed_active_type is_limited_speed_active;

   typedef uint8_t _is_lifter_down_type;
  _is_lifter_down_type is_lifter_down;

   typedef uint8_t _in_sleep_mode_type;
  _in_sleep_mode_type in_sleep_mode;

   typedef uint8_t _in_manual_mode_type;
  _in_manual_mode_type in_manual_mode;

   typedef uint8_t _is_manual_mode_restart_required_type;
  _is_manual_mode_restart_required_type is_manual_mode_restart_required;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(MUTE_FRONT_RIGHT)
  #undef MUTE_FRONT_RIGHT
#endif
#if defined(_WIN32) && defined(MUTE_FRONT_CENTER)
  #undef MUTE_FRONT_CENTER
#endif
#if defined(_WIN32) && defined(MUTE_FRONT_LEFT)
  #undef MUTE_FRONT_LEFT
#endif
#if defined(_WIN32) && defined(MUTE_LEFT_CENTER)
  #undef MUTE_LEFT_CENTER
#endif
#if defined(_WIN32) && defined(MUTE_REAR_LEFT)
  #undef MUTE_REAR_LEFT
#endif
#if defined(_WIN32) && defined(MUTE_REAR_CENTER)
  #undef MUTE_REAR_CENTER
#endif
#if defined(_WIN32) && defined(MUTE_REAR_RIGHT)
  #undef MUTE_REAR_RIGHT
#endif
#if defined(_WIN32) && defined(MUTE_RIGHT_CENTER)
  #undef MUTE_RIGHT_CENTER
#endif
#if defined(_WIN32) && defined(MUTE_FRONT)
  #undef MUTE_FRONT
#endif
#if defined(_WIN32) && defined(MUTE_LEFT)
  #undef MUTE_LEFT
#endif
#if defined(_WIN32) && defined(MUTE_REAR)
  #undef MUTE_REAR
#endif
#if defined(_WIN32) && defined(MUTE_RIGHT)
  #undef MUTE_RIGHT
#endif
#if defined(_WIN32) && defined(MUTE_SIDES)
  #undef MUTE_SIDES
#endif
#if defined(_WIN32) && defined(MUTE_ALL)
  #undef MUTE_ALL
#endif

  enum {
    MUTE_FRONT_RIGHT = 1u,
    MUTE_FRONT_CENTER = 2u,
    MUTE_FRONT_LEFT = 4u,
    MUTE_LEFT_CENTER = 8u,
    MUTE_REAR_LEFT = 16u,
    MUTE_REAR_CENTER = 32u,
    MUTE_REAR_RIGHT = 64u,
    MUTE_RIGHT_CENTER = 128u,
    MUTE_FRONT = 7u,
    MUTE_LEFT = 28u,
    MUTE_REAR = 112u,
    MUTE_RIGHT = 193u,
    MUTE_SIDES = 221u,
    MUTE_ALL = 255u,
  };


  typedef boost::shared_ptr< ::mir_msgs::SafetyStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::SafetyStatus_<ContainerAllocator> const> ConstPtr;

}; // struct SafetyStatus_

typedef ::mir_msgs::SafetyStatus_<std::allocator<void> > SafetyStatus;

typedef boost::shared_ptr< ::mir_msgs::SafetyStatus > SafetyStatusPtr;
typedef boost::shared_ptr< ::mir_msgs::SafetyStatus const> SafetyStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::SafetyStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::SafetyStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::SafetyStatus_<ContainerAllocator1> & lhs, const ::mir_msgs::SafetyStatus_<ContainerAllocator2> & rhs)
{
  return lhs.is_connected == rhs.is_connected &&
    lhs.is_firmware_ok == rhs.is_firmware_ok &&
    lhs.firmware_version == rhs.firmware_version &&
    lhs.in_protective_stop == rhs.in_protective_stop &&
    lhs.in_emergency_stop == rhs.in_emergency_stop &&
    lhs.sto_feedback == rhs.sto_feedback &&
    lhs.is_restart_required == rhs.is_restart_required &&
    lhs.is_safety_muted == rhs.is_safety_muted &&
    lhs.max_lin_speed == rhs.max_lin_speed &&
    lhs.max_rot_speed == rhs.max_rot_speed &&
    lhs.mute_mask == rhs.mute_mask &&
    lhs.partial_mute_mask == rhs.partial_mute_mask &&
    lhs.is_limited_speed_active == rhs.is_limited_speed_active &&
    lhs.is_lifter_down == rhs.is_lifter_down &&
    lhs.in_sleep_mode == rhs.in_sleep_mode &&
    lhs.in_manual_mode == rhs.in_manual_mode &&
    lhs.is_manual_mode_restart_required == rhs.is_manual_mode_restart_required;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::SafetyStatus_<ContainerAllocator1> & lhs, const ::mir_msgs::SafetyStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::SafetyStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::SafetyStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::SafetyStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::SafetyStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::SafetyStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::SafetyStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::SafetyStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f5cb6a913e2b7e074185c459a63c7796";
  }

  static const char* value(const ::mir_msgs::SafetyStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf5cb6a913e2b7e07ULL;
  static const uint64_t static_value2 = 0x4185c459a63c7796ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::SafetyStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/SafetyStatus";
  }

  static const char* value(const ::mir_msgs::SafetyStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::SafetyStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool is_connected\n"
"\n"
"bool is_firmware_ok\n"
"int32 firmware_version\n"
"\n"
"bool in_protective_stop\n"
"bool in_emergency_stop\n"
"bool sto_feedback\n"
"bool is_restart_required\n"
"\n"
"bool is_safety_muted\n"
"float64 max_lin_speed\n"
"float64 max_rot_speed\n"
"\n"
"# Defines for filling out the mute_mask\n"
"uint8 MUTE_FRONT_RIGHT  = 1\n"
"uint8 MUTE_FRONT_CENTER = 2\n"
"uint8 MUTE_FRONT_LEFT   = 4\n"
"uint8 MUTE_LEFT_CENTER  = 8\n"
"uint8 MUTE_REAR_LEFT    = 16\n"
"uint8 MUTE_REAR_CENTER  = 32\n"
"uint8 MUTE_REAR_RIGHT   = 64\n"
"uint8 MUTE_RIGHT_CENTER = 128\n"
"\n"
"uint8 MUTE_FRONT        = 7\n"
"uint8 MUTE_LEFT         = 28\n"
"uint8 MUTE_REAR         = 112\n"
"uint8 MUTE_RIGHT        = 193\n"
"uint8 MUTE_SIDES        = 221\n"
"uint8 MUTE_ALL          = 255\n"
"\n"
"uint8 mute_mask\n"
"uint8 partial_mute_mask\n"
"\n"
"bool is_limited_speed_active\n"
"bool is_lifter_down\n"
"bool in_sleep_mode\n"
"\n"
"bool in_manual_mode\n"
"bool is_manual_mode_restart_required\n"
;
  }

  static const char* value(const ::mir_msgs::SafetyStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::SafetyStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_connected);
      stream.next(m.is_firmware_ok);
      stream.next(m.firmware_version);
      stream.next(m.in_protective_stop);
      stream.next(m.in_emergency_stop);
      stream.next(m.sto_feedback);
      stream.next(m.is_restart_required);
      stream.next(m.is_safety_muted);
      stream.next(m.max_lin_speed);
      stream.next(m.max_rot_speed);
      stream.next(m.mute_mask);
      stream.next(m.partial_mute_mask);
      stream.next(m.is_limited_speed_active);
      stream.next(m.is_lifter_down);
      stream.next(m.in_sleep_mode);
      stream.next(m.in_manual_mode);
      stream.next(m.is_manual_mode_restart_required);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SafetyStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::SafetyStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::SafetyStatus_<ContainerAllocator>& v)
  {
    s << indent << "is_connected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_connected);
    s << indent << "is_firmware_ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_firmware_ok);
    s << indent << "firmware_version: ";
    Printer<int32_t>::stream(s, indent + "  ", v.firmware_version);
    s << indent << "in_protective_stop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.in_protective_stop);
    s << indent << "in_emergency_stop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.in_emergency_stop);
    s << indent << "sto_feedback: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sto_feedback);
    s << indent << "is_restart_required: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_restart_required);
    s << indent << "is_safety_muted: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_safety_muted);
    s << indent << "max_lin_speed: ";
    Printer<double>::stream(s, indent + "  ", v.max_lin_speed);
    s << indent << "max_rot_speed: ";
    Printer<double>::stream(s, indent + "  ", v.max_rot_speed);
    s << indent << "mute_mask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mute_mask);
    s << indent << "partial_mute_mask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.partial_mute_mask);
    s << indent << "is_limited_speed_active: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_limited_speed_active);
    s << indent << "is_lifter_down: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_lifter_down);
    s << indent << "in_sleep_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.in_sleep_mode);
    s << indent << "in_manual_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.in_manual_mode);
    s << indent << "is_manual_mode_restart_required: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_manual_mode_restart_required);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_SAFETYSTATUS_H
