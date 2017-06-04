#ifndef LANDMARK_H_
#define LANDMARK_H_

class Landmark {
 public:
  Landmark(int descriptor);
  void setLandmarkValue(int descriptor);
 protected:
  int descriptor_;
};


#endif  // LANDMARK_H_
