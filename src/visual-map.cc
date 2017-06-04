#include "atlas/visual-map.h"

VisualMap::VisualMap(){
  Landmark landmark(1);
  landmark_set_.push_back(landmark);
}

const LandmarkSet& VisualMap::getFeatures(){
  return landmark_set_;
}
