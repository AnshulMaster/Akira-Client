#include "AutoSprint.h"

void AutoSprint::onRender() {
	LocalPlayer* player = gData.getClientInstance()->LocalPlayer();

	if (player != nullptr) {
		player->setSprinting(true);
		RenderUtils::renderText("Sprinting", Vec2(5, 5), Color(255, 255, 255), 1.f, 1.f);
		RenderUtils::flushText();
	}
}