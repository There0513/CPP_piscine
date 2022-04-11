#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void    print_coucou(const T &elem)
{
    std::cout << "Coucou\t";
    std::cout << "elem = " << elem << std::endl;
}

// • The first parameter is the address of an array.
// • The second one is the length of the array.
// • The third one is a function that will be call on
//   every element of the array.
template<typename T>
void    iter(const T* addr_array, int len, void funct(const T & elem)) {
    for (int i = 0; i < len; i++)
        funct(addr_array[i]);
}

#endif