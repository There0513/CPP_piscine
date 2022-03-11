#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

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
};

#endif