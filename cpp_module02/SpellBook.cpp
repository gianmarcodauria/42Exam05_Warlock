#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{   
    std::map<std::string, ASpell *>::iterator it = BookOfSpells.begin();
    while (it != BookOfSpells.end()) 
    {
        delete it->second;
        it ++;
    }
}

ASpell* SpellBook::createSpell(std::string const &spell)
{
    ASpell *tmp = NULL;
    if(BookOfSpells.find(spell) != BookOfSpells.end())
        tmp = BookOfSpells[spell];
    return tmp;
}

void SpellBook::learnSpell(ASpell *spell)
{
    if(spell)
        if(BookOfSpells.find(spell->getName()) == BookOfSpells.end())
            BookOfSpells[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(const std::string &spellname)
{
    if(BookOfSpells.find(spellname) != BookOfSpells.end())
    {
        ASpell *tmp = BookOfSpells[spellname];
        BookOfSpells.erase(BookOfSpells.find(spellname));
        delete tmp;
    }
}

