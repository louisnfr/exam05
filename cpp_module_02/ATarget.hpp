#ifndef ATARGET_HPP_
#define ATARGET_HPP_

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	public:
		ATarget(void);
		ATarget(const std::string &type);
		ATarget(const ATarget &src);
		ATarget	&operator=(ATarget const &rhs);
		virtual ~ATarget(void);
		const std::string	&getType(void) const;
		virtual ATarget	*clone(void) const = 0;
		void	getHitBySpell(const ASpell &a) const;
	private:
		std::string	_type;
};

#endif
