#include "gmock/gmock.h"
#include "StringCalculator.hpp"
using ::testing::Eq;

TEST(StringCalculator, ZwracaZeroDlaPustegoTekstu) {
  ASSERT_THAT(add(""), Eq(0));
}

