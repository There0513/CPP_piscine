#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>

// CONST!!!!!!!!!!!!!!!!!!!!
class Span
{
    private:
        unsigned int        _N;
        std::vector<int>    _tab;

    public:
        Span( void );
        Span( unsigned int nbr );
        Span( Span const & copy );
        Span & operator=( Span const & copy );
        ~Span( void );

        void    addNumber( int nbr );
        int     shortestSpan( void ) const;
        int     longestSpan( void ) const;
};

#endif