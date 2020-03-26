// Copyright 2020 Yuzu Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "video_core/renderer_null/renderer_null.h"
#include "video_core/renderer_null/null_rasterizer.h"

namespace NullRenderer {

RendererNull::RendererNull(Core::Frontend::EmuWindow& emu_window)
    : VideoCore::RendererBase{emu_window} {}

RendererNull::~RendererNull() = default;

bool RendererNull::Init() {
    rasterizer = std::make_unique<NullRasterizer>();
    return true;
}

void RendererNull::ShutDown() {}

void RendererNull::SwapBuffers(const Tegra::FramebufferConfig* framebuffer) {}

bool RendererNull::TryPresent(int timeout_ms) { return true; }

} // namespace NullRenderer