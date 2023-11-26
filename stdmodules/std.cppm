// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

module;

// TODO MODULES This could be generated

// The headers of Table 24: C++ library headers [tab:headers.cpp]
// and the headers of Table 25: C++ headers for C library facilities [tab:headers.cpp.c]
#include <algorithm>
#include <any>
#include <array>
#include <atomic>
#include <barrier>
#include <bit>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfenv>
#include <cfloat>
#include <charconv>
#include <chrono>
#include <cinttypes>
#include <climits>
#include <cmath>
#include <compare>
#include <complex>
#include <concepts>
#include <condition_variable>
#include <coroutine>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cuchar>
#include <deque>
#include <exception>
#include <execution>
#include <expected>
#include <filesystem>
#include <format>
#include <forward_list>
#include <functional>
#include <future>
#include <initializer_list>
#include <iosfwd>
#include <iterator>
#include <latch>
#include <limits>
#include <list>
#include <map>
#include <mdspan>
#include <memory>
#include <memory_resource>
#include <mutex>
#include <new>
#include <numbers>
#include <numeric>
#include <optional>
#include <print>
#include <queue>
#include <random>
#include <ranges>
#include <ratio>
#include <scoped_allocator>
#include <semaphore>
#include <set>
#include <shared_mutex>
#include <source_location>
#include <span>
#include <stack>
#include <stdexcept>
#include <stop_token>
#include <string>
#include <string_view>
#include <system_error>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <variant>
#include <vector>
#include <version>

// *** Headers disabled by a feature ***

#ifndef _LIBCPP_HAS_NO_LOCALIZATION
    #include <clocale>
    #include <codecvt>
    #include <fstream>
    #include <iomanip>
    #include <ios>
    #include <iostream>
    #include <istream>
    #include <locale>
    #include <ostream>
    #include <regex>
    #include <sstream>
    #include <streambuf>
    #include <strstream>
#endif // _LIBCPP_HAS_NO_LOCALIZATION
#ifndef _LIBCPP_HAS_NO_WIDE_CHARACTERS
    #include <cwchar>
    #include <cwctype>
#endif // _LIBCPP_HAS_NO_WIDE_CHARACTERS

// *** Headers not yet available ***
#if __has_include(<generator>)
    #error "include <generator> unconditionally"
    #include <generator>
#endif //   __has_include(<generator>)
#if __has_include(<hazard_pointer>)
    #error "include <hazard_pointer> unconditionally"
    #include <hazard_pointer>
#endif //   __has_include(<hazard_pointer>)
#if __has_include(<flat_map>)
    #error "include <flat_map> unconditionally"
    #include <flat_map>
#endif // __has_include(<flat_map>)
#if __has_include(<flat_set>)
    #error "include <flat_set> unconditionally"
    #include <flat_set>
#endif //  __has_include(<flat_set>)
#if __has_include(<rcu>)
    #error "include <rcu> unconditionally"
    #include <rcu>
#endif //   __has_include(<rcu>)
#if __has_include(<text_encoding>)
    #error "include <text_encoding> unconditionally"
    #include <text_encoding>
#endif //   __has_include(<text_encoding>)

export module std;

#include "std/algorithm.inc"
#include "std/any.inc"
#include "std/array.inc"
#include "std/atomic.inc"
#include "std/barrier.inc"
#include "std/bit.inc"
#include "std/bitset.inc"
#include "std/cassert.inc"
#include "std/cctype.inc"
#include "std/cerrno.inc"
#include "std/cfenv.inc"
#include "std/cfloat.inc"
#include "std/charconv.inc"
#include "std/chrono.inc"
#include "std/cinttypes.inc"
#include "std/climits.inc"
#include "std/clocale.inc"
#include "std/cmath.inc"
#include "std/codecvt.inc"
#include "std/compare.inc"
#include "std/complex.inc"
#include "std/concepts.inc"
#include "std/condition_variable.inc"
#include "std/coroutine.inc"
#include "std/csetjmp.inc"
#include "std/csignal.inc"
#include "std/cstdarg.inc"
#include "std/cstddef.inc"
#include "std/cstdint.inc"
#include "std/cstdio.inc"
#include "std/cstdlib.inc"
#include "std/cstring.inc"
#include "std/ctime.inc"
#include "std/cuchar.inc"
#include "std/cwchar.inc"
#include "std/cwctype.inc"
#include "std/deque.inc"
#include "std/exception.inc"
#include "std/execution.inc"
#include "std/expected.inc"
#include "std/filesystem.inc"
#include "std/flat_map.inc"
#include "std/flat_set.inc"
#include "std/format.inc"
#include "std/forward_list.inc"
#include "std/fstream.inc"
#include "std/functional.inc"
#include "std/future.inc"
#include "std/generator.inc"
#include "std/hazard_pointer.inc"
#include "std/initializer_list.inc"
#include "std/iomanip.inc"
#include "std/ios.inc"
#include "std/iosfwd.inc"
#include "std/iostream.inc"
#include "std/istream.inc"
#include "std/iterator.inc"
#include "std/latch.inc"
#include "std/limits.inc"
#include "std/list.inc"
#include "std/locale.inc"
#include "std/map.inc"
#include "std/mdspan.inc"
#include "std/memory.inc"
#include "std/memory_resource.inc"
#include "std/mutex.inc"
#include "std/new.inc"
#include "std/numbers.inc"
#include "std/numeric.inc"
#include "std/optional.inc"
#include "std/ostream.inc"
#include "std/print.inc"
#include "std/queue.inc"
#include "std/random.inc"
#include "std/ranges.inc"
#include "std/ratio.inc"
#include "std/rcu.inc"
#include "std/regex.inc"
#include "std/scoped_allocator.inc"
#include "std/semaphore.inc"
#include "std/set.inc"
#include "std/shared_mutex.inc"
#include "std/source_location.inc"
#include "std/span.inc"
#include "std/spanstream.inc"
#include "std/sstream.inc"
#include "std/stack.inc"
#include "std/stacktrace.inc"
#include "std/stdexcept.inc"
#include "std/stdfloat.inc"
#include "std/stop_token.inc"
#include "std/streambuf.inc"
#include "std/string.inc"
#include "std/string_view.inc"
#include "std/strstream.inc"
#include "std/syncstream.inc"
#include "std/system_error.inc"
#include "std/text_encoding.inc"
#include "std/thread.inc"
#include "std/tuple.inc"
#include "std/type_traits.inc"
#include "std/typeindex.inc"
#include "std/typeinfo.inc"
#include "std/unordered_map.inc"
#include "std/unordered_set.inc"
#include "std/utility.inc"
#include "std/valarray.inc"
#include "std/variant.inc"
#include "std/vector.inc"
#include "std/version.inc"
