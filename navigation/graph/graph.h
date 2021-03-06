/************************************************************************
*************************************************************************
 Reminder: None of the functions are set in stone, these are just in place
 to provide guideance on what we will need to implement.  Make whatever 
 changes you think are necessary.
 ************************************************************************
 ***********************************************************************/

#ifndef GRAPH_H
#define GRAPH_H

#include "navigation.h"

class VisGraph
{
 public:
  VisGraph();
  ~VisGraph();
  bool addNode(FrameData* fdata);
  void* getNode();
  bool removeNode();
 protected:
  //need a data structure to implement the configuration space
  //a quad tree would make sense
};

#endif
