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
    else
        throw std::out_of_range("Array is full.");
    // PRINT ARRAY:
    // std::cout << "_tab:" << std::endl;
    // for (unsigned long i = 0; i < this->_tab.size(); i++)
    //     std::cout << this->_tab[i] << std::endl;
}

void    Span::addMoreNbrs( unsigned int nbr ) {
    this->_tab = std::vector<int>(nbr);
    std::generate(this->_tab.begin(), this->_tab.end(), std::rand);
    // PRINT ARRAY:
    // std::cout << "addMoreNbrs print _tab:" << std::endl;
    //  for (unsigned long i = 0; i < this->_tab.size(); i++)
    //     std::cout << this->_tab[i] << std::endl;
}

int     Span::shortestSpan( void ) const {
    if (this->_tab.size() < 2)
        throw std::out_of_range("Not enough elements in array.");

    int shortest_sp = INT_MAX;
    std::vector<int> copy = this->_tab;     // copy needed, otherwise -> compile error

    std::sort(copy.begin(), copy.end());
    for (unsigned long i = 0; i + 1 < copy.size(); i++)
        if ((copy[i + 1] - copy[i]) < shortest_sp)
            shortest_sp = copy[i + 1] - copy[i];
    return shortest_sp;
}

int      Span::longestSpan( void ) const {
    if (this->_tab.size() < 2)
        throw std::out_of_range("Not enough elements in array.");
    std::vector<int>::const_iterator min = std::min_element(this->_tab.begin(), this->_tab.end());
    std::vector<int>::const_iterator max = std::max_element(this->_tab.begin(), this->_tab.end());
    return *max - *min;
}

std::vector<int>    Span::getTab( void ) {
    return this->_tab;
}