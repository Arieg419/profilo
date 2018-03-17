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
#ifndef _UAPI_CODA_HEADER_
#define _UAPI_CODA_HEADER_
#if defined(__NetBSD__) || (defined(DJGPP) || defined(__CYGWIN32__)) && !defined(KERNEL)
#include <museum/7.1.2/bionic/libc/sys/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef CODA_MAXSYMLINKS
#define CODA_MAXSYMLINKS 10
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if defined(DJGPP) || defined(__CYGWIN32__)
#ifdef KERNEL
typedef unsigned long u_long;
typedef unsigned int u_int;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef unsigned short u_short;
typedef u_long ino_t;
typedef u_long dev_t;
typedef void * caddr_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef DOS
typedef unsigned __int64 u_quad_t;
#else
typedef unsigned long long u_quad_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define inline
struct timespec {
  long ts_sec;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  long ts_nsec;
};
#else
#include <museum/7.1.2/bionic/libc/sys/time.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef unsigned long long u_quad_t;
#endif
#endif
#ifdef __linux__
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <museum/7.1.2/bionic/libc/linux/time.h>
#define cdev_t u_quad_t
#if !defined(_UQUAD_T_) && (!defined(__GLIBC__) || __GLIBC__ < 2)
#define _UQUAD_T_ 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef unsigned long long u_quad_t;
#endif
#else
#define cdev_t dev_t
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifdef __CYGWIN32__
struct timespec {
  time_t tv_sec;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  long tv_nsec;
};
#endif
#ifndef __BIT_TYPES_DEFINED__
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __BIT_TYPES_DEFINED__
typedef signed char int8_t;
typedef unsigned char u_int8_t;
typedef short int16_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef unsigned short u_int16_t;
typedef int int32_t;
typedef unsigned int u_int32_t;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CODA_MAXNAMLEN 255
#define CODA_MAXPATHLEN 1024
#define CODA_MAXSYMLINK 10
#define C_O_READ 0x001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define C_O_WRITE 0x002
#define C_O_TRUNC 0x010
#define C_O_EXCL 0x100
#define C_O_CREAT 0x200
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define C_M_READ 00400
#define C_M_WRITE 00200
#define C_A_C_OK 8
#define C_A_R_OK 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define C_A_W_OK 2
#define C_A_X_OK 1
#define C_A_F_OK 0
#ifndef _VENUS_DIRENT_T_
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _VENUS_DIRENT_T_ 1
struct venus_dirent {
  u_int32_t d_fileno;
  u_int16_t d_reclen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u_int8_t d_type;
  u_int8_t d_namlen;
  char d_name[CODA_MAXNAMLEN + 1];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef DIRSIZ
#define DIRSIZ(dp) ((sizeof(struct venus_dirent) - (CODA_MAXNAMLEN + 1)) + (((dp)->d_namlen + 1 + 3) & ~3))
#define CDT_UNKNOWN 0
#define CDT_FIFO 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CDT_CHR 2
#define CDT_DIR 4
#define CDT_BLK 6
#define CDT_REG 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CDT_LNK 10
#define CDT_SOCK 12
#define CDT_WHT 14
#define IFTOCDT(mode) (((mode) & 0170000) >> 12)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CDTTOIF(dirtype) ((dirtype) << 12)
#endif
#ifndef _VUID_T_
#define _VUID_T_
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef u_int32_t vuid_t;
typedef u_int32_t vgid_t;
#endif
struct CodaFid {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u_int32_t opaque[4];
};
#define coda_f2i(fid) (fid ? (fid->opaque[3] ^ (fid->opaque[2] << 10) ^ (fid->opaque[1] << 20) ^ fid->opaque[0]) : 0)
#ifndef _VENUS_VATTR_T_
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _VENUS_VATTR_T_
enum coda_vtype {
  C_VNON,
  C_VREG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  C_VDIR,
  C_VBLK,
  C_VCHR,
  C_VLNK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  C_VSOCK,
  C_VFIFO,
  C_VBAD
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_vattr {
  long va_type;
  u_short va_mode;
  short va_nlink;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  vuid_t va_uid;
  vgid_t va_gid;
  long va_fileid;
  u_quad_t va_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  long va_blocksize;
  struct timespec va_atime;
  struct timespec va_mtime;
  struct timespec va_ctime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u_long va_gen;
  u_long va_flags;
  cdev_t va_rdev;
  u_quad_t va_bytes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u_quad_t va_filerev;
};
#endif
struct coda_statfs {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int32_t f_blocks;
  int32_t f_bfree;
  int32_t f_bavail;
  int32_t f_files;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int32_t f_ffree;
};
#define CODA_ROOT 2
#define CODA_OPEN_BY_FD 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CODA_OPEN 4
#define CODA_CLOSE 5
#define CODA_IOCTL 6
#define CODA_GETATTR 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CODA_SETATTR 8
#define CODA_ACCESS 9
#define CODA_LOOKUP 10
#define CODA_CREATE 11
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CODA_REMOVE 12
#define CODA_LINK 13
#define CODA_RENAME 14
#define CODA_MKDIR 15
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CODA_RMDIR 16
#define CODA_SYMLINK 18
#define CODA_READLINK 19
#define CODA_FSYNC 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CODA_VGET 22
#define CODA_SIGNAL 23
#define CODA_REPLACE 24
#define CODA_FLUSH 25
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CODA_PURGEUSER 26
#define CODA_ZAPFILE 27
#define CODA_ZAPDIR 28
#define CODA_PURGEFID 30
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CODA_OPEN_BY_PATH 31
#define CODA_RESOLVE 32
#define CODA_REINTEGRATE 33
#define CODA_STATFS 34
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CODA_STORE 35
#define CODA_RELEASE 36
#define CODA_NCALLS 37
#define DOWNCALL(opcode) (opcode >= CODA_REPLACE && opcode <= CODA_PURGEFID)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VC_MAXDATASIZE 8192
#define VC_MAXMSGSIZE sizeof(union inputArgs) + sizeof(union outputArgs) + VC_MAXDATASIZE
#define CIOC_KERNEL_VERSION _IOWR('c', 10, size_t)
#define CODA_KERNEL_VERSION 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_in_hdr {
  u_int32_t opcode;
  u_int32_t unique;
  pid_t pid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  pid_t pgid;
  vuid_t uid;
};
struct coda_out_hdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u_int32_t opcode;
  u_int32_t unique;
  u_int32_t result;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_root_out {
  struct coda_out_hdr oh;
  struct CodaFid VFid;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_root_in {
  struct coda_in_hdr in;
};
struct coda_open_in {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_in_hdr ih;
  struct CodaFid VFid;
  int flags;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_open_out {
  struct coda_out_hdr oh;
  cdev_t dev;
  ino_t inode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_store_in {
  struct coda_in_hdr ih;
  struct CodaFid VFid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int flags;
};
struct coda_store_out {
  struct coda_out_hdr out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_release_in {
  struct coda_in_hdr ih;
  struct CodaFid VFid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int flags;
};
struct coda_release_out {
  struct coda_out_hdr out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_close_in {
  struct coda_in_hdr ih;
  struct CodaFid VFid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int flags;
};
struct coda_close_out {
  struct coda_out_hdr out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_ioctl_in {
  struct coda_in_hdr ih;
  struct CodaFid VFid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int cmd;
  int len;
  int rwflag;
  char * data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_ioctl_out {
  struct coda_out_hdr oh;
  int len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  caddr_t data;
};
struct coda_getattr_in {
  struct coda_in_hdr ih;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct CodaFid VFid;
};
struct coda_getattr_out {
  struct coda_out_hdr oh;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_vattr attr;
};
struct coda_setattr_in {
  struct coda_in_hdr ih;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct CodaFid VFid;
  struct coda_vattr attr;
};
struct coda_setattr_out {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_out_hdr out;
};
struct coda_access_in {
  struct coda_in_hdr ih;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct CodaFid VFid;
  int flags;
};
struct coda_access_out {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_out_hdr out;
};
#define CLU_CASE_SENSITIVE 0x01
#define CLU_CASE_INSENSITIVE 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_lookup_in {
  struct coda_in_hdr ih;
  struct CodaFid VFid;
  int name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int flags;
};
struct coda_lookup_out {
  struct coda_out_hdr oh;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct CodaFid VFid;
  int vtype;
};
struct coda_create_in {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_in_hdr ih;
  struct CodaFid VFid;
  struct coda_vattr attr;
  int excl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int mode;
  int name;
};
struct coda_create_out {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_out_hdr oh;
  struct CodaFid VFid;
  struct coda_vattr attr;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_remove_in {
  struct coda_in_hdr ih;
  struct CodaFid VFid;
  int name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_remove_out {
  struct coda_out_hdr out;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_link_in {
  struct coda_in_hdr ih;
  struct CodaFid sourceFid;
  struct CodaFid destFid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int tname;
};
struct coda_link_out {
  struct coda_out_hdr out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_rename_in {
  struct coda_in_hdr ih;
  struct CodaFid sourceFid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int srcname;
  struct CodaFid destFid;
  int destname;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_rename_out {
  struct coda_out_hdr out;
};
struct coda_mkdir_in {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_in_hdr ih;
  struct CodaFid VFid;
  struct coda_vattr attr;
  int name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_mkdir_out {
  struct coda_out_hdr oh;
  struct CodaFid VFid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_vattr attr;
};
struct coda_rmdir_in {
  struct coda_in_hdr ih;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct CodaFid VFid;
  int name;
};
struct coda_rmdir_out {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_out_hdr out;
};
struct coda_symlink_in {
  struct coda_in_hdr ih;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct CodaFid VFid;
  int srcname;
  struct coda_vattr attr;
  int tname;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_symlink_out {
  struct coda_out_hdr out;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_readlink_in {
  struct coda_in_hdr ih;
  struct CodaFid VFid;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_readlink_out {
  struct coda_out_hdr oh;
  int count;
  caddr_t data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_fsync_in {
  struct coda_in_hdr ih;
  struct CodaFid VFid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_fsync_out {
  struct coda_out_hdr out;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_vget_in {
  struct coda_in_hdr ih;
  struct CodaFid VFid;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_vget_out {
  struct coda_out_hdr oh;
  struct CodaFid VFid;
  int vtype;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_purgeuser_out {
  struct coda_out_hdr oh;
  vuid_t uid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_zapfile_out {
  struct coda_out_hdr oh;
  struct CodaFid CodaFid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_zapdir_out {
  struct coda_out_hdr oh;
  struct CodaFid CodaFid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_purgefid_out {
  struct coda_out_hdr oh;
  struct CodaFid CodaFid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct coda_replace_out {
  struct coda_out_hdr oh;
  struct CodaFid NewFid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct CodaFid OldFid;
};
struct coda_open_by_fd_in {
  struct coda_in_hdr ih;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct CodaFid VFid;
  int flags;
};
struct coda_open_by_fd_out {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_out_hdr oh;
  int fd;
};
struct coda_open_by_path_in {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_in_hdr ih;
  struct CodaFid VFid;
  int flags;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_open_by_path_out {
  struct coda_out_hdr oh;
  int path;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_statfs_in {
  struct coda_in_hdr in;
};
struct coda_statfs_out {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_out_hdr oh;
  struct coda_statfs stat;
};
#define CODA_NOCACHE 0x80000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
union inputArgs {
  struct coda_in_hdr ih;
  struct coda_open_in coda_open;
  struct coda_store_in coda_store;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_release_in coda_release;
  struct coda_close_in coda_close;
  struct coda_ioctl_in coda_ioctl;
  struct coda_getattr_in coda_getattr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_setattr_in coda_setattr;
  struct coda_access_in coda_access;
  struct coda_lookup_in coda_lookup;
  struct coda_create_in coda_create;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_remove_in coda_remove;
  struct coda_link_in coda_link;
  struct coda_rename_in coda_rename;
  struct coda_mkdir_in coda_mkdir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_rmdir_in coda_rmdir;
  struct coda_symlink_in coda_symlink;
  struct coda_readlink_in coda_readlink;
  struct coda_fsync_in coda_fsync;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_vget_in coda_vget;
  struct coda_open_by_fd_in coda_open_by_fd;
  struct coda_open_by_path_in coda_open_by_path;
  struct coda_statfs_in coda_statfs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
union outputArgs {
  struct coda_out_hdr oh;
  struct coda_root_out coda_root;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_open_out coda_open;
  struct coda_ioctl_out coda_ioctl;
  struct coda_getattr_out coda_getattr;
  struct coda_lookup_out coda_lookup;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_create_out coda_create;
  struct coda_mkdir_out coda_mkdir;
  struct coda_readlink_out coda_readlink;
  struct coda_vget_out coda_vget;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_purgeuser_out coda_purgeuser;
  struct coda_zapfile_out coda_zapfile;
  struct coda_zapdir_out coda_zapdir;
  struct coda_purgefid_out coda_purgefid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_replace_out coda_replace;
  struct coda_open_by_fd_out coda_open_by_fd;
  struct coda_open_by_path_out coda_open_by_path;
  struct coda_statfs_out coda_statfs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
union coda_downcalls {
  struct coda_purgeuser_out purgeuser;
  struct coda_zapfile_out zapfile;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct coda_zapdir_out zapdir;
  struct coda_purgefid_out purgefid;
  struct coda_replace_out replace;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PIOCPARM_MASK 0x0000ffff
struct ViceIoctl {
  void __user * in;
  void __user * out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u_short in_size;
  u_short out_size;
};
struct PioctlData {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  const char __user * path;
  int follow;
  struct ViceIoctl vi;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CODA_CONTROL ".CONTROL"
#define CODA_CONTROLLEN 8
#define CTL_INO - 1
#define CODA_MOUNT_VERSION 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coda_mount_data {
  int version;
  int fd;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
