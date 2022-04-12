#include "Span.hpp"

Span::Span( void ): _N(0), _tab(0) {

}

Span::Span( unsigned int nbr ): _N(nbr) {
    this->_tab = std::vector<int>();
}

Span::Span( Span const & copy ) {
    *this = copy;
}

Span & Span::operator=( Span const & copy ) {
    this->_N = copy._N;
    this->_tab = copy._tab;
    return *this;
}

Span::~Span( void ) {

}

void    Span::addNumber( int nbr ) {
    if (this->_tab.size() < this->_N)
        this->_tab.push_back(nbr);
    // else
    //     throw ("array is full.");
    std::cout << "_tab:" << std::endl;
    for (unsigned long i = 0; i < this->_tab.size(); i++)
        std::cout << this->_tab[i] << std::endl;
}

int     Span::shortestSpan( void ) const {
}

// int      Span::longestSpan( void ) const {

// }