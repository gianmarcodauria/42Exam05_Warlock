#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects)
{
    this->_name = name;
    this->_effects = effects;
}

ASpell::~ASpell()
{

}


ASpell::ASpell(ASpell const & copy)
{
    *this = copy;
}

ASpell& ASpell::operator=(ASpell const & copy)
{
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_effects = copy._effects;
    }
    return *this;
}

std::string ASpell::getName() const
{
    return this->_name;
}

std::string ASpell::getEffects() const
{
    return this->_effects;
}

void ASpell::launch(ATarget const & target) const
{
    target.getHitBySpell(*this);
}