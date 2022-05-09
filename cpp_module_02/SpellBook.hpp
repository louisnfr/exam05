#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;

class SpellBook {
	public:
		SpellBook();
		virtual ~SpellBook();

		const std::string &getName() const;
		const std::string &getEffects() const;

		void learnSpell(ASpell *s);
		void forgetSpell(const std::string &s);
		ASpell *createSpell(const std::string &s);
	private:
		std::map<std::string, ASpell *> arr;

		SpellBook(const SpellBook &other);
		SpellBook &operator=(const SpellBook &other);
};
