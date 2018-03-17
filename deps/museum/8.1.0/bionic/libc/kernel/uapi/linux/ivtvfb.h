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
#ifndef __LINUX_IVTVFB_H__
#define __LINUX_IVTVFB_H__
#include <linux/compiler.h>
#include <museum/8.1.0/bionic/libc/linux/types.h>
struct ivtvfb_dma_frame {
  void __user * source;
  unsigned long dest_offset;
  int count;
};
#define IVTVFB_IOC_DMA_FRAME _IOW('V', BASE_VIDIOC_PRIVATE + 0, struct ivtvfb_dma_frame)
#endif
