#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	public:
		ATarget();
		ATarget(const std::string &type);
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);
		virtual ~ATarget();

		const std::string &getType() const;

		virtual ATarget *clone() const = 0;

		void getHitBySpell(const ASpell &s) const;
	private:
		std::string type;
};
