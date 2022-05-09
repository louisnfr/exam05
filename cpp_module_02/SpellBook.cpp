#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook(void) {
	std::map<std::string, ASpell *>::iterator it_begin = arr.begin();
	std::map<std::string, ASpell *>::iterator it_end = arr.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	arr.clear();
}

void	SpellBook::learnSpell(ASpell *s) {
	if (s)
		arr.insert(std::pair<std::string, ASpell *>(s->getName(), s->clone()));
}

void	SpellBook::forgetSpell(std::string const &s) {
	std::map<std::string, ASpell *>::iterator it = arr.find(s);
	if (it != arr.end())
		delete it->second;
	arr.erase(s);
}

ASpell	*SpellBook::createSpell(std::string const &s) {
	std::map<std::string, ASpell *>::iterator it = arr.find(s);
	if (it != arr.end())
		return arr[s];
	return (NULL);
}
