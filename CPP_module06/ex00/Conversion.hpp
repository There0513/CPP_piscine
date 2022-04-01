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
        int     _type;
        double  _nbr;

    public:
        Conversion( std::string const nbr);
        Conversion( Conversion const & copy );
        Conversion & operator=( Conversion const & copy );
        ~Conversion( void );
        int     getType( std::string const nbr );
        int     get_numeric_type( std::string const nbr );
        void    print_type( int type );
        
};

#endif