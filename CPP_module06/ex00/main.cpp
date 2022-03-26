#include <string>
// #include <stdio.h>
#include <stdlib.h>
#include <iostream>
// #include <cstdlib>
// #include <cmath>
// #include <cctype>
// #include <cstring>
// #include <float.h>
#include <iomanip>

#define ERROR       -1
#define NOT_DEF     0
#define CHAR        1
#define INT         2
#define FLOAT       3
#define DOUBLE      4

void    print_type( int type )
{
    if (type == -1)
        std::cout << "ERROR\t";
    else if (type == 0)
        std::cout << "NOT_DEF\t";
    else if (type == 1)
        std::cout << "CHAR\t";
    else if (type == 2)
        std::cout << "INT\t";
    else if (type == 3)
        std::cout << "FLOAT\t";
    else if (type == 4)
        std::cout << "DOUBLE\t";
    std::cout << "type = "<< type << std::endl;
}

int get_numeric_type(std::string str)
{
    int no_int = 0;
    size_t find_f = str.find('f');

    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
            return -1;
        if (str[i] == 'f' && no_int == 1)
            return 3;
        if (no_int == 1 && find_f > str.length())
            return 4;
        if (str[i] == '.')  // . != int
            no_int = 1;
    }
    if (no_int == 0)
        return 2;
    if (no_int != 1)
    {
        std::cout << "\tif (not_int != 1) -> ret 4" << std::endl;
        return 4;
    }
    std::cout << "else else else" << std::endl;
    return 0;
}

int main( int ac, char **av )
{
    if (ac != 2)
    {
        std::cout << "Please give only one argument to the program." << std::endl;
        return 0;
    }
    // If a conversion to char is not displayable, prints an informative message.

    /* ___________________________________________________
    - type = getType of av[1]
    - convert type to char, int, float, double
    ___________________________________________________ */

    std::string argument = av[1];
    // get type:
    int type = NOT_DEF;
    size_t i = -1;
    while (++i < argument.length() && !isdigit(argument[i]));
    if (i == argument.length())
        type = CHAR;
    else
        while (++i < argument.length())
            if (!isdigit(argument[i]) && argument[i] != '.' && argument[i] != 'f')
                type = ERROR;
    if (type != CHAR && type != ERROR)
        type = get_numeric_type(argument);
    print_type(type);
    if (type == -1 || type == 0)
        std::cout << "Error." << std::endl;

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