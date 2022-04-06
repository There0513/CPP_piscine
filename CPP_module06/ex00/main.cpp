#include "Conversion.hpp"

/*  ___________________________________________________
    - type = getType of av[1]
    - convert type to char, int, float, double
    ___________________________________________________ */
    
int main( int ac, char **av )
{
    if (ac != 2)
    {
        std::cout << "Please give only one argument to the program." << std::endl;
        return 0;
    }
    Conversion  nbr(av[1]);
    return 0;
}