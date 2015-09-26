#include "gmock/gmock.h"
#include "StringCalculator.hpp"
using ::testing::Eq;

TEST(StringCalculator, ZwracaZeroDlaPustegoTekstu) {
  ASSERT_THAT(add(""), Eq(0));
}

TEST(StringCalculator, ZwracaDanaPojedynczaLiczbe ) {
  ASSERT_THAT(add("1"), Eq(1));
}

