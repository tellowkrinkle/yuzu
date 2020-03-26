// Copyright 2020 Yuzu Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "video_core/rasterizer_interface.h"

namespace NullRenderer {

class NullRasterizer : public VideoCore::RasterizerInterface {
public:
    explicit NullRasterizer();
    ~NullRasterizer() override;

    void Draw(bool is_indexed, bool is_instanced) override;
    void Clear() override;
    void DispatchCompute(GPUVAddr code_addr) override;
    void ResetCounter(VideoCore::QueryType type) override;
    void Query(GPUVAddr gpu_addr, VideoCore::QueryType type, std::optional<u64> timestamp) override;
    void FlushAll() override;
    void FlushRegion(VAddr addr, u64 size) override;
    void InvalidateRegion(VAddr addr, u64 size) override;
    void FlushAndInvalidateRegion(VAddr addr, u64 size) override;
    void FlushCommands() override;
    void TickFrame() override;
    virtual bool AccelerateSurfaceCopy(const Tegra::Engines::Fermi2D::Regs::Surface& src,
                                       const Tegra::Engines::Fermi2D::Regs::Surface& dst,
                                       const Tegra::Engines::Fermi2D::Config& copy_config) override;
};

} // namespace NullRenderer