#ifndef __PERIM_TEST_HPP__
#define __PERIM_TEST_HPP__

#include "gtest/gtest.h"

#include "rectangle.hpp"

TEST(PerimTest, PerimEvaluateZero) {
    rectangle* test = new rectangle(0, 0);
    EXPECT_EQ(test->perimeter(), 0);
}

TEST(PerimTest, PerimEvaluateOneZero) {
    rectangle* test = new rectangle(696969, 0);
    EXPECT_EQ(test->perimeter(), 0);
}

TEST(PerimTest, PerimEvaluateInts) {
    rectangle* test = new rectangle(3, 5);
    EXPECT_EQ(test->perimeter(), 16);
}

TEST(PerimTest, PerimEvaluateInts2) {
    rectangle* test = new rectangle(4, 8);
    EXPECT_EQ(test->perimeter(), 24);
}

#endif
