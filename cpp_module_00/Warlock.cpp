#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
	: _name(name), _title(title) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void) {
	std::cout << this->_name << ": My job here is done." << std::endl;
}
