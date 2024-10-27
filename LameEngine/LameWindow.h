#pragma once
#include <string>
#include <cstdint>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace LameEngine {

class LameWindow {
public:
	LameWindow(int16_t window_width, int16_t window_height, std::string window_title);
	~LameWindow();

	LameWindow(const LameWindow&) = delete;
	LameWindow &operator=(const LameWindow&) = delete;

	bool should_close() { return glfwWindowShouldClose(window); }
private:
	void init_window();
	const int window_width;
	const int window_height;
	const std::string window_title;
	GLFWwindow *window;
};

}

