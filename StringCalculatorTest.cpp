#include "gmock/gmock.h"
#include "StringCalculator.hpp"
using ::testing::Eq;

TEST(StringCalculator, ZwracaZeroDlaPustegoTekstu) {
  ASSERT_THAT(add(""), Eq(0));
}

TEST(StringCalculator, ZwracaDanaPojedynczaLiczbe ) {
  EXPECT_THAT(add("1"), Eq(1));
  EXPECT_THAT(add("2"), Eq(2));
  EXPECT_THAT(add("4"), Eq(4));
}

TEST(StringCalculator, DodajeDwieLiczbyPoPrzecinku ) {
  EXPECT_THAT(add("1,1"), Eq(2));
  EXPECT_THAT(add("2,1"), Eq(3));
  EXPECT_THAT(add("21,31"), Eq(52));
}

