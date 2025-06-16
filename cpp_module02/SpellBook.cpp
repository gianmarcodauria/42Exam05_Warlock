#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{
    std::map <std::string, ASpell *>::iterator it = Spellsinbook.begin();
    while (it != Spellsinbook.end())
    {
        delete it->second;
        it ++;
    }
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
    {
        if (Spellsinbook.find(spell->getName()) == Spellsinbook.end())
        {
            Spellsinbook[spell->getName()] = spell->clone();
        }
    }
}

void SpellBook::forgetSpell(const std::string &spellname)
{
    if (Spellsinbook.find(spellname) != Spellsinbook.end())
    {
        ASpell *tmp = Spellsinbook[spellname];
        Spellsinbook.erase(Spellsinbook.find(spellname));
        delete tmp;
    }
}

ASpell* SpellBook::createSpell(std::string const &spell)
{
    ASpell* tmp = NULL;
    if (Spellsinbook.find(spell) != Spellsinbook.end())
        tmp = Spellsinbook[spell];
    return tmp;
}

