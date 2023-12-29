#include <iostream>
#include "StarterProject.hpp"

int main()
{
    std::cout << "StarterProjectNoTests\n";

    StarterProject::Task();

#ifdef STARTER_PROJECT
    std::cout << "STARTER_PROJECT is ON\n";
#else
    std::cout << "STARTER_PROJECT is OFF\n";
#endif
}
