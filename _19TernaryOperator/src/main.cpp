#include <iostream>
#include <string>

static int s_Level = 1;
static int s_Speed = 2;

int main()
{
	s_Speed = s_Level > 5 ? 10 : 5;

	std::string rank = s_Level > 10 ? "Master" : "Begginer";

	std::cin.get();
}