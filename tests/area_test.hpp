#ifndef __AREA_TEST_HPP__
#define __AREA_TEST_HPP__

#include "gtest/gtest.h"

#include "rectangle.hpp"

TEST(AreaTest, AreaEvaluateZero) {
    rectangle* test = new rectangle(0, 0);
    EXPECT_EQ(test->area(), 0);
}

TEST(AreaTest, AreaEvaluateOneZero) {
    rectangle* test = new rectangle(696969, 0);
    EXPECT_EQ(test->area(), 0);
}

TEST(AreaTest, AreaEvaluateInts) {
    rectangle* test = new rectangle(3, 5);
    EXPECT_EQ(test->area(), 15);
}

TEST(AreaTest, AreaEvaluateInts2) {
    rectangle* test = new rectangle(4, 8);
    EXPECT_EQ(test->area(), 32);
}

#endif
