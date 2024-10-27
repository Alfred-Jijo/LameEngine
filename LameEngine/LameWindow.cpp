#include "LameWindow.h"

namespace LameEngine {

LameWindow::LameWindow(int16_t window_width, int16_t window_height, std::string window_title) : window_width{ window_width }, window_height{ window_height }, window_title{ window_title } {
	init_window();
}

LameWindow::~LameWindow() {
	glfwDestroyWindow(window);
	glfwTerminate();
}

void LameWindow::init_window() {
	glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(window_width, window_height, window_title.c_str(), nullptr, nullptr);
}

}
