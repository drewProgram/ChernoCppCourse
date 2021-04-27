#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const { return m_Name; }
};

int main()
{
	int a = 2;
	// we need the pointer cuz "new" returns a pointer to the memory u allocated
	int* b = new int[50]; // 200 bytes

	// what new really do is call the malloc() to allocate the memory and calls the class constructor
	Entity* e = new Entity();

	// delete calls the free() to free the allocated memory and also calls the class destructor
	delete e;
	delete[] b;

	std::cin.get();
}