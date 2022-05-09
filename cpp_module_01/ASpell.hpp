#ifndef ASPELL_HPP_
#define ASPELL_HPP_

#include <iostream>

class ASpell {
	public:
		ASpell(void);
		ASpell(const std::string &name, const std::string &_effects);
		ASpell(const ASpell &src);
		ASpell	&operator=(ASpell const &rhs);
		~ASpell(void);
		const std::string	getName(void) const;
		const std::string	getEffects(void) const;
		virtual ASpell	*clone(void) const = 0;
	private:
		std::string	_name;
		std::string	_effects;

};

#endif // ASPELL_HPP_
