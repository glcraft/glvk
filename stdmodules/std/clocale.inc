// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

export namespace std {
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
  using std::lconv;

  using std::localeconv;
  using std::setlocale;
#endif // _LIBCPP_HAS_NO_LOCALIZATION
} // namespace std
