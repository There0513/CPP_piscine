#include "./header/Intern.hpp"

Intern::Intern( void ) {
    this->_formPtrs[0] = new ShrubberyCreationForm();
    this->_formPtrs[1] = new RobotomyRequestForm();
    this->_formPtrs[2] = new PresidentialPardonForm();
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

AForm    *Intern::makeForm( std::string form, std::string target ) {

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