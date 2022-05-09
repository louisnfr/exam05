#pragma once

#include <iostream>
#include "ASpell.hpp"
#include <map>

class SpellBook
{
	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell *s);
		void	forgetSpell(std::string const &s);
		ASpell	*createSpell(std::string const &s);
	private:
		std::map<std::string, ASpell *> arr;
		
		SpellBook(const SpellBook &src);
		SpellBook &operator=(const SpellBook &rhs);
};
