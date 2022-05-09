#pragma once

#include <iostream>
#include <map>
#include "SpellBook.hpp"

class Warlock {
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();

		const std::string &getName() const;
		const std::string &getTitle() const;

		void setTitle(const std::string &s);

		void introduce() const;

		void learnSpell(ASpell *s);
		void forgetSpell(const std::string &s);
		void launchSpell(std::string s, ATarget &t);
	private:
		std::string	name;
		std::string	title;
		SpellBook	book;

		Warlock();
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);
};
