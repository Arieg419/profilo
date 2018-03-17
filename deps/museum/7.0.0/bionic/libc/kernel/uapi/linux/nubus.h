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
#ifndef _UAPILINUX_NUBUS_H
#define _UAPILINUX_NUBUS_H
#include <museum/7.0.0/bionic/libc/linux/types.h>
enum nubus_category {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_CAT_BOARD = 0x0001,
  NUBUS_CAT_DISPLAY = 0x0003,
  NUBUS_CAT_NETWORK = 0x0004,
  NUBUS_CAT_COMMUNICATIONS = 0x0006,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_CAT_FONT = 0x0009,
  NUBUS_CAT_CPU = 0x000A,
  NUBUS_CAT_DUODOCK = 0x0020
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nubus_type_network {
  NUBUS_TYPE_ETHERNET = 0x0001,
  NUBUS_TYPE_RS232 = 0x0002
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nubus_type_display {
  NUBUS_TYPE_VIDEO = 0x0001
};
enum nubus_type_cpu {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_TYPE_68020 = 0x0003,
  NUBUS_TYPE_68030 = 0x0004,
  NUBUS_TYPE_68040 = 0x0005
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nubus_drsw {
  NUBUS_DRSW_APPLE = 0x0001,
  NUBUS_DRSW_APPLE_HIRES = 0x0013,
  NUBUS_DRSW_3COM = 0x0000,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRSW_CABLETRON = 0x0001,
  NUBUS_DRSW_SONIC_LC = 0x0001,
  NUBUS_DRSW_KINETICS = 0x0103,
  NUBUS_DRSW_ASANTE = 0x0104,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRSW_TECHWORKS = 0x0109,
  NUBUS_DRSW_DAYNA = 0x010b,
  NUBUS_DRSW_FARALLON = 0x010c,
  NUBUS_DRSW_APPLE_SN = 0x010f,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRSW_DAYNA2 = 0x0115,
  NUBUS_DRSW_FOCUS = 0x011a,
  NUBUS_DRSW_ASANTE_CS = 0x011d,
  NUBUS_DRSW_DAYNA_LC = 0x011e,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRSW_NONE = 0x0000,
};
enum nubus_drhw {
  NUBUS_DRHW_APPLE_TFB = 0x0001,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRHW_APPLE_WVC = 0x0006,
  NUBUS_DRHW_SIGMA_CLRMAX = 0x0007,
  NUBUS_DRHW_APPLE_SE30 = 0x0009,
  NUBUS_DRHW_APPLE_HRVC = 0x0013,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRHW_APPLE_PVC = 0x0017,
  NUBUS_DRHW_APPLE_RBV1 = 0x0018,
  NUBUS_DRHW_APPLE_MDC = 0x0019,
  NUBUS_DRHW_APPLE_SONORA = 0x0022,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRHW_APPLE_24AC = 0x002b,
  NUBUS_DRHW_APPLE_VALKYRIE = 0x002e,
  NUBUS_DRHW_APPLE_JET = 0x0029,
  NUBUS_DRHW_SMAC_GFX = 0x0105,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRHW_RASTER_CB264 = 0x013B,
  NUBUS_DRHW_MICRON_XCEED = 0x0146,
  NUBUS_DRHW_RDIUS_GSC = 0x0153,
  NUBUS_DRHW_SMAC_SPEC8 = 0x017B,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRHW_SMAC_SPEC24 = 0x017C,
  NUBUS_DRHW_RASTER_CB364 = 0x026F,
  NUBUS_DRHW_RDIUS_DCGX = 0x027C,
  NUBUS_DRHW_RDIUS_PC8 = 0x0291,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRHW_LAPIS_PCS8 = 0x0292,
  NUBUS_DRHW_RASTER_24XLI = 0x02A0,
  NUBUS_DRHW_RASTER_PBPGT = 0x02A5,
  NUBUS_DRHW_EMACH_FSX = 0x02AE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRHW_RASTER_24XLTV = 0x02B7,
  NUBUS_DRHW_SMAC_THUND24 = 0x02CB,
  NUBUS_DRHW_SMAC_THUNDLGHT = 0x03D9,
  NUBUS_DRHW_RDIUS_PC24XP = 0x0406,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRHW_RDIUS_PC24X = 0x040A,
  NUBUS_DRHW_RDIUS_PC8XJ = 0x040B,
  NUBUS_DRHW_INTERLAN = 0x0100,
  NUBUS_DRHW_SMC9194 = 0x0101,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRHW_KINETICS = 0x0106,
  NUBUS_DRHW_CABLETRON = 0x0109,
  NUBUS_DRHW_ASANTE_LC = 0x010f,
  NUBUS_DRHW_SONIC = 0x0110,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRHW_TECHWORKS = 0x0112,
  NUBUS_DRHW_APPLE_SONIC_NB = 0x0118,
  NUBUS_DRHW_APPLE_SONIC_LC = 0x0119,
  NUBUS_DRHW_FOCUS = 0x011c,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_DRHW_SONNET = 0x011d,
};
enum nubus_res_id {
  NUBUS_RESID_TYPE = 0x0001,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_RESID_NAME = 0x0002,
  NUBUS_RESID_ICON = 0x0003,
  NUBUS_RESID_DRVRDIR = 0x0004,
  NUBUS_RESID_LOADREC = 0x0005,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_RESID_BOOTREC = 0x0006,
  NUBUS_RESID_FLAGS = 0x0007,
  NUBUS_RESID_HWDEVID = 0x0008,
  NUBUS_RESID_MINOR_BASEOS = 0x000a,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_RESID_MINOR_LENGTH = 0x000b,
  NUBUS_RESID_MAJOR_BASEOS = 0x000c,
  NUBUS_RESID_MAJOR_LENGTH = 0x000d,
  NUBUS_RESID_CICN = 0x000f,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_RESID_ICL8 = 0x0010,
  NUBUS_RESID_ICL4 = 0x0011,
};
enum nubus_board_res_id {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_RESID_BOARDID = 0x0020,
  NUBUS_RESID_PRAMINITDATA = 0x0021,
  NUBUS_RESID_PRIMARYINIT = 0x0022,
  NUBUS_RESID_TIMEOUTCONST = 0x0023,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_RESID_VENDORINFO = 0x0024,
  NUBUS_RESID_BOARDFLAGS = 0x0025,
  NUBUS_RESID_SECONDINIT = 0x0026,
  NUBUS_RESID_VIDNAMES = 0x0041,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_RESID_VIDMODES = 0x007e
};
enum nubus_vendor_res_id {
  NUBUS_RESID_VEND_ID = 0x0001,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_RESID_VEND_SERIAL = 0x0002,
  NUBUS_RESID_VEND_REV = 0x0003,
  NUBUS_RESID_VEND_PART = 0x0004,
  NUBUS_RESID_VEND_DATE = 0x0005
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum nubus_net_res_id {
  NUBUS_RESID_MAC_ADDRESS = 0x0080
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nubus_cpu_res_id {
  NUBUS_RESID_MEMINFO = 0x0081,
  NUBUS_RESID_ROMINFO = 0x0082
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nubus_display_res_id {
  NUBUS_RESID_GAMMADIR = 0x0040,
  NUBUS_RESID_FIRSTMODE = 0x0080,
  NUBUS_RESID_SECONDMODE = 0x0081,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NUBUS_RESID_THIRDMODE = 0x0082,
  NUBUS_RESID_FOURTHMODE = 0x0083,
  NUBUS_RESID_FIFTHMODE = 0x0084,
  NUBUS_RESID_SIXTHMODE = 0x0085
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nubus_dir {
  unsigned char * base;
  unsigned char * ptr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int done;
  int mask;
};
struct nubus_dirent {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char * base;
  unsigned char type;
  __u32 data;
  int mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
