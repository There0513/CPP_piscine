#include "Fixed.hpp"

Fixed::Fixed( void ): _fixed_point_val(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & copy ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed   & Fixed::operator=(Fixed const & copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_point_val = copy.getRawBits();
    return *this;
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits( void ) const {
    //std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed_point_val;
}

void    Fixed::setRawBits( int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_point_val = raw;
}


// added to ex00:
Fixed::Fixed( const int nbr ): _fixed_point_val(nbr << _fractional_bits) {
    std::cout << "Int constructor called" << std::endl;
    /* It converts it to the corresponding fixed-point value.
    The fractional bits value is initialized to 8 like in exercise 00.
    */
}

Fixed::Fixed( const float nbr ): _fixed_point_val(roundf(nbr * (1 << _fractional_bits))) {
    std::cout << "Float constructor called" << std::endl;
    /* It converts it to the corresponding fixed-point value.
    The fractional bits value is initialized to 8 like in exercise 00.
    */
}

float   Fixed::toFloat( void ) const {
        /* that converts the fixed-point value to a floating-point value.*/
        return (float)_fixed_point_val / (1 << _fractional_bits);
}

int     Fixed::toInt( void )  const {
/* that converts the fixed-point value to an integer value.*/
        return (int)roundf((float)_fixed_point_val / (1 << _fractional_bits));
}
// o = output stream
std::ostream &  operator<<( std::ostream & o, Fixed const & copy ) {
    o << copy.toFloat();
    return o;
}
