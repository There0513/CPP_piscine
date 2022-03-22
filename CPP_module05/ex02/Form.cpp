#include "Form.hpp"

Form::Form( void ): _name("noName"), _signed(false), _grade_sign(150), _grade_exec(150) {
}

Form::Form( std::string name, int gradeSign, int gradeExec ): _name(name), _signed(false), _grade_sign(gradeSign), _grade_exec(gradeExec) {
     if (gradeSign < 1 || gradeExec < 1)
        throw Form::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw Form::GradeTooLowException();
}

Form::Form( Form const & copy ): _name(copy._name), _signed(copy._signed), _grade_sign(copy._grade_sign), _grade_exec(copy._grade_exec) {
    *this = copy;
}

Form & Form::operator=( Form const & copy ) {
    this->_signed = copy._signed;
    return *this;
}

Form::~Form( void ) {
}


std::string const   Form::getName( void ) const {
    return this->_name;
}

bool                Form::getSigned( void ) const {
    return this->_signed;
}

int                 Form::getGrade_sign( void ) const {
    return this->_grade_sign;
}

int                 Form::getGrade_exec( void ) const {
    return this->_grade_exec;
}


const char*     Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high.");
}

const char*     Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low.");
}

void            Form::beSigned( Bureaucrat person ) {
    if (this->_signed == true)
    {
        std::cout << "The document is already signed." << std::endl;
        return ;
    }
    if (person.getGrade() <= this->_grade_sign && person.getGrade() > 0)
    {
        // setSigned(true);
        this->_signed = true;
        std::cout << "The document is signed." << std::endl;
    }
    else
        throw Form::GradeTooLowException();
}

std::ostream & operator<<( std::ostream & o, Form const & copy ) {    // o = output stream
    o << copy.getName() << "'s Form signed status = " << copy.getSigned() << ".\n" << "and can be executed with a min grade of " << copy.getGrade_exec() << " and signed with a max grade of " << copy.getGrade_sign();

    // std::cout << "" << std::endl;
    // std::cout << "" << std::endl;
    return o;
}