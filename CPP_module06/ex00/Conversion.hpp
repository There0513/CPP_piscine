#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>
# include <stdlib.h>
# include <iostream>
# include <iomanip>
# include <math.h>
# include <limits>

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
        std::string _limit;

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