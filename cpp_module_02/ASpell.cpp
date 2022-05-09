#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const std::string &name, const std::string &effects)
	: _name(name), _effects(effects) {

}

ASpell::ASpell(const ASpell &src) {
	*this = src;
}

ASpell	&ASpell::operator=(ASpell const &rhs) {
	this->_name = rhs._name;
	this->_effects = rhs._effects;
	return (*this);
}

ASpell::~ASpell(void) {}

const std::string	ASpell::getName(void) const {return this->_name;}

const std::string	ASpell::getEffects(void) const {return this->_effects;}

void	ASpell::launch(const ATarget &target) const {
	target.getHitBySpell(*this);
}
