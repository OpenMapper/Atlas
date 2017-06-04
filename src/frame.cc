#include "atlas/frame.h"

Frame::Frame(){
  Feature feature(1);
  feature_set_.push_back(feature);
}

const FeatureSet& Frame::getFeatures(){
  return feature_set_;
}
