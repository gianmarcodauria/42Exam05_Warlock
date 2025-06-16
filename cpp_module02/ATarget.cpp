#include "ATarget.hpp"

ATarget::ATarget(std::string type)
{
    this->_type = type;
}

ATarget::~ATarget()
{

}

ATarget::ATarget(ATarget const & copy)
{
    *this = copy;
}

ATarget& ATarget::operator=(ATarget const & copy)
{
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return *this;
}

std::string ATarget::getType() const
{
    return this->_type;
}

void ATarget::getHitBySpell(ASpell const & spell) const
{
    std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}