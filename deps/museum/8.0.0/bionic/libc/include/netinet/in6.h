/*
 * Copyright (C) 2008 The Android Open Source Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _NETINET_IN6_H
#define _NETINET_IN6_H

#include <museum/8.0.0/bionic/libc/sys/cdefs.h>

#include <museum/8.0.0/bionic/libc/linux/in6.h>

#define IN6_IS_ADDR_UNSPECIFIED(a) \
  ((((a)->s6_addr32[0]) == 0) && \
   (((a)->s6_addr32[1]) == 0) && \
   (((a)->s6_addr32[2]) == 0) && \
   (((a)->s6_addr32[3]) == 0))

#define IN6_IS_ADDR_LOOPBACK(a) \
  ((((a)->s6_addr32[0]) == 0) && \
   (((a)->s6_addr32[1]) == 0) && \
   (((a)->s6_addr32[2]) == 0) && \
   (((a)->s6_addr32[3]) == ntohl(1)))

#define IN6_IS_ADDR_V4COMPAT(a) \
  ((((a)->s6_addr32[0]) == 0) && \
   (((a)->s6_addr32[1]) == 0) && \
   (((a)->s6_addr32[2]) == 0) && \
   (((a)->s6_addr32[3]) != 0) && (((a)->s6_addr32[3]) != ntohl(1)))

#define IN6_IS_ADDR_V4MAPPED(a) \
  ((((a)->s6_addr32[0]) == 0) && \
   (((a)->s6_addr32[1]) == 0) && \
   (((a)->s6_addr32[2]) == ntohl(0x0000ffff)))

#define __bionic_s6_addr(a) __BIONIC_CAST(reinterpret_cast, const uint8_t*, a)

#define IN6_IS_ADDR_LINKLOCAL(a) \
  ((__bionic_s6_addr(a)[0] == 0xfe) && ((__bionic_s6_addr(a)[1] & 0xc0) == 0x80))

#define IN6_IS_ADDR_SITELOCAL(a) \
  ((__bionic_s6_addr(a)[0] == 0xfe) && ((__bionic_s6_addr(a)[1] & 0xc0) == 0xc0))

#define IN6_IS_ADDR_MULTICAST(a) (__bionic_s6_addr(a)[0] == 0xff)

#define IN6_IS_ADDR_ULA(a) ((__bionic_s6_addr(a)[0] & 0xfe) == 0xfc)

#define IPV6_ADDR_SCOPE_NODELOCAL       0x01
#define IPV6_ADDR_SCOPE_INTFACELOCAL    0x01
#define IPV6_ADDR_SCOPE_LINKLOCAL       0x02
#define IPV6_ADDR_SCOPE_SITELOCAL       0x05
#define IPV6_ADDR_SCOPE_ORGLOCAL        0x08
#define IPV6_ADDR_SCOPE_GLOBAL          0x0e

#define IPV6_ADDR_MC_SCOPE(a) (__bionic_s6_addr(a)[1] & 0x0f)

#define IN6_IS_ADDR_MC_NODELOCAL(a) \
  (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_SCOPE(a) == IPV6_ADDR_SCOPE_NODELOCAL))
#define IN6_IS_ADDR_MC_LINKLOCAL(a) \
  (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_SCOPE(a) == IPV6_ADDR_SCOPE_LINKLOCAL))
#define IN6_IS_ADDR_MC_SITELOCAL(a) \
  (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_SCOPE(a) == IPV6_ADDR_SCOPE_SITELOCAL))
#define IN6_IS_ADDR_MC_ORGLOCAL(a) \
  (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_SCOPE(a) == IPV6_ADDR_SCOPE_ORGLOCAL))
#define IN6_IS_ADDR_MC_GLOBAL(a) \
  (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_SCOPE(a) == IPV6_ADDR_SCOPE_GLOBAL))

#define IN6_ARE_ADDR_EQUAL(a, b) \
  (memcmp(&(a)->s6_addr[0], &(b)->s6_addr[0], sizeof(struct in6_addr)) == 0)

#define INET6_ADDRSTRLEN 46

#define IPV6_JOIN_GROUP IPV6_ADD_MEMBERSHIP
#define IPV6_LEAVE_GROUP IPV6_DROP_MEMBERSHIP

#define IN6ADDR_ANY_INIT {{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}}
#define IN6ADDR_LOOPBACK_INIT {{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}}}

#define ipv6mr_interface ipv6mr_ifindex

#endif /* _NETINET_IN6_H */
