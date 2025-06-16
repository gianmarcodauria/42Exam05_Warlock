#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    private:
        std::map <std::string, ATarget *> TARGET;
        TargetGenerator(const TargetGenerator &copy);
        TargetGenerator &operator=(const TargetGenerator &copy);

    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &type);
        ATarget* createTarget(std::string const &target);


};

#endif