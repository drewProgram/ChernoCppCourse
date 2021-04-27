#include <iostream>
#include <string>

template<int N>
class Array
{
private:
	int m_Array[N];
public:
	int GetSize() const { return N; }
};

// instead of doing multiple overloads we can create a template
template<typename T>
void Print(T value)
{
	std::cout << value << std::endl;
}
/*
void Print(std::string value)
{
	std::cout << value << std::endl;
}
*/

int main()
{
	// A template allows u to define a template that will be compiled by ur usage

	Array<5> array;
	std::cout << array.GetSize() << std::endl;

	Print(5);
	Print("Hello");
	Print(5.4f);

	std::cin.get();
}