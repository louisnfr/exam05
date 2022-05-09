#ifndef ATARGET_HPP_
#define ATARGET_HPP_

#include <iostream>
#include "ASpell.hpp"

class ATarget {
	public:
		ATarget(void);
		ATarget(const std::string &name, const std::string &_effects);
		ATarget(const ATarget &src);
		ATarget	&operator=(ATarget const &rhs);
		~ATarget(void);
		const &std::string	getType(void) const;
		virtual ATarget	*clone(void) const = 0;
		void	getHitBySpell(const ASpell &a)
	private:
		std::string	_type;

};

#endif
