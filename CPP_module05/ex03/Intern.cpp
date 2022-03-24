#include "./header/Intern.hpp"

Intern::Intern( void ) {
}

Intern::Intern( Intern const & copy ) {
    *this = copy;
}

Intern  & Intern::operator=( Intern const & copy ) {
    (void)copy;
    return *this;
}

Intern::~Intern( void ) {
}

AForm   * newShrubbery( std::string target) {
    return (new ShrubberyCreationForm(target));
}

AForm   * newRobotomy( std::string target) {
    return (new RobotomyRequestForm(target));
}

AForm   * newPresidential( std::string target) {
    return (new PresidentialPardonForm(target));
}

AForm    *Intern::makeForm( std::string form, std::string target ) {
    std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    // ptr to functions:
    AForm    *(*(_formPtrs[]))( std::string str ) = {&newShrubbery, &newRobotomy, &newPresidential};

    for (int i = 0; i < 3; i++)
    {
        if (form == forms[i])
        {
            std::cout << form << std::endl;
            return (*(_formPtrs[i]))(target);
        }
    }
    std::cout << form << " does not exist. Please try 'shrubbery creation', 'robotomy request' or 'presidential pardon'" << std::endl;
    return NULL;
}