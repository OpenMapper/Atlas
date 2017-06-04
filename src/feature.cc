#include "atlas/feature.h"

Feature::Feature(int descriptor, int x_position, int y_position):
descriptor_(descriptor), x_position_(x_position), y_position_(y_position){}

void Feature::setFeatureValue(int descriptor) {
  descriptor_ = descriptor;
}
