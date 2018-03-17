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
#ifndef _UAPI_LINUX_LIGHTNVM_H
#define _UAPI_LINUX_LIGHTNVM_H
#include <museum/8.1.0/bionic/libc/stdio.h>
#include <museum/8.1.0/bionic/libc/sys/ioctl.h>
#define DISK_NAME_LEN 32
#include <museum/8.1.0/bionic/libc/linux/types.h>
#include <museum/8.1.0/bionic/libc/linux/ioctl.h>
#define NVM_TTYPE_NAME_MAX 48
#define NVM_TTYPE_MAX 63
#define NVM_MMTYPE_LEN 8
#define NVM_CTRL_FILE "/dev/lightnvm/control"
struct nvm_ioctl_info_tgt {
  __u32 version[3];
  __u32 reserved;
  char tgtname[NVM_TTYPE_NAME_MAX];
};
struct nvm_ioctl_info {
  __u32 version[3];
  __u16 tgtsize;
  __u16 reserved16;
  __u32 reserved[12];
  struct nvm_ioctl_info_tgt tgts[NVM_TTYPE_MAX];
};
enum {
  NVM_DEVICE_ACTIVE = 1 << 0,
};
struct nvm_ioctl_device_info {
  char devname[DISK_NAME_LEN];
  char bmname[NVM_TTYPE_NAME_MAX];
  __u32 bmversion[3];
  __u32 flags;
  __u32 reserved[8];
};
struct nvm_ioctl_get_devices {
  __u32 nr_devices;
  __u32 reserved[31];
  struct nvm_ioctl_device_info info[31];
};
struct nvm_ioctl_create_simple {
  __u32 lun_begin;
  __u32 lun_end;
};
enum {
  NVM_CONFIG_TYPE_SIMPLE = 0,
};
struct nvm_ioctl_create_conf {
  __u32 type;
  union {
    struct nvm_ioctl_create_simple s;
  };
};
struct nvm_ioctl_create {
  char dev[DISK_NAME_LEN];
  char tgttype[NVM_TTYPE_NAME_MAX];
  char tgtname[DISK_NAME_LEN];
  __u32 flags;
  struct nvm_ioctl_create_conf conf;
};
struct nvm_ioctl_remove {
  char tgtname[DISK_NAME_LEN];
  __u32 flags;
};
struct nvm_ioctl_dev_init {
  char dev[DISK_NAME_LEN];
  char mmtype[NVM_MMTYPE_LEN];
  __u32 flags;
};
enum {
  NVM_FACTORY_ERASE_ONLY_USER = 1 << 0,
  NVM_FACTORY_RESET_HOST_BLKS = 1 << 1,
  NVM_FACTORY_RESET_GRWN_BBLKS = 1 << 2,
  NVM_FACTORY_NR_BITS = 1 << 3,
};
struct nvm_ioctl_dev_factory {
  char dev[DISK_NAME_LEN];
  __u32 flags;
};
enum {
  NVM_INFO_CMD = 0x20,
  NVM_GET_DEVICES_CMD,
  NVM_DEV_CREATE_CMD,
  NVM_DEV_REMOVE_CMD,
  NVM_DEV_INIT_CMD,
  NVM_DEV_FACTORY_CMD,
};
#define NVM_IOCTL 'L'
#define NVM_INFO _IOWR(NVM_IOCTL, NVM_INFO_CMD, struct nvm_ioctl_info)
#define NVM_GET_DEVICES _IOR(NVM_IOCTL, NVM_GET_DEVICES_CMD, struct nvm_ioctl_get_devices)
#define NVM_DEV_CREATE _IOW(NVM_IOCTL, NVM_DEV_CREATE_CMD, struct nvm_ioctl_create)
#define NVM_DEV_REMOVE _IOW(NVM_IOCTL, NVM_DEV_REMOVE_CMD, struct nvm_ioctl_remove)
#define NVM_DEV_INIT _IOW(NVM_IOCTL, NVM_DEV_INIT_CMD, struct nvm_ioctl_dev_init)
#define NVM_DEV_FACTORY _IOW(NVM_IOCTL, NVM_DEV_FACTORY_CMD, struct nvm_ioctl_dev_factory)
#define NVM_VERSION_MAJOR 1
#define NVM_VERSION_MINOR 0
#define NVM_VERSION_PATCHLEVEL 0
#endif
