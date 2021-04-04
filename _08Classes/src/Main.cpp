#include <iostream>

class Player
{
public:
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

class Log
{
public:
	enum Level
	{
		LevelError = 0, LevelWarning, LevelInfo
	};

private:
	Level m_LogLevel = Info; // the m_ is a convention for class member which is private

public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
};

int main()
{
	Player player;
	player.Move(1, -1);

	Log log;
	log.SetLevel(Log::LevelError);
	log.Warn("Hello!");

	std::cin.get();
}