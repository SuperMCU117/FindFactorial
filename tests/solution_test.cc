#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FactorialTEST, HandlesZeroCase) {
  Solution solution;
  int input = 0;
  EXPECT_EQ(solution.Factorial(input),1);
  EXPECT_EQ(solution.FactorialRecursive(input),1);
}

TEST(FactorialTEST, HandlesNormalCase) {
  Solution solution;
  int input = 5;
  EXPECT_EQ(solution.Factorial(input),120);
  EXPECT_EQ(solution.FactorialRecursive(input),120);
}

TEST(FactorialTEST, HandlesAnotherNormalCase) {
  Solution solution;
  int input = 3;
  EXPECT_EQ(solution.Factorial(input),6);
  EXPECT_EQ(solution.FactorialRecursive(input),6);
}

TEST(FactorialTEST, HandlesNegativeCase) {
  Solution solution;
  int input = -5;
  EXPECT_EQ(solution.Factorial(input),-1);
  EXPECT_EQ(solution.FactorialRecursive(input),-1);
}