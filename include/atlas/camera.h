#ifndef CAMERA_H_
#define CAMERA_H_

#include <Eigen/Dense>

class Camera {
 public:
  Camera();

 private:
  Eigen::Vector3f rotation_;
  Eigen::Vector3f position_;
  Eigen::Matrix3f projection_matrix_;
};

#endif  // CAMERA_H_
