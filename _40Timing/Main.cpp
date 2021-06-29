#include <iostream>
#include <chrono>
#include <thread>
#include <cstdio>

struct Timer
{
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;

	Timer()
		: duration(0.0f)
	{
		start = std::chrono::high_resolution_clock::now();
	}
	
	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 1000.0f;
		std::cout << "Timer took " << ms << "ms " << std::endl;
	}
};

void Function()
{
	Timer timer;

	for (int i = 0; i < 100; i++)
	{
		std::cout << "Hello\n";
		//std::printf("Hello\n");
	}
}

int main()
{
	Function();

	std::cin.get();
}