#include "./header/Intern.hpp"

Intern::Intern( void ) {
    // this->_formPtrs[0] = new ShrubberyCreationForm();
    // this->_formPtrs[1] = new RobotomyRequestForm();
    // this->_formPtrs[2] = new PresidentialPardonForm();
}

Intern::Intern( Intern const & copy ) {
    *this = copy;
}

Intern  & Intern::operator=( Intern const & copy ) {
    (void)copy;
    // this->_formPtrs[0] = copy._formPtrs[0];
    return *this;
}

Intern::~Intern( void ) {
    // delete this->_formPtrs[0];
    // delete this->_formPtrs[1];
    // delete this->_formPtrs[2];
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
    // std::cout << "form: " << form << "\ttarget: " << target << std::endl;
    std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    // ptr to functions:
    AForm    *(*(_formPtrs[]))( std::string str ) = {&newShrubbery, &newRobotomy, &newPresidential};

    for (int i = 0; i < 3; i++)
    {
        // std::cout << "\tform: " << form << "\tforms[i]: " << forms[i] << std::endl;
        if (form == forms[i])
        {
            std::cout << form << std::endl;
            return (*(_formPtrs[i]))(target);
        }
    }
    std::cout << form << " does not exist. Please try 'shrubbery creation', 'robotomy request' or 'presidential pardon'" << std::endl;
    return NULL;
}

// void    Karen::complain( std::string level ) {
//     std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

//     // ptr to functions:
//     void    (Karen::*functions[])( void ) = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
    
//     // get level + call function[i] from ptr:
//     for (int i = 0; i < 4; i++)
//         if (level == levels[i])
//             (this->*functions[i])();
// }