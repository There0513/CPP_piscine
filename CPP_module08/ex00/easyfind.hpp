#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <vector>
# include <iostream>
# include <cstdlib>     /* srand, rand */

template< typename T>
typename T::iterator    easyfind(T &container, int nbr) {
    typename T::iterator it = find(container.begin(), container.end(), nbr);
    if (it == container.end())
        throw std::runtime_error("Not found or empty.");
    return it;
}

#endif