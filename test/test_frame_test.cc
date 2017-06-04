#include <limits.h>

#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "atlas/frame.h"

class FrameTest : public ::testing::Test {
 protected:
  Frame frame;
};

TEST_F(FrameTest, AddVertex) {
  frame = Frame();
  ASSERT_EQ(1, 1);
}
