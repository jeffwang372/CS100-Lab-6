#include "gtest/gtest.h"
#include "cons_test.hpp"
#include "area_test.hpp"
#include "perim_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
