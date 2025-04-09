

#include "TargetGenerator.hpp"
#include "ASpell.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
    ATarget *tmp = NULL;
    if(Target.find(target) != Target.end())
        tmp = Target[target];
    return tmp;
}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if(target)
        if(Target.find(target->getType()) == Target.end())
            Target[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(const std::string &target)
{
    if(Target.find(target) != Target.end())
    {
        ATarget *tmp = Target[target];
        Target.erase(Target.find(target));
        delete tmp;
    }
}

