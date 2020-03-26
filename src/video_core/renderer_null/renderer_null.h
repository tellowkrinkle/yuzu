// Copyright 2020 Yuzu Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "video_core/renderer_base.h"

namespace NullRenderer {

class RendererNull final : public VideoCore::RendererBase {
public:
    explicit RendererNull(Core::Frontend::EmuWindow& emu_window);
    ~RendererNull() override;

    bool Init() override;
    void ShutDown() override;
    void SwapBuffers(const Tegra::FramebufferConfig* framebuffer) override;
    bool TryPresent(int timeout_ms) override;
};

} // namespace NullRenderer