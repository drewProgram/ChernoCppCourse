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
	// |=======================================================================================|
	// |						PROPERTIES OF STACK ALLOCATED OBJECTS						   |
	// | * Valid only for the scope which it was created,									   |
	// | * A stack frame is created and when the scope of the object ends, it'll be destroyed, |
	// | * The stack is small, usually has only 1-2mb of size, depending of the compiler;	   |
	// |=======================================================================================|
	
	// creating on the stack memory
	// this is the fastest way of instatiating an object, whenever u can do create on the stack
	Entity e; // as long as we have a default constructor the class is initiated (we don't really need the keyword parenteses)
	Entity e2("Andrew");

	std::cout << e.GetName() << std::endl;
	std::cout << e2.GetName() << std::endl;

	// to observe the behavior, debug the code bellow
	Entity* e3;
	{
		Entity entity("Andrew Stack");
		e3 = &entity;
		std::cout << entity.GetName() << std::endl;
	}

	// |========================================================================================================|
	// |								PROPERTIES OF HEAP ALLOCATED OBJECTS									|
	// | * Has a lot of space for large objects,																|
	// | * It lasts untill u say it needs to be destroyed,														|
	// | * We need to call the delete to destroy the object, if we dont do that we can have memory leak issues; |
	// |========================================================================================================|

	// Creating on heap memory
	// When we call the new keyword we allocate memory on the heap, call the constructor and it return the Entity pointer,
	// the location on the heap where this entity has been allocated
	Entity* e4;
	{
		Entity* entity = new Entity("Andrew Heap");
		e4 = entity;
		std::cout << entity->GetName() << std::endl;
	}

	std::cin.get();
	delete e4;
}