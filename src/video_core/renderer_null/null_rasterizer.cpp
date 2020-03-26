// Copyright 2020 Yuzu Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "video_core/renderer_null/null_rasterizer.h"

namespace NullRenderer {

NullRasterizer::NullRasterizer() = default;
NullRasterizer::~NullRasterizer() = default;

void NullRasterizer::Draw(bool is_indexed, bool is_instanced) {}
void NullRasterizer::Clear() {}
void NullRasterizer::DispatchCompute(GPUVAddr code_addr) {}
void NullRasterizer::ResetCounter(VideoCore::QueryType type) {}
void NullRasterizer::Query(GPUVAddr gpu_addr, VideoCore::QueryType type, std::optional<u64> timestamp) {}
void NullRasterizer::FlushAll() {}
void NullRasterizer::FlushRegion(VAddr addr, u64 size) {}
void NullRasterizer::InvalidateRegion(VAddr addr, u64 size) {}
void NullRasterizer::FlushAndInvalidateRegion(VAddr addr, u64 size) {}
void NullRasterizer::FlushCommands() {}
void NullRasterizer::TickFrame() {}

bool NullRasterizer::AccelerateSurfaceCopy(const Tegra::Engines::Fermi2D::Regs::Surface &src,
                                           const Tegra::Engines::Fermi2D::Regs::Surface &dst,
                                           const Tegra::Engines::Fermi2D::Config &copy_config) {
    return true;
}

} // namespace NullRenderer