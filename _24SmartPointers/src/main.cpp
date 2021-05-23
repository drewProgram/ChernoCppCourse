#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
	Entity()
	{
		std::cout << "Create Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print() {}
};

int main()
{
	// Smart pointers make the process of freeing memory automatic

	// Unique pointer
	// Scoped pointer, when it gets out from the scope, it is destroyed
	{
		// u could instead write entity(new Entity), but this way is more exepction safe
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();

		entity->Print();
	}

	// Shared pointer
	// As soon as all references to the pointer dies, it'll be destroyed
	{
		// Shared pointer has to allocate another block of memory called control block which stores the reference counting
		// if u create a new Entity it'll allocate two times memory
		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
	}
	std::cin.get();
}
