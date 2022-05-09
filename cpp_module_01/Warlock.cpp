#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
	: name(name), title(title) {
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!\n";
	std::map<std::string, ASpell *>::iterator it_b = arr.begin();
	while (it_b != arr.end())
	{
		delete it_b->second;
		++it_b;
	}
	arr.clear();
}

void Warlock::introduce() const {
	std::cout << name << ": I am" << name << ", " << title << std::endl;
}

const std::string &Warlock::getName() const {return this->name;}
const std::string &Warlock::getTitle() const {return this->title;}
void Warlock::setTitle(const std::string &s) {this->title = s;}

void Warlock::learnSpell(ASpell *s) {
	if (s)
		arr.insert(std::pair<std::string, ASpell *>(s->getName(), s->clone()));
}

void Warlock::forgetSpell(std::string s) {
	std::map<std::string, ASpell *>::iterator it = arr.find(s);
	if (it != arr.end())
		delete it->second;
	arr.erase(s);
}

void Warlock::launchSpell(std::string s, ATarget &t) {
	ASpell *spell = arr[s];
	if (spell)
		spell->launch(t);
}
