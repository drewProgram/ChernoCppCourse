#include <iostream>
#include <array>

class Entity
{
public:
	static const int exampleSize = 5;
	// declaring raw array
	int example[exampleSize];

	// declaring array with array class
	// obs: std::array is safer, but a little bit slower
	std::array<int, 5> another;

	Entity()
	{
		for (int i = 0; i < exampleSize; i++)
			example[i] = 2;
	}
};

int main()
{
	Entity e;

	// OBS: if writing in some position which does not belongs to the array, it will write in a memory address outside the array in release mode.

	
	std::cin.get();
}