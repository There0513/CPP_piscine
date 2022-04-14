#include "easyfind.hpp"

int main( void )
{
    srand(time(NULL));
    
    std::cout << "\t\033[1;33mempty vector:\033[0m" << std::endl;
    std::vector<int> vec;
    try
    {
        std::vector<int>::iterator it = easyfind(vec, 0);
        std::cout << "it = " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "\t\033[1;33mVec 0 - 49:\033[0m" << std::endl;
    for (int i = 0; i < 50; i++)
        vec.push_back(i);
    for (int i = 0; i < 50; i++)
        std::cout << "vec 1 = " << vec[i] << std::endl;
    try
    {
        std::vector<int>::iterator it = easyfind(vec, 42);
        std::cout << "it = " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "\t\033[1;33mVec2 random:\033[0m" << std::endl;
    std::vector<int> vec2;

    for (int i = 0; i < 5; i++)
        vec2.push_back(rand());
    for (int i = 0; i < 5; i++)
        std::cout << "vec2 = " << vec2[i] << std::endl;
    try
    {
        std::vector<int>::iterator it = easyfind(vec2, 52165);
        std::cout << "it = " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}