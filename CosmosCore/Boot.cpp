#pragma once

#include <iostream>
#include "Core/Application.h"

using namespace CosmosCore;

int main(int argc, char** argv) {
    Application* app = new Application(argv[0], argc - 1, &argv[1]);


    delete app;
    return 0;
}