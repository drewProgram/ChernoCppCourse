#include <iostream>

class Entity
{
public:
	float X, Y;

	// constructor
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
		// setting vars to 0 (initializing the var) on the constructor in order to
		// clean the content on the memory
		X = 0.0f;
		Y = 0.0f;
	}

	// destructor
	// destructors are called when the scope where the class where called is over (when the class is stack allocated)
	// as far as I understood stack is when you just instanciate the class and heap is when u use new to create object.
	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

void Function()
{
	Entity e;
	e.Print();
}

int main()
{
	Function();
	std::cin.get();
}