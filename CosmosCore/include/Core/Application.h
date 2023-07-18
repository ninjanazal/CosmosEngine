#ifndef APPLICATION_H
#define APPLICATION_H


namespace CosmosCore {
	struct BootOptions
	{

	};

	class Application {
	public:
		Application(const char* execpath, int argc, char* argv[]);
		~Application();

	private:


	};
}  // namespace CosmosCore

#endif