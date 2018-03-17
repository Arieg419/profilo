// -*- C++ -*-
//===------------------- support/android/locale_bionic.h ------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_SUPPORT_ANDROID_LOCALE_BIONIC_H
#define _LIBCPP_SUPPORT_ANDROID_LOCALE_BIONIC_H

#if defined(__ANDROID__)

#ifdef __cplusplus
extern "C" {
#endif

#include <museum/6.0.1/bionic/libc/stdlib.h>
#include <museum/6.0.1/bionic/libc/xlocale.h>

#ifdef __cplusplus
}
#endif

// Share implementation with Newlib
#include <museum/6.0.1/external/libcxx/support/xlocale/xlocale.h>

#endif // defined(__ANDROID__)
#endif // _LIBCPP_SUPPORT_ANDROID_LOCALE_BIONIC_H
