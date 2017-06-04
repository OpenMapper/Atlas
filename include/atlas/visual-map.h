#ifndef VISUAL_MAP_H_
#define VISUAL_MAP_H_

#include <map>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

#include "feature.h"
#include "landmark.h"

typedef std::map<std::vector<int>, FeatureSet> FeatureMap;
typedef std::vector<Landmark> LandmarkSet;

class VisualMap {
 public:
  VisualMap();
  const LandmarkSet& getFeatures();
 private:
  LandmarkSet landmark_set_;
};

#endif  // VISUAL_MAP_H_
