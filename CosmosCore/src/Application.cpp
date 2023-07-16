#include "Application.h"

#include <iostream>

namespace CosmosCore {
Application::Application() {
    printf("Hello from Application\n");
    data = 1;
}

Application::~Application() {
	printf("DELETE");
}

Application& Application::Get(){
    static Application __inst;
	return __inst;
}

void Application::PrintTest(){
    printf("THiS SIS A SADA %d\n", data);
    data++;
}

int Application::GetData(){
    return Get().data;
}

}  // namespace CosmosCore