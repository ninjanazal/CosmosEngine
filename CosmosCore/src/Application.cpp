#include "Application.h"

#include <iostream>

namespace CosmosCore {
	Application::Application(const char* execpath, int argc, char* argv[])
	{
		printf("Created Application %s\n", execpath);
		if (!glfwInit()) {
			printf("Failed to initialize glfw\n");
		}
		app_window = glfwCreateWindow(640, 480, execpath, NULL, NULL);
		glfwMakeContextCurrent(app_window);
		printf("Created context\n");
	}

	Application::~Application() {
		printf("DELETE\n");
	}


	void Application::Run() {
		if (app_window) {
			printf("RUNNING APPLICATION\n");
			while (!glfwWindowShouldClose(app_window))
			{
				glClear(GL_COLOR_BUFFER_BIT);
				glfwSwapBuffers(app_window);

				glfwPollEvents();
			}

			glfwTerminate();
		}
	}

}  // namespace CosmosCore