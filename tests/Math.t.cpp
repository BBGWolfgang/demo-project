// tests.cpp
#include <gtest/gtest.h>
#include <Math.h>

TEST(MathTest, add0s) {
  EXPECT_DOUBLE_EQ(DemoProject::Math::add(0,0), 0);
}

TEST(MathTest, addTo0) {
  EXPECT_DOUBLE_EQ(DemoProject::Math::add(-1,1), 0);
}

TEST(MathTest, addPos) {
  EXPECT_GT(DemoProject::Math::add(0,1), 0);
}

TEST(MathTest, addNeg) {
  EXPECT_LT(DemoProject::Math::add(-1,0), 0);
}

TEST(MathTest, mul0s) {
  EXPECT_DOUBLE_EQ(DemoProject::Math::multiply(0,0), 0);
}

TEST(MathTest, mulTo0) {
  EXPECT_DOUBLE_EQ(DemoProject::Math::multiply(1,0), 0);
}

TEST(MathTest, mulPos) {
  EXPECT_GT(DemoProject::Math::multiply(1,1), 0);
}

TEST(MathTest, mulNeg) {
  EXPECT_GT(DemoProject::Math::multiply(-1,-1), 0);
}

TEST(MathTest, mulNegPos) {
  EXPECT_GT(DemoProject::Math::multiply(-1, 1), 0);
}


int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
