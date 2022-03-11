#include "Fixed.hpp"

Fixed::Fixed( void ): _fixed_point_val(0) {                          // default constructor
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & copy ) {            // copy constructor
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed   & Fixed::operator=(Fixed const & copy) {  // copy assignment operator overload
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_point_val = copy.getRawBits();
    return *this;
}

Fixed::~Fixed( void ) {                         // destructor
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed_point_val;
}

void    Fixed::setRawBits( int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_point_val = raw;
}