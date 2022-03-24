#include "Bureaucrat.hpp"
#include "Form.hpp"

void    test1(void)
{
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
    Bureaucrat  Ann("Ann", 100);
    std::cout << Bob << std::endl;


    Form    form("myDoc", 50, 1);
    Form    Contrat("Contrat", 150, 2);

    std::cout << Contrat << std::endl;
    
    try
    {
        form.beSigned(Bob);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        form.beSigned(Ann);
        Ann.signForm(Contrat);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}