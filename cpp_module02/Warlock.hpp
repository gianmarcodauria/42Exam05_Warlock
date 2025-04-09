

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
    private:
        std::string _name;
        std::string _title;
        Warlock(const Warlock &copy);
        Warlock &operator=(const Warlock &src);
        SpellBook spellofbook;
    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();
        
        void introduce() const;
        const std::string& getName() const;
        const std::string& getTitle() const;
        void setName(const std::string &str);
        void setTitle(const std::string &str);

        void learnSpell(ASpell *spell); // delete const
        void forgetSpell(std::string spellname);
        void launchSpell(std::string spellname, ATarget const &Target); // add const
};

#endif

