//
// Copyright (c) 2019 Kris Jusiak (kris at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
auto _ = "test suite 2"_test = [] {
  using namespace ut;
  "should throw"_test = [] { expect(throws<int>([] { throw 42; })); };
  "complex expression"_test = [] { expect(42_i == 42 and 1 > 0_i); };
};
