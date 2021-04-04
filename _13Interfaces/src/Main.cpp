#include <iostream>
#include <string>

class Printable
{
public:
	// in cpp we don't have the keyword "interface", so we define by defining virtual functions that equals 0.
	virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
	// virtual generates a v table for this function
	virtual std::string GetName() { return "Entity"; }
	std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		: m_Name(name) {}

	std::string GetName() override { return m_Name; }
	std::string GetClassName() override { return "Player"; }
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	std::cout << e->GetName() << std::endl;

	Player* p = new Player("Andrew");
	//PrintName(p);

	Print(p);
	Print(e);

	std::cin.get();
}