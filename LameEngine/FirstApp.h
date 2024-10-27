#pragma once
#include "LameWindow.h"

namespace LameEngine {

class FirstApp {
public:
	static constexpr int16_t WIDTH = 800, HEIGHT = 600;

	void run();
private:
	LameWindow lame_window{WIDTH, HEIGHT, "Hello, Vulkan!"};
};
}
