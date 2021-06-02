#include <iostream>
#include <vector>

void HelloWorld(int a)
{
	std::cout << "Hello World! Value: " << a << std::endl;
}

void PrintValue(int value)
{
	std::cout << "Value: " << value << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}

int main()
{
	void(*function)(int);
	// auto function
	function = HelloWorld;

	function(8);

	std::vector<int> values = { 1, 2, 3, 4 };
	ForEach(values, PrintValue);

	std::cin.get();
}