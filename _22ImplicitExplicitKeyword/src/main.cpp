#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	// explicit is for when u want to ur constructor be explicitly called
	explicit Entity(const std::string& name)
		: m_Name(name), m_Age(-1) {}
	Entity(int age)
		: m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
	// Printing
}

int main()
{
	PrintEntity(20);
	// explicit construction
	PrintEntity(Entity("Andrew"));

	Entity a("Andrew");
	// u can do the above like this (implicit way):
	// in the implicit way, cpp implicitly converts the value into the constructor which applies the value
	Entity b = 20;

	std::cin.get();
}