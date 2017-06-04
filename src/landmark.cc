#include "atlas/landmark.h"

Landmark::Landmark(int descriptor):
descriptor_(descriptor){}

void Landmark::setLandmarkValue(int descriptor){
  descriptor_ = descriptor;
}
