# Install script for directory: /home/vtl/industrial_ws/src/mir_robot/mir_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/vtl/industrial_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs/msg" TYPE FILE FILES
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/BatteryCurrents.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/BMSData.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/BrakeState.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/ChargingState.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Device.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Devices.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Encoders.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/EncoderTestEntry.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Error.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Event.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Events.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/ExternalRobot.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/ExternalRobots.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Gpio.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/GripperState.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/HeightState.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/HookExtendedStatus.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/HookStatus.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/IOs.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/JoystickVel.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/LocalMapStat.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/MirExtra.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/MissionCtrlCommand.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/MissionCtrlState.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/PalletLifterStatus.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Path.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Pendant.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/PlanSegment.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/PlanSegments.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Pose2D.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/PowerBoardMotorStatus.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/PrecisionDockingStatus.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Proximity.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/ResourcesState.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/ResourceState.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/RobotMode.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/RobotState.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/RobotStatus.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/SafetyStatus.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Serial.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/SoundEvent.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/StampedEncoders.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Trolley.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/Twist2D.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/UserPrompt.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/WebPath.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/WorldMap.msg"
    "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/msg/WorldModel.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs/cmake" TYPE FILE FILES "/home/vtl/industrial_ws/build/mir_robot/mir_msgs/catkin_generated/installspace/mir_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/vtl/industrial_ws/devel/include/mir_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/vtl/industrial_ws/devel/share/roseus/ros/mir_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/vtl/industrial_ws/devel/share/common-lisp/ros/mir_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/vtl/industrial_ws/devel/share/gennodejs/ros/mir_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/vtl/industrial_ws/devel/lib/python2.7/dist-packages/mir_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/vtl/industrial_ws/devel/lib/python2.7/dist-packages/mir_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/vtl/industrial_ws/build/mir_robot/mir_msgs/catkin_generated/installspace/mir_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs/cmake" TYPE FILE FILES "/home/vtl/industrial_ws/build/mir_robot/mir_msgs/catkin_generated/installspace/mir_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs/cmake" TYPE FILE FILES
    "/home/vtl/industrial_ws/build/mir_robot/mir_msgs/catkin_generated/installspace/mir_msgsConfig.cmake"
    "/home/vtl/industrial_ws/build/mir_robot/mir_msgs/catkin_generated/installspace/mir_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs" TYPE FILE FILES "/home/vtl/industrial_ws/src/mir_robot/mir_msgs/package.xml")
endif()

