#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::string GetName()
{
	return "Andrew";
}

class Device {};

class DeviceManager
{
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Devices;

public:
	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const
	{
		return m_Devices;
	}
};

int main()
{
	auto var = GetName();

	std::vector<std::string> strings;
	strings.push_back("Apple");
	strings.push_back("Orange");

	for (auto it = strings.begin(); it != strings.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	// for big types u can weather use using for creating an alias or typedef or auto
	using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;
	typedef std::unordered_map<std::string, std::vector<Device*>> DeviceMapType;

	DeviceManager dm;
	//const std::unordered_map<std::string, std::vector<Device*>>& devices = dm.GetDevices();
	const auto& devices = dm.GetDevices();
	const DeviceMap& devices2 = dm.GetDevices();
	const DeviceMapType& devices3 = dm.GetDevices();

	std::cin.get();
}