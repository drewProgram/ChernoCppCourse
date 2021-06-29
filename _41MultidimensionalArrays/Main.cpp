#include <iostream>

int main()
{
	// array[0] -> points to an integer
	int* array = new int[5];
	
	// a2d[0] -> points to a int*
	// allocates an array which contains 50 int pointers
	int** a2d = new int* [50];
	for (int i = 0; i < 50; i++)
	{
		// allocating 50 ints on a int*
		a2d[i] = new int[50];
	}

	// free the memory
	for (int i = 0; i < 50; i++)
		delete[] a2d[i];
	delete[] a2d;

	// 3 dimensional array (useful for x, y, z values)
	int*** a3d = new int** [5];
	for (int i = 0; i < 5; i++)
	{
		a3d[i] = new int* [5];
		for (int j = 0; j < 5; j++)
		{
			/**
			 * The code bellow is the same as:
			 * 
			 * int** ptr = a3d[i];
			 * ptr[j] = new int[5];
			 */
			a3d[i][j] = new int[5];
		}

	}

	std::cin.get();
}