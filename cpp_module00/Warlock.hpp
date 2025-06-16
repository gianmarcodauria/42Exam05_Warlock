#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
    private:
        std::string _name;
        std::string _title;
        Warlock(const Warlock &copy);
        Warlock &operator=(const Warlock &copy);
    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();

        void introduce() const;
        const std::string& getName() const;
        const std::string& getTitle() const;

        void setName(const std::string &str);
        void setTitle(const std::string &str);
};

#endif