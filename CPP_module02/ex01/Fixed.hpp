#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
#include <cmath>

/*
    Classes designed in the Orthodox Canonical Form:
        • Default constructor
        • Copy constructor
        • Copy assignment operator
        • Destructor
*/

class   Fixed {

    private:
        int                 _fixed_point_val;
        static const int    _fractional_bits = 8;

    public:
        Fixed( void );                          // default constructor
        Fixed( Fixed const & copy );            // copy constructor
        Fixed & operator=(Fixed const & copy);  // copy assignment operator overload
        ~Fixed( void );                         // destructor

        int     getRawBits( void ) const;
        void    setRawBits( int const raw);

        // added to ex00:
        Fixed( const int nbr );                 // constructor (const int)
        Fixed( const float nbr );               // constructor (const float)

        float   toFloat( void ) const;
        int     toInt( void ) const;
};

// <<:
std::ostream &  operator<<( std::ostream & o, Fixed const & copy );
/*And add the following function to the Fixed class files:
• An overload of the insertion («) operator that inserts a floating-point
representation of the fixed-point number into the output stream object
passed as parameter.*/
#endif