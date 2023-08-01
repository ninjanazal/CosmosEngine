#pragma once
#include <iostream>

#include "GL/glew.h"
#include "GLFW/glfw3.h"


static void gl_error_callback(int error, const char* desc) {
	printf("Error %d: %s\n", error, desc);
}

int main(int argc, char** argv) {

	glfwSetErrorCallback(gl_error_callback);
	if (!glfwInit()) { return 1; }
	printf("GLFW Init\n");

	GLFWwindow* window = glfwCreateWindow(460, 460, "TestWindow", NULL, NULL);
	printf("GLFW Window created\n");

	glfwMakeContextCurrent(window);
	printf("GLFW Make context\n");

	GLenum err = glewInit();
	if (GLEW_OK != err) {
		printf("Error: %s\n", glewGetErrorString(err));
		return 1;
	}
	printf("GLEW Init\n");
	printf("RUNNING\n");

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}