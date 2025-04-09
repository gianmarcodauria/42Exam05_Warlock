

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"

class ASpell;
class ATarget
{
    protected:
        std::string type;
    public:
        ATarget(const std::string &Type);
        virtual ~ATarget();
        ATarget(const ATarget &copy);
        ATarget &operator=(const ATarget &src);
        
        const std::string& getType() const;
        
        virtual ATarget *clone() const = 0;

        void getHitBySpell(const ASpell &ASpell) const; 
};

#endif


