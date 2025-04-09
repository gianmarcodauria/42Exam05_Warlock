

#include "ATarget.hpp"

ATarget::ATarget(const std::string &Type)
{
    this->type = Type;
}

ATarget::~ATarget()
{
}

ATarget::ATarget(const ATarget &copy)
{
    *this = copy;
}

ATarget &ATarget::operator=(const ATarget &src)
{
    if(this != &src)
    {
        this->type = src.type;
    }
    return *this;
}

const std::string& ATarget::getType() const
{
    return this->type;
}


void ATarget::getHitBySpell(const ASpell &ASpell) const
{
    std::cout<<getType()<< " has been "<<ASpell.getEffects()<<"!"<<std::endl;
}


