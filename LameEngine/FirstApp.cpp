#include "FirstApp.h"
#include <GLFW/glfw3.h>

namespace LameEngine {

void FirstApp::run() {
	while (!lame_window.should_close()) {
		glfwPollEvents();
	}
}

}
