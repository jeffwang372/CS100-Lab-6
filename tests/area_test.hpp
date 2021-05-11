#ifndef __AREA_TEST_HPP__
#define __AREA_TEST_HPP__

#include "gtest/gtest.h"

#include <iostream>
#include "../header/rectangle.hpp"

TEST(AreaTest, AreaEvaluateZero) {
    Rectangle* test = new Rectangle(0, 0);
    EXPECT_EQ(test->area(), 0);
}

TEST(AreaTest, AreaEvaluateOneZero) {
    Rectangle* test = new Rectangle(696969, 0);
    EXPECT_EQ(test->area(), 0);
}

TEST(AreaTest, AreaEvaluateInts) {
    Rectangle* test = new Rectangle(3, 5);
    EXPECT_EQ(test->area(), 15);
}

TEST(AreaTest, AreaEvaluateInts2) {
    Rectangle* test = new Rectangle(4, 8);
    EXPECT_EQ(test->area(), 32);
}

#endif
