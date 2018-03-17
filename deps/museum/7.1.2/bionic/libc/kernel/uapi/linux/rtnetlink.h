/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI__LINUX_RTNETLINK_H
#define _UAPI__LINUX_RTNETLINK_H
#include <museum/7.1.2/bionic/libc/linux/types.h>
#include <museum/7.1.2/bionic/libc/linux/netlink.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <museum/7.1.2/bionic/libc/linux/if_link.h>
#include <museum/7.1.2/bionic/libc/linux/if_addr.h>
#include <museum/7.1.2/bionic/libc/linux/neighbour.h>
#define RTNL_FAMILY_IPMR 128
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTNL_FAMILY_IP6MR 129
#define RTNL_FAMILY_MAX 129
enum {
  RTM_BASE = 16,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_BASE RTM_BASE
  RTM_NEWLINK = 16,
#define RTM_NEWLINK RTM_NEWLINK
  RTM_DELLINK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_DELLINK RTM_DELLINK
  RTM_GETLINK,
#define RTM_GETLINK RTM_GETLINK
  RTM_SETLINK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_SETLINK RTM_SETLINK
  RTM_NEWADDR = 20,
#define RTM_NEWADDR RTM_NEWADDR
  RTM_DELADDR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_DELADDR RTM_DELADDR
  RTM_GETADDR,
#define RTM_GETADDR RTM_GETADDR
  RTM_NEWROUTE = 24,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_NEWROUTE RTM_NEWROUTE
  RTM_DELROUTE,
#define RTM_DELROUTE RTM_DELROUTE
  RTM_GETROUTE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_GETROUTE RTM_GETROUTE
  RTM_NEWNEIGH = 28,
#define RTM_NEWNEIGH RTM_NEWNEIGH
  RTM_DELNEIGH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_DELNEIGH RTM_DELNEIGH
  RTM_GETNEIGH,
#define RTM_GETNEIGH RTM_GETNEIGH
  RTM_NEWRULE = 32,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_NEWRULE RTM_NEWRULE
  RTM_DELRULE,
#define RTM_DELRULE RTM_DELRULE
  RTM_GETRULE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_GETRULE RTM_GETRULE
  RTM_NEWQDISC = 36,
#define RTM_NEWQDISC RTM_NEWQDISC
  RTM_DELQDISC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_DELQDISC RTM_DELQDISC
  RTM_GETQDISC,
#define RTM_GETQDISC RTM_GETQDISC
  RTM_NEWTCLASS = 40,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_NEWTCLASS RTM_NEWTCLASS
  RTM_DELTCLASS,
#define RTM_DELTCLASS RTM_DELTCLASS
  RTM_GETTCLASS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_GETTCLASS RTM_GETTCLASS
  RTM_NEWTFILTER = 44,
#define RTM_NEWTFILTER RTM_NEWTFILTER
  RTM_DELTFILTER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_DELTFILTER RTM_DELTFILTER
  RTM_GETTFILTER,
#define RTM_GETTFILTER RTM_GETTFILTER
  RTM_NEWACTION = 48,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_NEWACTION RTM_NEWACTION
  RTM_DELACTION,
#define RTM_DELACTION RTM_DELACTION
  RTM_GETACTION,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_GETACTION RTM_GETACTION
  RTM_NEWPREFIX = 52,
#define RTM_NEWPREFIX RTM_NEWPREFIX
  RTM_GETMULTICAST = 58,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_GETMULTICAST RTM_GETMULTICAST
  RTM_GETANYCAST = 62,
#define RTM_GETANYCAST RTM_GETANYCAST
  RTM_NEWNEIGHTBL = 64,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_NEWNEIGHTBL RTM_NEWNEIGHTBL
  RTM_GETNEIGHTBL = 66,
#define RTM_GETNEIGHTBL RTM_GETNEIGHTBL
  RTM_SETNEIGHTBL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_SETNEIGHTBL RTM_SETNEIGHTBL
  RTM_NEWNDUSEROPT = 68,
#define RTM_NEWNDUSEROPT RTM_NEWNDUSEROPT
  RTM_NEWADDRLABEL = 72,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_NEWADDRLABEL RTM_NEWADDRLABEL
  RTM_DELADDRLABEL,
#define RTM_DELADDRLABEL RTM_DELADDRLABEL
  RTM_GETADDRLABEL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_GETADDRLABEL RTM_GETADDRLABEL
  RTM_GETDCB = 78,
#define RTM_GETDCB RTM_GETDCB
  RTM_SETDCB,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_SETDCB RTM_SETDCB
  RTM_NEWNETCONF = 80,
#define RTM_NEWNETCONF RTM_NEWNETCONF
  RTM_GETNETCONF = 82,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_GETNETCONF RTM_GETNETCONF
  RTM_NEWMDB = 84,
#define RTM_NEWMDB RTM_NEWMDB
  RTM_DELMDB = 85,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_DELMDB RTM_DELMDB
  RTM_GETMDB = 86,
#define RTM_GETMDB RTM_GETMDB
  RTM_NEWNSID = 88,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_NEWNSID RTM_NEWNSID
  RTM_DELNSID = 89,
#define RTM_DELNSID RTM_DELNSID
  RTM_GETNSID = 90,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_GETNSID RTM_GETNSID
  __RTM_MAX,
#define RTM_MAX (((__RTM_MAX + 3) & ~3) - 1)
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_NR_MSGTYPES (RTM_MAX + 1 - RTM_BASE)
#define RTM_NR_FAMILIES (RTM_NR_MSGTYPES >> 2)
#define RTM_FAM(cmd) (((cmd) - RTM_BASE) >> 2)
struct rtattr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned short rta_len;
  unsigned short rta_type;
};
#define RTA_ALIGNTO 4U
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTA_ALIGN(len) (((len) + RTA_ALIGNTO - 1) & ~(RTA_ALIGNTO - 1))
#define RTA_OK(rta,len) ((len) >= (int) sizeof(struct rtattr) && (rta)->rta_len >= sizeof(struct rtattr) && (rta)->rta_len <= (len))
#define RTA_NEXT(rta,attrlen) ((attrlen) -= RTA_ALIGN((rta)->rta_len), (struct rtattr *) (((char *) (rta)) + RTA_ALIGN((rta)->rta_len)))
#define RTA_LENGTH(len) (RTA_ALIGN(sizeof(struct rtattr)) + (len))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTA_SPACE(len) RTA_ALIGN(RTA_LENGTH(len))
#define RTA_DATA(rta) ((void *) (((char *) (rta)) + RTA_LENGTH(0)))
#define RTA_PAYLOAD(rta) ((int) ((rta)->rta_len) - RTA_LENGTH(0))
struct rtmsg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char rtm_family;
  unsigned char rtm_dst_len;
  unsigned char rtm_src_len;
  unsigned char rtm_tos;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char rtm_table;
  unsigned char rtm_protocol;
  unsigned char rtm_scope;
  unsigned char rtm_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned rtm_flags;
};
enum {
  RTN_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTN_UNICAST,
  RTN_LOCAL,
  RTN_BROADCAST,
  RTN_ANYCAST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTN_MULTICAST,
  RTN_BLACKHOLE,
  RTN_UNREACHABLE,
  RTN_PROHIBIT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTN_THROW,
  RTN_NAT,
  RTN_XRESOLVE,
  __RTN_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define RTN_MAX (__RTN_MAX - 1)
#define RTPROT_UNSPEC 0
#define RTPROT_REDIRECT 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTPROT_KERNEL 2
#define RTPROT_BOOT 3
#define RTPROT_STATIC 4
#define RTPROT_GATED 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTPROT_RA 9
#define RTPROT_MRT 10
#define RTPROT_ZEBRA 11
#define RTPROT_BIRD 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTPROT_DNROUTED 13
#define RTPROT_XORP 14
#define RTPROT_NTK 15
#define RTPROT_DHCP 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTPROT_MROUTED 17
#define RTPROT_BABEL 42
enum rt_scope_t {
  RT_SCOPE_UNIVERSE = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RT_SCOPE_SITE = 200,
  RT_SCOPE_LINK = 253,
  RT_SCOPE_HOST = 254,
  RT_SCOPE_NOWHERE = 255
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define RTM_F_NOTIFY 0x100
#define RTM_F_CLONED 0x200
#define RTM_F_EQUALIZE 0x400
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTM_F_PREFIX 0x800
#define RTM_F_LOOKUP_TABLE 0x1000
enum rt_class_t {
  RT_TABLE_UNSPEC = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RT_TABLE_COMPAT = 252,
  RT_TABLE_DEFAULT = 253,
  RT_TABLE_MAIN = 254,
  RT_TABLE_LOCAL = 255,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RT_TABLE_MAX = 0xFFFFFFFF
};
enum rtattr_type_t {
  RTA_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTA_DST,
  RTA_SRC,
  RTA_IIF,
  RTA_OIF,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTA_GATEWAY,
  RTA_PRIORITY,
  RTA_PREFSRC,
  RTA_METRICS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTA_MULTIPATH,
  RTA_PROTOINFO,
  RTA_FLOW,
  RTA_CACHEINFO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTA_SESSION,
  RTA_MP_ALGO,
  RTA_TABLE,
  RTA_MARK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTA_MFC_STATS,
  RTA_VIA,
  RTA_NEWDST,
  RTA_PREF,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTA_ENCAP_TYPE,
  RTA_ENCAP,
  __RTA_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTA_MAX (__RTA_MAX - 1)
#define RTM_RTA(r) ((struct rtattr *) (((char *) (r)) + NLMSG_ALIGN(sizeof(struct rtmsg))))
#define RTM_PAYLOAD(n) NLMSG_PAYLOAD(n, sizeof(struct rtmsg))
struct rtnexthop {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned short rtnh_len;
  unsigned char rtnh_flags;
  unsigned char rtnh_hops;
  int rtnh_ifindex;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define RTNH_F_DEAD 1
#define RTNH_F_PERVASIVE 2
#define RTNH_F_ONLINK 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTNH_F_OFFLOAD 8
#define RTNH_F_LINKDOWN 16
#define RTNH_COMPARE_MASK (RTNH_F_DEAD | RTNH_F_LINKDOWN)
#define RTNH_ALIGNTO 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTNH_ALIGN(len) (((len) + RTNH_ALIGNTO - 1) & ~(RTNH_ALIGNTO - 1))
#define RTNH_OK(rtnh,len) ((rtnh)->rtnh_len >= sizeof(struct rtnexthop) && ((int) (rtnh)->rtnh_len) <= (len))
#define RTNH_NEXT(rtnh) ((struct rtnexthop *) (((char *) (rtnh)) + RTNH_ALIGN((rtnh)->rtnh_len)))
#define RTNH_LENGTH(len) (RTNH_ALIGN(sizeof(struct rtnexthop)) + (len))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTNH_SPACE(len) RTNH_ALIGN(RTNH_LENGTH(len))
#define RTNH_DATA(rtnh) ((struct rtattr *) (((char *) (rtnh)) + RTNH_LENGTH(0)))
struct rtvia {
  __kernel_sa_family_t rtvia_family;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 rtvia_addr[0];
};
struct rta_cacheinfo {
  __u32 rta_clntref;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 rta_lastuse;
  __s32 rta_expires;
  __u32 rta_error;
  __u32 rta_used;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTNETLINK_HAVE_PEERINFO 1
  __u32 rta_id;
  __u32 rta_ts;
  __u32 rta_tsage;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
  RTAX_UNSPEC,
#define RTAX_UNSPEC RTAX_UNSPEC
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTAX_LOCK,
#define RTAX_LOCK RTAX_LOCK
  RTAX_MTU,
#define RTAX_MTU RTAX_MTU
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTAX_WINDOW,
#define RTAX_WINDOW RTAX_WINDOW
  RTAX_RTT,
#define RTAX_RTT RTAX_RTT
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTAX_RTTVAR,
#define RTAX_RTTVAR RTAX_RTTVAR
  RTAX_SSTHRESH,
#define RTAX_SSTHRESH RTAX_SSTHRESH
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTAX_CWND,
#define RTAX_CWND RTAX_CWND
  RTAX_ADVMSS,
#define RTAX_ADVMSS RTAX_ADVMSS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTAX_REORDERING,
#define RTAX_REORDERING RTAX_REORDERING
  RTAX_HOPLIMIT,
#define RTAX_HOPLIMIT RTAX_HOPLIMIT
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTAX_INITCWND,
#define RTAX_INITCWND RTAX_INITCWND
  RTAX_FEATURES,
#define RTAX_FEATURES RTAX_FEATURES
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTAX_RTO_MIN,
#define RTAX_RTO_MIN RTAX_RTO_MIN
  RTAX_INITRWND,
#define RTAX_INITRWND RTAX_INITRWND
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTAX_QUICKACK,
#define RTAX_QUICKACK RTAX_QUICKACK
  RTAX_CC_ALGO,
#define RTAX_CC_ALGO RTAX_CC_ALGO
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __RTAX_MAX
};
#define RTAX_MAX (__RTAX_MAX - 1)
#define RTAX_FEATURE_ECN (1 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTAX_FEATURE_SACK (1 << 1)
#define RTAX_FEATURE_TIMESTAMP (1 << 2)
#define RTAX_FEATURE_ALLFRAG (1 << 3)
#define RTAX_FEATURE_MASK (RTAX_FEATURE_ECN | RTAX_FEATURE_SACK | RTAX_FEATURE_TIMESTAMP | RTAX_FEATURE_ALLFRAG)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rta_session {
  __u8 proto;
  __u8 pad1;
  __u16 pad2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  union {
    struct {
      __u16 sport;
      __u16 dport;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    } ports;
    struct {
      __u8 type;
      __u8 code;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
      __u16 ident;
    } icmpt;
    __u32 spi;
  } u;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct rta_mfc_stats {
  __u64 mfcs_packets;
  __u64 mfcs_bytes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 mfcs_wrong_if;
};
struct rtgenmsg {
  unsigned char rtgen_family;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ifinfomsg {
  unsigned char ifi_family;
  unsigned char __ifi_pad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned short ifi_type;
  int ifi_index;
  unsigned ifi_flags;
  unsigned ifi_change;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct prefixmsg {
  unsigned char prefix_family;
  unsigned char prefix_pad1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned short prefix_pad2;
  int prefix_ifindex;
  unsigned char prefix_type;
  unsigned char prefix_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char prefix_flags;
  unsigned char prefix_pad3;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  PREFIX_UNSPEC,
  PREFIX_ADDRESS,
  PREFIX_CACHEINFO,
  __PREFIX_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define PREFIX_MAX (__PREFIX_MAX - 1)
struct prefix_cacheinfo {
  __u32 preferred_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 valid_time;
};
struct tcmsg {
  unsigned char tcm_family;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char tcm__pad1;
  unsigned short tcm__pad2;
  int tcm_ifindex;
  __u32 tcm_handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 tcm_parent;
  __u32 tcm_info;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_UNSPEC,
  TCA_KIND,
  TCA_OPTIONS,
  TCA_STATS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_XSTATS,
  TCA_RATE,
  TCA_FCNT,
  TCA_STATS2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_STAB,
  __TCA_MAX
};
#define TCA_MAX (__TCA_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCA_RTA(r) ((struct rtattr *) (((char *) (r)) + NLMSG_ALIGN(sizeof(struct tcmsg))))
#define TCA_PAYLOAD(n) NLMSG_PAYLOAD(n, sizeof(struct tcmsg))
struct nduseroptmsg {
  unsigned char nduseropt_family;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char nduseropt_pad1;
  unsigned short nduseropt_opts_len;
  int nduseropt_ifindex;
  __u8 nduseropt_icmp_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 nduseropt_icmp_code;
  unsigned short nduseropt_pad2;
  unsigned int nduseropt_pad3;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  NDUSEROPT_UNSPEC,
  NDUSEROPT_SRCADDR,
  __NDUSEROPT_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define NDUSEROPT_MAX (__NDUSEROPT_MAX - 1)
#define RTMGRP_LINK 1
#define RTMGRP_NOTIFY 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTMGRP_NEIGH 4
#define RTMGRP_TC 8
#define RTMGRP_IPV4_IFADDR 0x10
#define RTMGRP_IPV4_MROUTE 0x20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTMGRP_IPV4_ROUTE 0x40
#define RTMGRP_IPV4_RULE 0x80
#define RTMGRP_IPV6_IFADDR 0x100
#define RTMGRP_IPV6_MROUTE 0x200
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTMGRP_IPV6_ROUTE 0x400
#define RTMGRP_IPV6_IFINFO 0x800
#define RTMGRP_DECnet_IFADDR 0x1000
#define RTMGRP_DECnet_ROUTE 0x4000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTMGRP_IPV6_PREFIX 0x20000
enum rtnetlink_groups {
  RTNLGRP_NONE,
#define RTNLGRP_NONE RTNLGRP_NONE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_LINK,
#define RTNLGRP_LINK RTNLGRP_LINK
  RTNLGRP_NOTIFY,
#define RTNLGRP_NOTIFY RTNLGRP_NOTIFY
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_NEIGH,
#define RTNLGRP_NEIGH RTNLGRP_NEIGH
  RTNLGRP_TC,
#define RTNLGRP_TC RTNLGRP_TC
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_IPV4_IFADDR,
#define RTNLGRP_IPV4_IFADDR RTNLGRP_IPV4_IFADDR
  RTNLGRP_IPV4_MROUTE,
#define RTNLGRP_IPV4_MROUTE RTNLGRP_IPV4_MROUTE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_IPV4_ROUTE,
#define RTNLGRP_IPV4_ROUTE RTNLGRP_IPV4_ROUTE
  RTNLGRP_IPV4_RULE,
#define RTNLGRP_IPV4_RULE RTNLGRP_IPV4_RULE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_IPV6_IFADDR,
#define RTNLGRP_IPV6_IFADDR RTNLGRP_IPV6_IFADDR
  RTNLGRP_IPV6_MROUTE,
#define RTNLGRP_IPV6_MROUTE RTNLGRP_IPV6_MROUTE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_IPV6_ROUTE,
#define RTNLGRP_IPV6_ROUTE RTNLGRP_IPV6_ROUTE
  RTNLGRP_IPV6_IFINFO,
#define RTNLGRP_IPV6_IFINFO RTNLGRP_IPV6_IFINFO
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_DECnet_IFADDR,
#define RTNLGRP_DECnet_IFADDR RTNLGRP_DECnet_IFADDR
  RTNLGRP_NOP2,
  RTNLGRP_DECnet_ROUTE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTNLGRP_DECnet_ROUTE RTNLGRP_DECnet_ROUTE
  RTNLGRP_DECnet_RULE,
#define RTNLGRP_DECnet_RULE RTNLGRP_DECnet_RULE
  RTNLGRP_NOP4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_IPV6_PREFIX,
#define RTNLGRP_IPV6_PREFIX RTNLGRP_IPV6_PREFIX
  RTNLGRP_IPV6_RULE,
#define RTNLGRP_IPV6_RULE RTNLGRP_IPV6_RULE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_ND_USEROPT,
#define RTNLGRP_ND_USEROPT RTNLGRP_ND_USEROPT
  RTNLGRP_PHONET_IFADDR,
#define RTNLGRP_PHONET_IFADDR RTNLGRP_PHONET_IFADDR
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_PHONET_ROUTE,
#define RTNLGRP_PHONET_ROUTE RTNLGRP_PHONET_ROUTE
  RTNLGRP_DCB,
#define RTNLGRP_DCB RTNLGRP_DCB
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_IPV4_NETCONF,
#define RTNLGRP_IPV4_NETCONF RTNLGRP_IPV4_NETCONF
  RTNLGRP_IPV6_NETCONF,
#define RTNLGRP_IPV6_NETCONF RTNLGRP_IPV6_NETCONF
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_MDB,
#define RTNLGRP_MDB RTNLGRP_MDB
  RTNLGRP_MPLS_ROUTE,
#define RTNLGRP_MPLS_ROUTE RTNLGRP_MPLS_ROUTE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  RTNLGRP_NSID,
#define RTNLGRP_NSID RTNLGRP_NSID
  __RTNLGRP_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTNLGRP_MAX (__RTNLGRP_MAX - 1)
struct tcamsg {
  unsigned char tca_family;
  unsigned char tca__pad1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned short tca__pad2;
};
#define TA_RTA(r) ((struct rtattr *) (((char *) (r)) + NLMSG_ALIGN(sizeof(struct tcamsg))))
#define TA_PAYLOAD(n) NLMSG_PAYLOAD(n, sizeof(struct tcamsg))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCA_ACT_TAB 1
#define TCAA_MAX 1
#define RTEXT_FILTER_VF (1 << 0)
#define RTEXT_FILTER_BRVLAN (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RTEXT_FILTER_BRVLAN_COMPRESSED (1 << 2)
#define RTEXT_FILTER_SKIP_STATS (1 << 3)
#endif
