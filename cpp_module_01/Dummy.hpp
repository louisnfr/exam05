#ifndef DUMMY_HPP_
#define DUMMY_HPP_

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget{
	public:
		Dummy(void);
		~Dummy(void);

		ATarget *clone(void) const;
};

#endif
