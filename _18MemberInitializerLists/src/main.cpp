#include <iostream>
#include <string>

class Entity
{
private:
	int m_Score;
	std::string m_Name;
public:
	Entity()
		// not using member initializer lists actually makes u lose performance, cuz the var will be executed twice
		// always initialize the members in the order u declare them in the class
		: m_Score(0), m_Name("Unknown")
	{
		// instead of initializing members in this way, cpp can do the above (member initializer list)
		// m_Name = "Unknown";
	}

	Entity(const std::string& name)
		: m_Name(name)
	{
	}

	const std::string& GetName() const { return m_Name; }
};

int main()
{
	Entity e0;
	std::cout << e0.GetName() << std::endl;

	Entity e1("Andrew");
	std::cout << e1.GetName() << std::endl;

	std::cin.get();
}