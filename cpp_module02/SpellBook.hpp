#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:
        SpellBook(const SpellBook &copy);
        SpellBook &operator=(const SpellBook &copy);
        std::map <std::string, ASpell *> Spellsinbook;

    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell* spell);
        void forgetSpell(const std::string &spellname);
        ASpell* createSpell(std::string const &spell);
};

#endif