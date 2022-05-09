#ifndef WARLOCK_HPP_
#define WARLOCK_HPP_

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock {
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock(void);
		const std::string	getName(void) const;
		const std::string	getTitle(void) const;

		void	setTitle(const std::string &title);

		void	introduce(void) const;

		void	learnSpell(ASpell *s);
		void	forgetSpell(std::string s);
		void	launchSpell(std::string s, ATarget &t);
	private:
		std::string	_name;
		std::string	_title;
		SpellBook	book;

		Warlock(void);
		Warlock(const Warlock &src);
		Warlock	&operator=(Warlock const &rhs);
};

#endif // WARLOCK_HPP_
