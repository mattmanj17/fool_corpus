//===-- Exhaustive test for expm1f ----------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "exhaustive_test.h"
#include "src/math/expm1f.h"
#include "utils/MPFRWrapper/MPFRUtils.h"

namespace mpfr = __llvm_libc::testing::mpfr;

using LlvmLibcExpm1fExhaustiveTest =
    LlvmLibcUnaryOpExhaustiveMathTest<float, mpfr::Operation::Expm1,
                                      __llvm_libc::expm1f>;

// Range: [0, Inf];
static constexpr uint32_t POS_START = 0x0000'0000U;
static constexpr uint32_t POS_STOP = 0x7f80'0000U;

TEST_F(LlvmLibcExpm1fExhaustiveTest, PostiveRange) {
  test_full_range_all_roundings(POS_START, POS_STOP);
}

// Range: [-Inf, 0];
static constexpr uint32_t NEG_START = 0xb000'0000U;
static constexpr uint32_t NEG_STOP = 0xff80'0000U;

TEST_F(LlvmLibcExpm1fExhaustiveTest, NegativeRange) {
  test_full_range_all_roundings(NEG_START, NEG_STOP);
}