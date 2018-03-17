/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_RUNTIME_GC_GC_CAUSE_H_
#define ART_RUNTIME_GC_GC_CAUSE_H_

#include <museum/6.0.1/external/libcxx/ostream>

namespace art {
namespace gc {

// What caused the GC?
enum GcCause {
  // GC triggered by a failed allocation. Thread doing allocation is blocked waiting for GC before
  // retrying allocation.
  kGcCauseForAlloc,
  // A background GC trying to ensure there is free memory ahead of allocations.
  kGcCauseBackground,
  // An explicit System.gc() call.
  kGcCauseExplicit,
  // GC triggered for a native allocation.
  kGcCauseForNativeAlloc,
  // GC triggered for a collector transition.
  kGcCauseCollectorTransition,
  // Not a real GC cause, used when we disable moving GC (currently for GetPrimitiveArrayCritical).
  kGcCauseDisableMovingGc,
  // Not a real GC cause, used when we trim the heap.
  kGcCauseTrim,
  // GC triggered for background transition when both foreground and background collector are CMS.
  kGcCauseHomogeneousSpaceCompact,
};

const char* PrettyCause(GcCause cause);
std::ostream& operator<<(std::ostream& os, const GcCause& gc_cause);

}  // namespace gc
}  // namespace art

#endif  // ART_RUNTIME_GC_GC_CAUSE_H_
