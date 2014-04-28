#include <creative_gesture_launch/creative_gesture_ros.h>

using namespace creative_gesture;
int main(int argc, char* argv[]){
  ros::init(argc, argv, "test_creative");

  CreativeGestureRos creative_gesture;
  creative_gesture.Run();
}
