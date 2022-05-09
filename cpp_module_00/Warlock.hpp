#pragma once

#include <iostream>

class Warlock {
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();

		const std::string &getName() const;
		const std::string &getTitle() const;

		void setTitle(const std::string &s);

		void introduce() const;
	private:
		std::string	name;
		std::string	title;

		Warlock();
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);
};
