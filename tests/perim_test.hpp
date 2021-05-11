#ifndef __PERIM_TEST_HPP__
#define __PERIM_TEST_HPP__

#include "gtest/gtest.h"

#include <iostream>
#include "../header/rectangle.hpp"

TEST(PerimTest, PerimEvaluateZero) {
    Rectangle* test = new Rectangle(0, 0);
    EXPECT_EQ(test->perimeter(), 0);
}

TEST(PerimTest, PerimEvaluateOneZero) {
    Rectangle* test = new Rectangle(696969, 0);
    EXPECT_EQ(test->perimeter(), 0);
}

TEST(PerimTest, PerimEvaluateInts) {
    Rectangle* test = new Rectangle(3, 5);
    EXPECT_EQ(test->perimeter(), 16);
}

TEST(PerimTest, PerimEvaluateInts2) {
    Rectangle* test = new Rectangle(4, 8);
    EXPECT_EQ(test->perimeter(), 24);
}

#endif
