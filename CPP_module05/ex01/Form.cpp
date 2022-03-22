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

bool                Form::getSigned( void ) {
    return this->_signed;
}

int const           Form::getGrade_sign( void ) {
    return this->_grade_sign;
}

int const           Form::getGrade_exec( void ) {
    return this->_grade_exec;
}


const char*     Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high.");
}

const char*     Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low.");
}

std::ostream & operator<<( std::ostream & o, Form const & copy ) {    // o = output stream
    // o << copy.getName() << "..." << copy.getGrade() << ".";
    return o;
}