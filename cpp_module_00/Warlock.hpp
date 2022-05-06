#ifndef WARLOCK_HPP_
#define WARLOCK_HPP_

#include <iostream>

class Warlock {
	public:
		Warlock(const std::string &name, const std::string &title);
		// Warlock(const Warlock &src);
		// Warlock	&operator=(Warlock const &rhs);
		~Warlock(void);
		// void	setTitle(const std::string &title);
		// std::string	getName(void) const;
		// std::string	getTitle(void) const;
	private:
		const std::string	_name;
		const std::string	_title;
};

#endif // WARLOCK_HPP_
