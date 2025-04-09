
#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:
        SpellBook(const SpellBook &copy);
        SpellBook &operator=(const SpellBook &src);
        std::map<std::string, ASpell *> BookOfSpells;
    public:
        SpellBook();
        ~SpellBook();
        
        void learnSpell(ASpell *spell); // delete const
        void forgetSpell(const std::string &spellname);
        ASpell* createSpell(std::string const &spell);

};

