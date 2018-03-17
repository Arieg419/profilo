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
#ifndef _CTTIMEOUT_NETLINK_H
#define _CTTIMEOUT_NETLINK_H
#include <museum/8.1.0/bionic/libc/linux/netfilter/nfnetlink.h>
enum ctnl_timeout_msg_types {
  IPCTNL_MSG_TIMEOUT_NEW,
  IPCTNL_MSG_TIMEOUT_GET,
  IPCTNL_MSG_TIMEOUT_DELETE,
  IPCTNL_MSG_TIMEOUT_DEFAULT_SET,
  IPCTNL_MSG_TIMEOUT_DEFAULT_GET,
  IPCTNL_MSG_TIMEOUT_MAX
};
enum ctattr_timeout {
  CTA_TIMEOUT_UNSPEC,
  CTA_TIMEOUT_NAME,
  CTA_TIMEOUT_L3PROTO,
  CTA_TIMEOUT_L4PROTO,
  CTA_TIMEOUT_DATA,
  CTA_TIMEOUT_USE,
  __CTA_TIMEOUT_MAX
};
#define CTA_TIMEOUT_MAX (__CTA_TIMEOUT_MAX - 1)
enum ctattr_timeout_generic {
  CTA_TIMEOUT_GENERIC_UNSPEC,
  CTA_TIMEOUT_GENERIC_TIMEOUT,
  __CTA_TIMEOUT_GENERIC_MAX
};
#define CTA_TIMEOUT_GENERIC_MAX (__CTA_TIMEOUT_GENERIC_MAX - 1)
enum ctattr_timeout_tcp {
  CTA_TIMEOUT_TCP_UNSPEC,
  CTA_TIMEOUT_TCP_SYN_SENT,
  CTA_TIMEOUT_TCP_SYN_RECV,
  CTA_TIMEOUT_TCP_ESTABLISHED,
  CTA_TIMEOUT_TCP_FIN_WAIT,
  CTA_TIMEOUT_TCP_CLOSE_WAIT,
  CTA_TIMEOUT_TCP_LAST_ACK,
  CTA_TIMEOUT_TCP_TIME_WAIT,
  CTA_TIMEOUT_TCP_CLOSE,
  CTA_TIMEOUT_TCP_SYN_SENT2,
  CTA_TIMEOUT_TCP_RETRANS,
  CTA_TIMEOUT_TCP_UNACK,
  __CTA_TIMEOUT_TCP_MAX
};
#define CTA_TIMEOUT_TCP_MAX (__CTA_TIMEOUT_TCP_MAX - 1)
enum ctattr_timeout_udp {
  CTA_TIMEOUT_UDP_UNSPEC,
  CTA_TIMEOUT_UDP_UNREPLIED,
  CTA_TIMEOUT_UDP_REPLIED,
  __CTA_TIMEOUT_UDP_MAX
};
#define CTA_TIMEOUT_UDP_MAX (__CTA_TIMEOUT_UDP_MAX - 1)
enum ctattr_timeout_udplite {
  CTA_TIMEOUT_UDPLITE_UNSPEC,
  CTA_TIMEOUT_UDPLITE_UNREPLIED,
  CTA_TIMEOUT_UDPLITE_REPLIED,
  __CTA_TIMEOUT_UDPLITE_MAX
};
#define CTA_TIMEOUT_UDPLITE_MAX (__CTA_TIMEOUT_UDPLITE_MAX - 1)
enum ctattr_timeout_icmp {
  CTA_TIMEOUT_ICMP_UNSPEC,
  CTA_TIMEOUT_ICMP_TIMEOUT,
  __CTA_TIMEOUT_ICMP_MAX
};
#define CTA_TIMEOUT_ICMP_MAX (__CTA_TIMEOUT_ICMP_MAX - 1)
enum ctattr_timeout_dccp {
  CTA_TIMEOUT_DCCP_UNSPEC,
  CTA_TIMEOUT_DCCP_REQUEST,
  CTA_TIMEOUT_DCCP_RESPOND,
  CTA_TIMEOUT_DCCP_PARTOPEN,
  CTA_TIMEOUT_DCCP_OPEN,
  CTA_TIMEOUT_DCCP_CLOSEREQ,
  CTA_TIMEOUT_DCCP_CLOSING,
  CTA_TIMEOUT_DCCP_TIMEWAIT,
  __CTA_TIMEOUT_DCCP_MAX
};
#define CTA_TIMEOUT_DCCP_MAX (__CTA_TIMEOUT_DCCP_MAX - 1)
enum ctattr_timeout_sctp {
  CTA_TIMEOUT_SCTP_UNSPEC,
  CTA_TIMEOUT_SCTP_CLOSED,
  CTA_TIMEOUT_SCTP_COOKIE_WAIT,
  CTA_TIMEOUT_SCTP_COOKIE_ECHOED,
  CTA_TIMEOUT_SCTP_ESTABLISHED,
  CTA_TIMEOUT_SCTP_SHUTDOWN_SENT,
  CTA_TIMEOUT_SCTP_SHUTDOWN_RECD,
  CTA_TIMEOUT_SCTP_SHUTDOWN_ACK_SENT,
  CTA_TIMEOUT_SCTP_HEARTBEAT_SENT,
  CTA_TIMEOUT_SCTP_HEARTBEAT_ACKED,
  __CTA_TIMEOUT_SCTP_MAX
};
#define CTA_TIMEOUT_SCTP_MAX (__CTA_TIMEOUT_SCTP_MAX - 1)
enum ctattr_timeout_icmpv6 {
  CTA_TIMEOUT_ICMPV6_UNSPEC,
  CTA_TIMEOUT_ICMPV6_TIMEOUT,
  __CTA_TIMEOUT_ICMPV6_MAX
};
#define CTA_TIMEOUT_ICMPV6_MAX (__CTA_TIMEOUT_ICMPV6_MAX - 1)
enum ctattr_timeout_gre {
  CTA_TIMEOUT_GRE_UNSPEC,
  CTA_TIMEOUT_GRE_UNREPLIED,
  CTA_TIMEOUT_GRE_REPLIED,
  __CTA_TIMEOUT_GRE_MAX
};
#define CTA_TIMEOUT_GRE_MAX (__CTA_TIMEOUT_GRE_MAX - 1)
#define CTNL_TIMEOUT_NAME_MAX 32
#endif
