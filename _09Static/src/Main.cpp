#include <iostream>

// extern tells to the linker to search in another file (translation unit) this variable
extern int s_Variable; // this var is referencing the s_Variable

// we don't get any linking error
void Function()
{

}

struct Entity {
	static int x, y;

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

// we need to define the static vars
int Entity::x;
int Entity::y;

int main()
{
	std::cout << s_Variable << std::endl;

	Entity e;
	e.x = 2;
	e.y = 3;

	// e1.x it's the same as Entity::x, cuz it's only one value for all instances
	Entity e1; 
	e1.x = 5,
	e1.y = 8;

	// the static variables are the same, bc it's only one value for all instances (shared value)
	e.Print();
	e1.Print();
	std::cin.get();
}