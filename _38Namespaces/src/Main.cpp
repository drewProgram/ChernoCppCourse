#include <iostream>
#include <string>
#include <algorithm>

namespace apple {
	void Print(const char* text)
	{
		std::cout << text << std::endl;
	}
}

namespace orange {
	void Print(const char* text)
	{
		std::string temp = text;
		std::reverse(temp.begin(), temp.end());
		std::cout << temp << std::endl;
	}

	namespace functions {
		void AnotherFunction()
		{

		}
	}
}

int main(int argc, char* argv[])
{
	// alias for namespaces
	namespace a = apple;
	namespace o = orange::functions;

	apple::Print("Hello!");
	a::Print("Hello again!");
	orange::Print("Hello!");
	o::AnotherFunction();
}