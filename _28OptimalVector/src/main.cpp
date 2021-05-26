#include <iostream>
#include <vector>
#include <string>

struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z)
		: x(x), y(y), z(z)
	{
	}

	Vertex(const Vertex& vertex)
		: x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

int main()
{
	std::vector<Vertex> vertices;
	// says that it will be at least 3 elements
	vertices.reserve(3);
	// Vertex is being constructed inside main function every time a push back is executed
	// emplace_back pass just the param list to the constructor so it will construct the object inside de Vector class

	vertices.emplace_back(1, 2, 3);
	vertices.emplace_back(4, 5, 6);
	vertices.emplace_back(7, 8, 9);

	std::cin.get();
}