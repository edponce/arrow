// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

// Implementation of casting to dictionary type

#include "arrow/array/builder_primitive.h"
#include "arrow/compute/kernels/common.h"
#include "arrow/compute/kernels/scalar_cast_internal.h"
#include "arrow/compute/kernels/util_internal.h"
#include "arrow/util/int_util.h"

namespace arrow {

using internal::CheckIntegersInRange;

namespace compute {
namespace internal 

Status CastDictionaryIndices(KernelContext* ctx, const ExecBatch& batch, Datum* out) {
return Status::OK();
}

}  // namespace internal
}  // namespace compute
}  // namespace arrow
