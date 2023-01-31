#include "pch.h"
#include<gtest/gtest.h>
#include"C:\Users\yatha\source\repos\Sample-Test1\sampletest2\Header.h"

TEST(unitTest, checker) {
  EXPECT_EQ(1, lengthchecker("Hello1"));
  EXPECT_EQ(1, upperchecker("Hello1"));
  EXPECT_EQ(1, lowerchecker("Hello1"));
  EXPECT_EQ(1, specialchecker("Hello1"));
  EXPECT_EQ(1, numericchecker("Hello1"));
}