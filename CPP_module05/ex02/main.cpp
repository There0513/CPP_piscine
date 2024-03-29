// #include "header/Bureaucrat.hpp"
# include "./header/ShrubberyCreationForm.hpp"
# include "./header/RobotomyRequestForm.hpp"
# include "./header/PresidentialPardonForm.hpp"
#include "header/AForm.hpp"

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


    // AForm    form("myDoc", 50, 1);           //  -> not possible anymore, as AForm is an abstract class now
    // AForm    Contrat("Contrat", 150, 2);
    // try
    // {
    //     form.beSigned(Bob);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     form.beSigned(Ann);
    //     Ann.signForm(Contrat);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    std::cout << "" << std::endl;

    {
        Bureaucrat  Max("Max", 100);

        try
        {
            AForm   *shrubbery = new ShrubberyCreationForm("shrubbery");
            Bureaucrat  person1("Hans", 1);

            person1.executeForm(*shrubbery);

            person1.signForm(*shrubbery);
            person1.executeForm(*shrubbery);
            std::cout << *shrubbery << std::endl;
            Max.signForm(*shrubbery);

            std::cout << "" << std::endl;
            delete shrubbery;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << "" << std::endl;
    {
        try
        {
            Bureaucrat  Emil("Emil", 250);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << "" << std::endl;
    {
        AForm   *robo = new RobotomyRequestForm("robo");
        try
        {
            Bureaucrat  Emil("Emil", 150);

            Bureaucrat  person1("Hans", 1);
            std::cout << Emil << std::endl;

            Emil.executeForm(*robo);
            Emil.signForm(*robo);
            person1.signForm(*robo);
            person1.executeForm(*robo);
            std::cout << *robo << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        delete robo;
        std::cout << "" << std::endl;
    }
    std::cout << "" << std::endl;
    {
        AForm   *president = new PresidentialPardonForm("president");
        try
        {
            Bureaucrat  Emil("Emil", 150);

            Bureaucrat  Anton("Anton", 1);
            std::cout << Emil << std::endl;

            Emil.executeForm(*president);
            Emil.signForm(*president);
            Anton.signForm(*president);
            Anton.executeForm(*president);
            std::cout << *president << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        delete president;
        std::cout << "" << std::endl;
    }
    return 0;
}