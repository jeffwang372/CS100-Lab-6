#ifndef __CONS_TEST_HPP__
#define __CONS_TEST_HPP__

#include "gtest/gtest.h"

#include <iostream>
#include "../header/rectangle.hpp"

TEST(ConsTest, ConsDefault) {
    Rectangle* test = new Rectangle();
    EXPECT_EQ(test->get_width(), 0);
    EXPECT_EQ(test->get_height(), 0);
}

TEST(ConsTest, ConsEvaluateZero) {
    Rectangle* test = new Rectangle(0, 0);
    EXPECT_EQ(test->get_width(), 0);
    EXPECT_EQ(test->get_height(), 0);
}

TEST(ConsTest, ConsEvaluateInts) {
    Rectangle* test = new Rectangle(2, 2);
    EXPECT_EQ(test->get_width(), 2);
    EXPECT_EQ(test->get_height(), 2);
}

TEST(ConsTest, ConsEvaluateInts2) {
    Rectangle* test = new Rectangle(4, 7);
    EXPECT_EQ(test->get_width(), 4);
    EXPECT_EQ(test->get_height(), 7);
}

TEST(ConsTest, ConsEvaluateInts3) {
    Rectangle* test = new Rectangle(27, 13);
    EXPECT_EQ(test->get_width(), 27);
    EXPECT_EQ(test->get_height(), 13);
}


#endif
