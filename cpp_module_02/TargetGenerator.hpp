#pragma once

#include <map>
#include "ATarget.hpp"

class TargetGenerator {
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *t);
		void forgetTargetType(const std::string &s);
		ATarget *createTarget(const std::string &s);
	private:
		std::map<std::string, ATarget *> arr;

		TargetGenerator(const TargetGenerator &other);
		TargetGenerator &operator=(const TargetGenerator &other);
};
