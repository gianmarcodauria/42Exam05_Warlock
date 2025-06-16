#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
    this->_name = name;
    this->_title = title;
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
    std::map <std::string, ASpell *>::iterator it = BookSpells.begin();
    while (it != BookSpells.end())
    {
        delete it->second;
        it ++;
    }
}

const std::string& Warlock::getName() const
{
    return this->_name;
}

const std::string& Warlock::getTitle() const
{
    return this->_title;
}

void Warlock::setName(const std::string &str)
{
    this->_name = str;
}

void Warlock::setTitle(const std::string &str)
{
    this->_title = str;
}


void Warlock::introduce() const
{
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}


void Warlock::learnSpell(ASpell* spell)
{
    if (spell)
    {
        if (BookSpells.find(spell->getName()) == BookSpells.end())
        {
            BookSpells[spell->getName()] = spell->clone();
        }
    }
}

void Warlock::forgetSpell(std::string spell)
{
    if (BookSpells.find(spell) != BookSpells.end())
        BookSpells.erase(BookSpells.find(spell));
}

void Warlock::launchSpell(std::string spellname, ATarget const & target)
{
    if (BookSpells.find(spellname) != BookSpells.end())
        BookSpells[spellname]->launch(target);
}


