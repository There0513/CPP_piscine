#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <algorithm>
# include <stack>
# include <vector>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack( void ) {};
        MutantStack( MutantStack const & copy) { *this = copy; };
        MutantStack & operator=( MutantStack const & copy) { this->std::stack<T>::operator=(copy); };
        ~MutantStack( void ) {};

        // typedef for main:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        // iterator	a random access iterator to value_type	convertible to const_iterator
        iterator                begin( void ) { return this->c.begin(); };
        iterator                end( void ) { return this->c.end(); };

        // const_iterator	a random access iterator to const value_type
        const_iterator          begin( void ) const { return this->c.begin(); };
        const_iterator          end( void ) const { return this->c.end(); };

        // reverse_iterator	reverse_iterator<iterator>
        reverse_iterator        rbegin( void ) { return this->c.begin(); };
        reverse_iterator        rend( void ) { return this->c.end(); };

        // const_reverse_iterator	reverse_iterator<const_iterator>
        const_reverse_iterator  rbegin( void ) const { return this->c.begin(); };
        const_reverse_iterator  rend( void ) const { return this->c.end(); };
};

#endif