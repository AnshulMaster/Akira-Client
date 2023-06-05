#pragma once

#include "../Module.h"

class Uninject : public Module {
public:
	Uninject() : Module::Module("Uninject", "Other", "Uninject the Client from the Game", 0x50) {
		this->isEnabled = false;
	};

	void onEnable();
};