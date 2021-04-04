#include <iostream>
#include <string>

class Entity
{
public:
	// virtual generates a v table for this function
	virtual std::string GetName() { return "Entity"; }
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		: m_Name(name) {}

	std::string GetName() override { return m_Name; }
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	std::cout << e->GetName() << std::endl;

	Player* p = new Player("Andrew");
	PrintName(p);

	std::cin.get();
}