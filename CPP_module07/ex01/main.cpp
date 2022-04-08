#include "iter.hpp"

int main(void)
{
    std::string array[3] = {"coucou", "toi", "bye"};
    char str[6] = "Hello";

    iter<std::string>(array, 3, print_coucou);
    iter<char>(str, 5, print_coucou);
    return 0;
}