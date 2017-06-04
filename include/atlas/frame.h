#ifndef FRAME_H_
#define FRAME_H_

#include <string>

#include "feature.h"

class Frame {
 public:
  Frame();
  const FeatureSet& getFeatures();

 private:
  FeatureSet feature_set_;
};

#endif  // FRAME_H_
