#pragma once

#include <string>
#include <vector>


class Cartridge
{
private:
	std::string _name;
	std::string _description;
	std::vector<int8_t> _execCommands;
public:
	Cartridge() {

	}
	void initCartridge(std::string name, std::string description, std::vector<int8_t> commands) {
		_execCommands = commands;
		_name = name;
		_description = description;
	}
	std::string getName() {
		return _name;
	}
	std::string getDescription() {
		return _description;
	}
	std::vector<int8_t> getExecCommands() {
		return _execCommands;
	}
};

