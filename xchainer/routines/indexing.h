#pragma once

#include <cstdint>
#include <vector>

#include "nonstd/optional.hpp"

#include "xchainer/array.h"
#include "xchainer/array_index.h"

namespace xchainer {
namespace internal {

// Returns a view selected with the indices.
Array At(const Array& a, const std::vector<ArrayIndex>& indices);

}  // namespace internal

// Takes elements specified by indices from an array.
// Indices that are out of bounds are wrapped around.
//
// TODO(niboshi): Support Scalar and NdimVector<int64_t> as indices.
// TODO(niboshi): Support axis=None behavior in NumPy.
// TODO(niboshi): Support indices dtype other than int64.
Array Take(const Array& a, const Array& indices, int8_t axis);

}  // namespace xchainer
