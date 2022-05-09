#pragma once

#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	public:
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget *target);
		void	forgetTargetType(std::string const &type);
		ATarget	*createTarget(std::string const &type);
	private:
		std::map<std::string, ATarget *>	arr_target;

		TargetGenerator(const TargetGenerator &src);
		TargetGenerator &operator=(const TargetGenerator &rhs);
};
