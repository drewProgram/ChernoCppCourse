#include <iostream>

int main()
{
	int var = 8;
	// void pointer = typeless pointer
	int* ptr = &var; // passing the memory address of var
	*ptr = 10;
	std::cout << *ptr << std::endl;

	// allocating 8 bytes of memory
	char* buffer = new char[8]; // returning the pointer in the beggining of the block of memory
	// fills a block of memory with data
	memset(buffer, 0, 8);

	// double pointer (pointer which points a pointer)
	char** ptr = &buffer;

	delete[] buffer;

	std::cin.get();
}
