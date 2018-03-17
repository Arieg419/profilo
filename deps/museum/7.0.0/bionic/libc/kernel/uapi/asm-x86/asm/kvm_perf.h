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
#ifndef _ASM_X86_KVM_PERF_H
#define _ASM_X86_KVM_PERF_H
#include <museum/7.0.0/bionic/libc/asm/svm.h>
#include <museum/7.0.0/bionic/libc/asm/vmx.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <museum/7.0.0/bionic/libc/asm/kvm.h>
#define DECODE_STR_LEN 20
#define VCPU_ID "vcpu_id"
#define KVM_ENTRY_TRACE "kvm:kvm_entry"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_EXIT_TRACE "kvm:kvm_exit"
#define KVM_EXIT_REASON "exit_reason"
#endif
