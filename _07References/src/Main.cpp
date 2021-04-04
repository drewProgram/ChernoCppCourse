#include <iostream>

void Increment(int& value)
{
	value++;
}

int main()
{
	int a = 5;
	int b = 8;
	// ref will always references the a var
	int& ref = a;
	ref = 2;

	// int* ref2 = &a;
	// ref = &b;

	std::cout << ref << std::endl;

	Increment(a);

	std::cout << ref << std::endl;

	std::cin.get();
}