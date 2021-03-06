/************************************************************************
*************************************************************************
 Reminder: None of the functions are set in stone, these are just in place
 to provide guideance on what we will need to implement.  Make whatever 
 changes you think are necessary.
 ************************************************************************
 ***********************************************************************/

#include "navigation.h"

int main(int argc, char** argv)
{
  //TODO: This is only a basic idea of what we will need to do for this
  // section.  We will need to update calls and the control loop as other
  // sections get filled out.
  
  // counter here for now, later on we will have to remove it
  int totalSteps = 100;
  int currStep = 1;
  
  VisGraph map;
  RGBDVisOdometry odom;
  KinectInter camera;
  MapperPathPlanner planner;
  FrameData* prevFrame = NULL;

  while (currStep < totalSteps) {
    // Get RGBD data from current frame
    FrameData* currFrame = camera.getFrame();
    // Get Transformation from previous frame
    odom.getTransformation(prevFrame,currFrame);
    // Add new node to the graph
    map.addNode(currFrame);
    // Get next movement command
    void* cmd = planner.getNextCommand();
    // Execute command
    // TODO: add call to arduino to execute command
    // Wait for command to finish
    int waitlength = 5;
    sleep(waitlength);
    // Prepare for next iteration
    prevFrame = currFrame;
    currStep++;
  }

  return 0;
}
