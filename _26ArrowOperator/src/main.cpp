#include <iostream>
#include <string>

struct Vector3
{
	float x, y, z;
};

class Entity
{
public:
	int x;
public:
	void Print() const { std::cout << "Hello!" << std::endl; }
};

class ScopedPtr
{
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity* entity)
		: m_Obj(entity)
	{
	}

	~ScopedPtr()
	{
		delete m_Obj;
	}

	// overloading arrow to return the Entity class pointer
	Entity* operator->()
	{
		return m_Obj;
	}
	
	Entity* operator->() const
	{
		return m_Obj;
	}
};

int main()
{
	Entity e;
	e.Print();

	Entity* ptr = &e;
	
	// We can't call the method by doing ptr.Print(), cuz the ptr var is a numeric value (has the numeric memory address of e)
	// we need to dereference the pointer
	Entity& entity = *ptr;
	entity.Print();

	// shortcut
	(*ptr).Print();

	// instead of doing the above, we can do the arrow operator
	ptr->Print();
	ptr->x = 2;

	ScopedPtr entity2 = new Entity();
	// this is only possible cuz we overloaded the arrow operator
	entity2->Print();

	// access the offset of the variables
	// casting the 0 into a Vector3 pointer and use the arrow to access x and take the offset of x and cast that into an integer
	int offset = (int)&((Vector3*)nullptr)->x;
	std::cout << offset << std::endl;

	std::cin.get();
}