#include "FirstApp.h"

namespace LameEngine {

void FirstApp::run() {
	while (!lame_window.should_close()) {
		glfwPollEvents();
	}
}

}
