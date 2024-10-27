#include <iostream>

#include "FirstApp.h"
#include <stdlib.h>
#include <cstdint>
#include <exception>

int8_t main() {
    LameEngine::FirstApp app{};

    try {
        app.run();
    }
    catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
