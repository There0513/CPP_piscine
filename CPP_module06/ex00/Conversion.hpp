#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>
# include <stdlib.h>
# include <iostream>
# include <iomanip>

# define ERROR       -1
# define NOT_DEF     0
# define CHAR        1
# define INT         2
# define FLOAT       3
# define DOUBLE      4
class Conversion
{
    private:
        std::string _convPtrs[3];
        int         _type;

    public:
        Conversion( std::string const nbr);
        Conversion( Conversion const & copy );
        Conversion & operator=( Conversion const & copy );
        ~Conversion( void );

        /* utils get type: */
        int     getType( std::string const nbr );
        int     get_numeric_type( std::string const nbr );
        void    print_type( int type );
};

#endif

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0
// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan
// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0