#include <iostream>
#include <string>

#include <stdlib.h>

int main()
{
	// A string literal is a series of characters beetween double quotes. ("")
	// It is ALWAYS stored on the readonly memory
	using namespace std::string_literals;

	// with the s after the string literals u can 
	std::string name0 = "Andrew"s + "hello";

	const char* name = "Andrew"; // 1 byte per character (UTF-8)
	const wchar_t* name2 = L"Andrew"; // 2 bytes per character (it can be 4 bytes on linux)

	const char16_t* name3 = u"Andrew"; // 2 bytes per character (UTF-16)
	const char32_t* name4 = U"Andrew"; // 4 bytes per character (UTF-32)

	std::cout << strlen(name) << std::endl;

	std::cin.get();
}