#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)
{
	for (int value : values)
		func(value);
}

int main()
{
	std::vector<int> values = { 1, 5, 4, 2, 3 };
	auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });
	std::cout << *it << std::endl;

	int a = 5;
	/*
	* Lambda breakdown
	* 1. [] - capture clause (lambda-introducer)
	* 2. () - parameter list -OPTIONAL-
	* 3. mutable - mutable specification -OPTIONAL-
	* 4. throw() - exception specification -OPTIONAL-
	* 5. -> int - trailing-return-type -OPTIONAL
	* 6. {} - lambda body
	*/
	auto lambda = [=](int value) { std::cout << "Value " << value <<
		". Additional value: " << a << std::endl; };
	ForEach(values, lambda);

	std::cin.get();
}