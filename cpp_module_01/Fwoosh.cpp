#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh(void) {}

Asppell	*Fwoosh::clone(void) const {
	return (new Fwoosh);
}
