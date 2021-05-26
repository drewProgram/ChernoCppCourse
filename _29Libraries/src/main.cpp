#include <iostream>
#include <GLFW/glfw3.h>

// On project settings, configure Additional include directories with $(SolutionDir)Dependencies\GLFW\include;
// Lib is on folder Dependencies
// on Linker, add on Additional library directory $(SolutionDir)Dependencies\GLFW\lib-vc2019
// on Linker input, add the lib name

int main()
{
	int a = glfwInit();
	std::cout << a << std::endl;

	std::cin.get();
}