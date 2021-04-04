#include <iostream>
#include <string>

class Entity
{
private:
	int m_X;
	int* m_Y;
	// this var can be modified by const methods
	mutable int var;
public:
	// returning a pointer that cant be modified which the content cant be modified either and the method cant change the class
	const int* const GetY() const
	{
		return m_Y;
	}

	// this method cant change any member of the class
	int GetX() const
	{
		return m_X;
	}

	void SetX(int x)
	{
		m_X = x;
	}
};

int main()
{
	// u cant change the value of 
	const int MAX_AGE = 90;

	// cant modify the content of the content
	const int* a = new int;
	// int const* a = new int; => the same thing as above

	// can reasing the pointer
	int* const b = new int;

	*a = 2;
	std::cout << *a << std::endl;

	std::cin.get();
}