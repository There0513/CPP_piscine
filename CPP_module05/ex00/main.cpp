#include "Bureaucrat.hpp"

void    test1(void)
{
    // Bureaucrat  Paul("Paul", -10);
    Bureaucrat  Paul("Paul", 0);
}

void    test2(void)
{
    Bureaucrat  Laura("Laura", 200);
}

void    test3(void)
{
    Bureaucrat  Laura("Laura", 102);
}
int main( void )
{
    try
    {
        test1();
        test2();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        test2();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        test3();
        std::cout << "all good." << std::endl;
        Bureaucrat  Laura("Laura", 102);
        std::cout << Laura << std::endl;
        Laura.incrGrade();
        std::cout << Laura << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat  Ben("Ben", 2);
        std::cout << Ben << std::endl;
        Ben.incrGrade();
        std::cout << Ben << std::endl;
        Ben.incrGrade();            // stops here and goes to catch
        std::cout << Ben << std::endl;
        Ben.incrGrade();
        std::cout << Ben << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat  Franz("Franz", 148);
        std::cout << Franz << std::endl;
        Franz.decrGrade();
        std::cout << Franz << std::endl;
        Franz.decrGrade();
        std::cout << Franz << std::endl;
        Franz.decrGrade();              // stops here and goes to catch
        std::cout << Franz << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    Bureaucrat  Bob("Bob", 4);
    std::cout << Bob << std::endl;
    return 0;
}