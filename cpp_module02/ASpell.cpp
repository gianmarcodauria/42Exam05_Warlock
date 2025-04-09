
#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(const std::string &Name, const std::string &Effects)
{
    this->name = Name;
    this->effects = Effects;
}

ASpell::~ASpell()
{
}

ASpell::ASpell(const ASpell &copy)
{
    *this = copy;
}

ASpell &ASpell::operator=(const ASpell &src)
{
    if(this != &src)
    {
        this->name = src.name;
        this->effects = src.effects;
    }
    return *this;
}

std::string ASpell::getName() const
{
    return this->name;
}

std::string ASpell::getEffects() const
{
    return this->effects;
}

void ASpell::launch(const ATarget &ATarget) const
{
    ATarget.getHitBySpell(*this);
}
