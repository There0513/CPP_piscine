#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

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


        // added to ex00 (ex01):
        Fixed( const int nbr );                 // constructor (const int)
        Fixed( const float nbr );               // constructor (const float)

        float   toFloat( void ) const;
        int     toInt( void ) const;


        // added to ex01 (ex02):
        bool    operator>(Fixed const & copy); // const?!

        /* Add public member functions to your class to overload the following operators:
        • The 6 comparison operators: >, <, >=, <=, == and !=.
        • The 4 arithmetic operators: +, -, *, and /.
        • The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
        post-decrement) operators, that will increase or decrease the fixed-point value from
        the smallest representable  such as 1 +  > 1.
        Add these four public overloaded member functions to your class:
        • A static member function min that takes as parameters two references on fixed-point
        numbers, and returns a reference to the smallest one.
        • A static member function min that takes as parameters two references to constant
        fixed-point numbers, and returns a reference to the smallest one.
        • A static member function max that takes as parameters two references on fixed-point
        numbers, and returns a reference to the greatest one.
        • A static member function max that takes as parameters two references to constant
        fixed-point numbers, and returns a reference to the greatest one.*/
};

// <<:
std::ostream &  operator<<( std::ostream & o, Fixed const & copy );
/*And add the following function to the Fixed class files:
• An overload of the insertion («) operator that inserts a floating-point
representation of the fixed-point number into the output stream object
passed as parameter.*/
#endif