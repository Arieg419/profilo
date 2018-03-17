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
#ifndef __LINUX_V4L2_MEDIABUS_H
#define __LINUX_V4L2_MEDIABUS_H
#include <museum/8.1.0/bionic/libc/linux/media-bus-format.h>
#include <museum/8.1.0/bionic/libc/linux/types.h>
#include <museum/8.1.0/bionic/libc/linux/videodev2.h>
struct v4l2_mbus_framefmt {
  __u32 width;
  __u32 height;
  __u32 code;
  __u32 field;
  __u32 colorspace;
  __u16 ycbcr_enc;
  __u16 quantization;
  __u16 xfer_func;
  __u16 reserved[11];
};
#define V4L2_MBUS_FROM_MEDIA_BUS_FMT(name) V4L2_MBUS_FMT_ ##name = MEDIA_BUS_FMT_ ##name
enum v4l2_mbus_pixelcode {
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(FIXED),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(RGB444_2X8_PADHI_BE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(RGB444_2X8_PADHI_LE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(RGB555_2X8_PADHI_BE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(RGB555_2X8_PADHI_LE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(BGR565_2X8_BE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(BGR565_2X8_LE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(RGB565_2X8_BE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(RGB565_2X8_LE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(RGB666_1X18),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(RGB888_1X24),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(RGB888_2X12_BE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(RGB888_2X12_LE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(ARGB8888_1X32),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(Y8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(UV8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(UYVY8_1_5X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(VYUY8_1_5X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YUYV8_1_5X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YVYU8_1_5X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(UYVY8_2X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(VYUY8_2X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YUYV8_2X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YVYU8_2X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(Y10_1X10),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(UYVY10_2X10),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(VYUY10_2X10),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YUYV10_2X10),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YVYU10_2X10),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(Y12_1X12),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(UYVY8_1X16),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(VYUY8_1X16),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YUYV8_1X16),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YVYU8_1X16),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YDYUYDYV8_1X16),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(UYVY10_1X20),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(VYUY10_1X20),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YUYV10_1X20),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YVYU10_1X20),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YUV10_1X30),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(AYUV8_1X32),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(UYVY12_2X12),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(VYUY12_2X12),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YUYV12_2X12),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YVYU12_2X12),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(UYVY12_1X24),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(VYUY12_1X24),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YUYV12_1X24),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(YVYU12_1X24),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SBGGR8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SGBRG8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SGRBG8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SRGGB8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SBGGR10_ALAW8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SGBRG10_ALAW8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SGRBG10_ALAW8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SRGGB10_ALAW8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SBGGR10_DPCM8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SGBRG10_DPCM8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SGRBG10_DPCM8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SRGGB10_DPCM8_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SBGGR10_2X8_PADHI_BE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SBGGR10_2X8_PADHI_LE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SBGGR10_2X8_PADLO_BE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SBGGR10_2X8_PADLO_LE),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SBGGR10_1X10),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SGBRG10_1X10),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SGRBG10_1X10),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SRGGB10_1X10),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SBGGR12_1X12),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SGBRG12_1X12),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SGRBG12_1X12),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(SRGGB12_1X12),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(JPEG_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(S5C_UYVY_JPEG_1X8),
  V4L2_MBUS_FROM_MEDIA_BUS_FMT(AHSV8888_1X32),
};
#endif
