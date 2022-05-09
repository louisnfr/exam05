#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) {}

TargetGenerator::~TargetGenerator(void) {
	std::map<std::string, ATarget *>::iterator it_b = arr_target.begin();
	std::map<std::string, ATarget *>::iterator it_e = arr_target.end();

	while (it_b != it_e)
	{
		delete it_b->second;
		++it_b;
	}
	arr_target.clear();
}

void	TargetGenerator::learnTargetType(ATarget *target) {
	if (target)
		arr_target.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void	TargetGenerator::forgetTargetType(std::string const &type)
{
	std::map<std::string, ATarget *>::iterator it = arr_target.find(type);
	if (it != arr_target.end())
		delete it->second;
	arr_target.erase(type);
}

ATarget	*TargetGenerator::createTarget(std::string const &type) {
	std::map<std::string, ATarget *>::iterator it = arr_target.find(type);
	if (it != arr_target.end())
		return arr_target[type];
	return NULL;
}
