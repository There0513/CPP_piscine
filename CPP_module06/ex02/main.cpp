# include "header/A.hpp"
# include "header/B.hpp"
# include "header/C.hpp"
# include <iostream>
#include <limits>

int     get_random_nbr( void )
{
    int  ITERATIONS = 1e7;

    int sum = 0;

    for (int i = 0; i < ITERATIONS; i++)
        sum += rand() % 1000000;

    int randNum = sum / ITERATIONS + rand();
    srand( time(NULL) ); //re-Randomize seed initialization
    return (randNum + rand()) % 3;
}

// It randomly instanciates A, B or C and returns the instance as a Base pointer.
Base * generate(void)
{
    int randNum = get_random_nbr();
    randNum = abs(randNum);
    if (randNum == 0)
        return (new A());
    else if (randNum == 1)
        return (new B());
    return (new C());
}

// It prints the actual type of the object pointed to by p: "A", "B" or "C".
void identify(Base* p)
{
    if (dynamic_cast<A *>(p) != NULL)
    {
        std::cout << "identify(Base* p):\tactual type = A" << std::endl;
        return;
    }
    if (dynamic_cast<B *>(p) != NULL)
    {
        std::cout << "identify(Base* p):\tactual type = B" << std::endl;
        return;
    }
    if (dynamic_cast<C *>(p) != NULL)
    {
        std::cout << "identify(Base* p):\tactual type = C" << std::endl;
        return;
    }
}

// It prints the actual type of the object pointed to by p: "A", "B" or "C".
// Using a pointer inside this function is forbidden.
void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "identify(Base& p):\tactual type = A" << std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "identify(Base& p):\tactual type = B" << std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "identify(Base& p):\tactual type = C" << std::endl;
    }
    catch(const std::exception& e){}
}

int main( void )
{
	Base    *base;

    base = generate();
    identify(base);
    identify(*base);

	Base    *base2;

    base2 = generate();
    identify(base2);
    identify(*base2);

    Base    *base3;

    base3 = generate();
    identify(base3);
    identify(*base3);

    delete base;
    delete base2;
    delete base3;
    return 0;
}