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
#ifndef __TARGET_CORE_USER_H
#define __TARGET_CORE_USER_H
#include <museum/6.0.1/bionic/libc/linux/types.h>
#include <museum/6.0.1/bionic/libc/linux/uio.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCMU_VERSION "1.0"
#define TCMU_MAILBOX_VERSION 1
#define ALIGN_SIZE 64
struct tcmu_mailbox {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 version;
  __u16 flags;
  __u32 cmdr_off;
  __u32 cmdr_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 cmd_head;
  __u32 cmd_tail __attribute__((__aligned__(ALIGN_SIZE)));
} __packed;
enum tcmu_opcode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCMU_OP_PAD = 0,
  TCMU_OP_CMD,
};
struct tcmu_cmd_entry_hdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 len_op;
} __packed;
#define TCMU_OP_MASK 0x7
#define TCMU_SENSE_BUFFERSIZE 96
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tcmu_cmd_entry {
  struct tcmu_cmd_entry_hdr hdr;
  uint16_t cmd_id;
  uint16_t __pad1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  union {
    struct {
      uint64_t cdb_off;
      uint64_t iov_cnt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
      struct iovec iov[0];
    } req;
    struct {
      uint8_t scsi_status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
      uint8_t __pad1;
      uint16_t __pad2;
      uint32_t __pad3;
      char sense_buffer[TCMU_SENSE_BUFFERSIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    } rsp;
  };
} __packed;
#define TCMU_OP_ALIGN_SIZE sizeof(uint64_t)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum tcmu_genl_cmd {
  TCMU_CMD_UNSPEC,
  TCMU_CMD_ADDED_DEVICE,
  TCMU_CMD_REMOVED_DEVICE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __TCMU_CMD_MAX,
};
#define TCMU_CMD_MAX (__TCMU_CMD_MAX - 1)
enum tcmu_genl_attr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCMU_ATTR_UNSPEC,
  TCMU_ATTR_DEVICE,
  TCMU_ATTR_MINOR,
  __TCMU_ATTR_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TCMU_ATTR_MAX (__TCMU_ATTR_MAX - 1)
#endif
