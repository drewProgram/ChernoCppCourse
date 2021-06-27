#include <iostream>
#include <thread>

static bool s_Finished = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;

	std::cout << "Started thread id = " << std::this_thread::get_id() << std::endl;

	while (!s_Finished)
	{
		std::cout << "Working...\n";
		std::this_thread::sleep_for(1s);
	}
}

int main()
{
	// passing function pointer
	std::thread worker(DoWork);

	std::cin.get();
	s_Finished = true;
	
	// waiting for some thread finish its job
	worker.join();

	std::cout << "Job finished." << std::endl;
	std::cout << "Started thread id = " << std::this_thread::get_id() << std::endl;

	std::cin.get();
}