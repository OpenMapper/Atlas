#ifndef FEATURE_H_
#define FEATURE_H_

#include <vector>

class Feature;

typedef std::vector<Feature> FeatureSet;

class Feature {
 public:
  Feature(int descriptor, int x_position = 0, int y_position = 0);
  void setFeatureValue(int descriptor);
 protected:
  int descriptor_;
  int x_position_;
  int y_position_;
}; 
#endif  // FEATURE_H_
