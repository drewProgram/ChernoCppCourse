#include <iostream>
#include <string>
#include <vector>

// Vector - an array which can resize

struct Vertex
{
	float x, y, z;
};

// always pass the reference of the vector to not copy it
void Function(const std::vector<Vertex>& vertices)
{

}

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

int main()
{
	// always prefer to use vector with objects, not pointers
	std::vector<Vertex> vertices;
	vertices.push_back({ 1, 2, 3 });
	vertices.push_back({ 4, 5, 6 });
	Function(vertices);

	for (int i = 0; i < vertices.size(); i++)
		std::cout << vertices[i] << std::endl;

	for (Vertex& v: vertices)
		std::cout << v << std::endl;

	// to erase a specific index
	// vertices.erase(vertices.begin() + 1); // erases the index 1

	// to clear the array
	vertices.clear();

	std::cin.get();
}