/*
 * Author: Ruslan Sakevych
 * Verdict: Accepted
 */

//region bits/stdc++.h

// C++ includes used for precompiling -*- C++ -*-

// Copyright (C) 2003-2013 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file stdc++.h
 *  This is an implementation file for a precompiled header.
 */

// 17.4.1.2 Headers

// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif


//endregion

//#define DEBUG

const int BASE = 1000;
const int DIGITS_COUNT = int(log10((double)BASE));
const int MAX_LENGTH = 1000;

void scan(std::vector<int> &x) {
    x.clear();
    char *s = new char[MAX_LENGTH]();
    scanf(" %s", s);
    int s_length = (int)strlen(s);
    for (int i = 1; i <= (s_length) / DIGITS_COUNT + ((s_length) % DIGITS_COUNT != 0); ++i) {
        if (s_length - i * DIGITS_COUNT >= 0) {
            x.push_back(atoi(s + s_length - i * DIGITS_COUNT));
            s[s_length - i * DIGITS_COUNT] = '\0';
        } else {
            x.push_back(atoi(s));
        }
    }
    delete[] s;

}

void print(std::vector<int> x) {
    printf("%d", x.back());
    for (int i = (int)x.size() - 2; i >= 0; --i) printf("%03d", x[i]);
}

std::vector<int> &add(std::vector<int> left, std::vector<int> right) {
    std::vector<int> *result = new std::vector<int>();
    bool carry = false;
    for (int i = 0; i < std::max(left.size(), right.size()) || carry; ++i) {
        result->push_back(carry + (i < left.size() ? left[i] : 0) + (i < right.size() ? right[i] : 0));
        carry = (result->back() >= BASE);
        if (carry) result->back() -= BASE;
    }
    return *result;
}

int main() {
#ifdef DEBUG
    freopen("/home/lionell/Developing/acm/acmp/103/in.txt", "r", stdin);
#else
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    std::vector<int> a, b;
    scan(a);
    scan(b);
    print(add(a, b));

#ifdef DEBUG
    fclose(stdin);
#else
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}