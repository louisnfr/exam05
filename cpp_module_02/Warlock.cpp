#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
	: name(name), title(title) {
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!\n";
}

void Warlock::introduce() const {
	std::cout << name << ": I am" << name << ", " << title << std::endl;
}

const std::string &Warlock::getName() const {return this->name;}
const std::string &Warlock::getTitle() const {return this->title;}
void Warlock::setTitle(const std::string &s) {this->title = s;}

void Warlock::learnSpell(ASpell *s) {
	book.learnSpell(s);
}

void Warlock::forgetSpell(const std::string &s) {
	book.forgetSpell(s);
}

void Warlock::launchSpell(std::string s, ATarget &t) {
	ASpell *spell = book.createSpell(s);
	if (spell)
		spell->launch(t);
}
