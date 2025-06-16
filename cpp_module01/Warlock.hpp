#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "ASpell.hpp"
#include <iostream>
#include <map>


class Warlock
{
    private:
        std::string _name;
        std::string _title;
        Warlock(const Warlock &copy);
        Warlock &operator=(const Warlock &copy);
        std::map <std::string, ASpell *> BookSpells;
    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();

        void introduce() const;
        const std::string& getName() const;
        const std::string& getTitle() const;

        void setName(const std::string &str);
        void setTitle(const std::string &str);

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string spellname);
        void launchSpell(std::string spellname, ATarget const & target);
};

#endif