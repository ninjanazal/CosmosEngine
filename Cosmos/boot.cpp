#pragma once

#include <iostream>
#include "Application.h"


int main(int argc, char** argv) {

	Cosmos::Application* app = new Cosmos::Application();
	
	delete app;
	return 0;
}