#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
	std::map<std::string, ATarget *>::iterator it_b = arr.begin();
	while (it_b != arr.end())
	{
		delete it_b->second;
		++it_b;
	}
	arr.clear();
}

void TargetGenerator::learnTargetType(ATarget *s) {
	if (s)
		arr.insert(std::pair<std::string, ATarget *>(s->getType(), s->clone()));
}

void TargetGenerator::forgetTargetType(const std::string &s) {
	std::map<std::string, ATarget *>::iterator it = arr.find(s);
	if (it != arr.end())
		delete it->second;
	arr.erase(s);
}

ATarget *TargetGenerator::createTarget(const std::string &s) {
	std::map<std::string, ATarget *>::iterator it = arr.find(s);
	if (it != arr.end())
		return arr[s];
	return NULL;
}
