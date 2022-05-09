#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const std::string &type)
	: _type(type) {}

ATarget::ATarget(const ATarget &src) {
	*this = src;
}

ATarget	&ATarget::operator=(ATarget const &rhs) {
	this->_type = rhs._type;
	return (*this);
}

ATarget::~ATarget(void) {}

const std::string	&ATarget::getType(void) const {return this->_type;}

void	ATarget::getHitBySpell(const ASpell &a) const {
	std::cout << _type << " has been " << a.getEffects() << std::endl;
}

