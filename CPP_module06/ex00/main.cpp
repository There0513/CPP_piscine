#include "Conversion.hpp"

int main( int ac, char **av )
{
    if (ac != 2)
    {
        std::cout << "Please give only one argument to the program." << std::endl;
        return 0;
    }
    Conversion  nbr(av[1]);
    // If a conversion to char is not displayable, prints an informative message.

    /* ___________________________________________________
    - type = getType of av[1]
    - convert type to char, int, float, double
    ___________________________________________________ */

    // - convert type to char, int, float, double

    // int         nbr_i = static_cast<int>(arg);
    // float   nbr_f = std::stof(av[1]);
    // double      nbr_d = std::atof(av[1]);

    // std::cout << "char: " << arg << std::endl;
    // // std::cout << "int: " <<  << std::endl;
    // std::cout << "float: " << nbr_f << std::endl;
    // // std::cout << "double: " << std::atof(av[1]) << std::endl;
    // std::cout << "double: " << std::setprecision(1) << std::fixed << nbr_d << std::endl;

    return 0;
}

/*
    ./convert 0
        char: Non displayable
        int: 0
        float: 0.0f
        double: 0.0
    ./convert nan
        char: impossible
        int: impossible
        float: nanf
        double: nan
    ./convert 42.0f
        char: '*'
        int: 42
        float: 42.0f
        double: 42.0
*/