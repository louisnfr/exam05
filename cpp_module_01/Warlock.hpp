#ifndef WARLOCK_HPP_
#define WARLOCK_HPP_

#include <iostream>

class Warlock {
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock(void);
		void	setTitle(const std::string &title);
		const std::string	getName(void) const;
		const std::string	getTitle(void) const;
		void	introduce(void) const;

		void	learnSpell(Aspell *s);
		void	forgetSpell(std::string s);
		void	launchSpell(std::string s, ATarget &t);
	private:
		std::vector<ASpell *>	spells;
		std::string	_name;
		std::string	_title;

		Warlock(void);
		Warlock(const Warlock &src);
		Warlock	&operator=(Warlock const &rhs);
};

#endif // WARLOCK_HPP_
