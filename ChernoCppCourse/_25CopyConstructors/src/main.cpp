#include <iostream>
#include <string>

struct Vector2
{
	float x, y;
};

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}

	// Copy constructor - copy the memory of the other object into this members
	// this code will perform a deep copy of the object
	String(const String& other)
		: m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	~String()
	{
		delete[] m_Buffer;
	}

	// overloading operator [] to work with strings
	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

// overloading << operator in order to use the string var at the cout
std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

int main()
{
	// a.x will remain being 2, cuz b is just copying its value
	Vector2 a = { 2, 3 };
	Vector2 b = a;
	b.x = 5;

	// it will change in both vars, cuz they are pointing to the same place
	Vector2* c = new Vector2();
	Vector2* d = c;
	c->x = 2;

	// Always when u use = u are copying the value, with the exception for references.

	String string = "Andrew";
	// This without the copy constructor would cause a crash, cuz we would copy the string var, and doing so would also copy the char*
	// as we have the destructor which deletes the pointer to free the memory. The second var would try to also delete that
	// memory address, but it cant do that cuz that memory would already be freed by the string var.
	String second = string;
	second[1] = 'm';

	std::cout << string << std::endl;
	std::cout << second << std::endl;

	std::cin.get();
}