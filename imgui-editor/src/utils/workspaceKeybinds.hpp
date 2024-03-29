#pragma once

#include <memory>

#include "../context.hpp"
#include "../layerSystem/layerSystem.hpp"

#include <imgui.h>
#include <imgui_internal.h>

class WorkspaceKeybinds {
public:
	void Tools();
	void Save();
	void Layer();
	void History();

	void HandleMouse(ImVec2& pos);
};

inline auto workspaceKeybinds = std::make_shared<WorkspaceKeybinds>();

