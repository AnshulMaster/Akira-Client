#pragma once

#include "../Module.h"
#include "../../data/GameData.h"
#include "../../utils/Utils.h"
#include "../../sdk/LocalPlayer.h"
#include "../../sdk/Color.h"


class AutoSprint : public Module {
public:
	AutoSprint() : Module::Module("AutoSprint", "Movement", "Automatically sprint forward", 0X50) {
		this->isEnabled = true;
	};
	void onRender();
};