#include "ATarget.hpp"

ATarget::ATarget(const std::string &type)
	: type(type) {}

ATarget::ATarget(const ATarget &other) {
	*this = other;
}

ATarget	&ATarget::operator=(const ATarget &other) {
	type = other.type;
	return (*this);
}

ATarget::~ATarget() {}

const std::string &ATarget::getType() const {return this->type;}

void	ATarget::getHitBySpell(const ASpell &s) const {
	std::cout << type << " has been " << s.getEffects() << "!\n";
}
