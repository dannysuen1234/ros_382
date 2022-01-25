#!/usr/bin/env python2

import rospy
from fake_ar_publisher.msg import ARMarker
from myworkcell_core.srv import LocalizePart
from tf2_ros import Buffer
from tf2_ros import TransformListener
from geometry_msgs.msg import PoseStamped
import tf2_geometry_msgs
from tf import TransformerROS
import tf2_ros
import time

import tf
def callback(msg):
	global last_msg
	last_msg = msg
	

def server_callback(req):
	print("printing", req.base_frame)
	p = last_msg
	
	if p ==None:	
		return None
	p.header.frame_id = "world"
	print(p)

	target_pose_from_cam = PoseStamped()
	
	target_pose_from_cam.header = p.header
	target_pose_from_cam.pose = p.pose.pose
	
	t = tf.TransformListener()

	
	t.waitForTransform(req.base_frame, target_pose_from_cam.header.frame_id, rospy.Time(0), rospy.Duration(3.0))
	target_pose_from_req = t.transformPose(req.base_frame, target_pose_from_cam)

	print("result is", target_pose_from_req)



	
	
	
	

def server():
	
	s = rospy.Service('localize_part', LocalizePart, server_callback)
	rospy.loginfo('service ready')
	rospy.spin()

if __name__ == '__main__':

	

	last_msg = None
	rospy.init_node('vision_node')
	#rospy.loginfo("Hello World")
	rospy.Subscriber("ar_pose_marker", ARMarker, callback)
	tfBuffer = TransformerROS()
	#listener = TransformListener(tfBuffer)
	server()
	rospy.loginfo("service node starting")
	rospy.spin()

