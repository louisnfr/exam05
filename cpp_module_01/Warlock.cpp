#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
	: _name(name), _title(title) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void) {
	std::cout << this->_name << ": My job here is done." << std::endl;
	std::map<std::string, ASpell *>::iterator it_begin = spells.begin();
	std::map<std::string, ASpell *>::iterator it_end = spells.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	spells.clear();
}

void	Warlock::introduce(void) const
{
	std::cout << this->_name << ": I am " << this->_name << ", "<< this->_title << "!" << std::endl;
}

void	Warlock::setTitle(const std::string &title)
{
	this->_title = title;
}

const std::string	Warlock::getName(void) const { return this->_name; }

const std::string	Warlock::getTitle(void) const { return this->_title; }

void	Warlock::learnSpell(ASpell *s) {
	if (s)
		spells.insert(std::pair<std::string, ASpell *>(s->getName(), s->clone()));
}

void	Warlock::forgetSpell(std::string s) {
	std::map<std::string, ASpell *>::iterator it = spells.find(s);
	if (it != spells.end())
		delete it->second;
	spells.erase(s);
}

void	Warlock::launchSpell(std::string s, ATarget &t) {
	ASpell	*spell = spells[s];
	if (spell)
		spell->launch(t);
}
