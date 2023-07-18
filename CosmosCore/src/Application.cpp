#include "Application.h"
#include <iostream>

namespace CosmosCore {
	Application::Application(const char* execpath, int argc, char* argv[])
	{
		printf("Created Application %s\n", execpath);
	}

	Application::~Application() {
		printf("DELETE\n");
	}


}  // namespace CosmosCore