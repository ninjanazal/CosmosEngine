#ifndef APPLICATION_H
#define APPLICATION_H

#include "GLFW/glfw3.h"

namespace CosmosCore {
	struct BootOptions
	{

	};

	class Application {
	public:
		Application(const char* execpath, int argc, char* argv[]);
		~Application();

		void Run();
	private:
		GLFWwindow* app_window;

	};
}  // namespace CosmosCore

#endif