#ifndef __CONS_TEST_HPP__
#define __CONS_TEST_HPP__

#include "gtest/gtest.h"

#include "rectangle.hpp"

TEST(ConsTest, ConsEvaluateZero) {
    rectangle* test = new rectangle(0, 0);
    EXPECT_EQ(test->width, 0);
    EXPECT_EQ(test->height, 0);
}

TEST(ConsTest, ConsEvaluateInts) {
    rectangle* test = new rectangle(2, 2);
    EXPECT_EQ(test->width, 2);
    EXPECT_EQ(test->height, 2);
}

TEST(ConsTest, ConsEvaluateZero) {
    rectangle* test = new rectangle(4, 7);
    EXPECT_EQ(test->width, 4);
    EXPECT_EQ(test->height, 7);
}

TEST(ConsTest, ConsEvaluateZero) {
    rectangle* test = new rectangle(27, 13);
    EXPECT_EQ(test->width, 27);
    EXPECT_EQ(test->height, 13);
}


#endif
