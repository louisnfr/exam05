#include "ASpell.hpp"

ASpell::ASpell(const std::string &name, const std::string &effects)
	: name(name), effects(effects) {}

ASpell::ASpell(const ASpell &other) {
	*this = other;
}

ASpell	&ASpell::operator=(const ASpell &other) {
	name = other.name;
	effects = other.effects;
	return (*this);
}

ASpell::~ASpell() {}

const std::string &ASpell::getName() const {return this->name;}
const std::string &ASpell::getEffects() const {return this->effects;}

void	ASpell::launch(const ATarget &t) const {
	t.getHitBySpell(*this);
}
