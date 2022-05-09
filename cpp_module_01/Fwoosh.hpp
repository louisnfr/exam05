#ifndef FWOOSH_HPP_
#define FWOOSH_HPP_

#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell{
	public:
		Fwoosh(void);
		~Fwoosh(void);

		Aspell *clone(void) const;
};

#endif
