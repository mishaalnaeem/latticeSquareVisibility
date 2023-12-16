#include <gtest/gtest.h>
#include "latticeSquares.cpp" 

uint64_t squareCount(uint64_t n);

class SquareCountTest : public ::testing::Test {

};

TEST_F(SquareCountTest, TestSquareCountMin) {
   ASSERT_EQ(squareCount(1), 1);
}

TEST_F(SquareCountTest, TestSquareCountWithN2) {
   ASSERT_EQ(squareCount(2), 5);
}

TEST_F(SquareCountTest, TestSquareCountWithN3) {
   ASSERT_EQ(squareCount(3), 14);
}

TEST_F(SquareCountTest, TestSquareCountZero) {
   ASSERT_EQ(squareCount(0), 0);
}

TEST_F(SquareCountTest, TestSquareCountNegative) {
   EXPECT_THROW(squareCount(-1), std::invalid_argument);
}

TEST_F(SquareCountTest, TestSquareCountOverflow) {
   EXPECT_THROW(squareCount(std::numeric_limits<uint64_t>::max()), std::overflow_error);
}

int main(int argc, char **argv) {
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}