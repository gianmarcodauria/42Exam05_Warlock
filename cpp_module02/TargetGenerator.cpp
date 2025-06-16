#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{

}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
    ATarget *tmp = NULL;
    if (TARGET.find(target) != TARGET.end())
        tmp = TARGET[target];
    return tmp;
}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if (target)
    {
        if (TARGET.find(target->getType()) == TARGET.end())
            TARGET[target->getType()] = target; 
    }
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
    if (TARGET.find(type) != TARGET.end())
    {
        ATarget* tmp = TARGET[type];
        TARGET.erase(TARGET.find(type));
        delete tmp;
    }
}