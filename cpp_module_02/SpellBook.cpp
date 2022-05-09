#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
	std::map<std::string, ASpell *>::iterator it_b = arr.begin();
	while (it_b != arr.end())
	{
		delete it_b->second;
		++it_b;
	}
	arr.clear();
}

void SpellBook::learnSpell(ASpell *s) {
	if (s)
		arr.insert(std::pair<std::string, ASpell *>(s->getName(), s->clone()));
}

void SpellBook::forgetSpell(const std::string &s) {
	std::map<std::string, ASpell *>::iterator it = arr.find(s);
	if (it != arr.end())
		delete it->second;
	arr.erase(s);
}

ASpell *SpellBook::createSpell(const std::string &s) {
	std::map<std::string, ASpell *>::iterator it = arr.find(s);
	if (it != arr.end())
		return arr[s];
	return NULL;
}
