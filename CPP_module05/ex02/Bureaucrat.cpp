#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("noName"), _grade(150) {
}

Bureaucrat::Bureaucrat( std::string const name, int grade ): _name(name), _grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( Bureaucrat const & copy) {
    *this = copy;
}

Bureaucrat  & Bureaucrat::operator=( Bureaucrat const & copy ) {
    // this->_name = copy._name;            // -> const - not possible
    this->_grade = copy._grade;
    return *this;
}

Bureaucrat::~Bureaucrat( void ) {    
}

std::string     Bureaucrat::getName( void ) const {
    return this->_name;
}

int     Bureaucrat::getGrade( void ) const {
    return this->_grade;
}

void    Bureaucrat::incrGrade( void ) {
    this->_grade--;
     if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void    Bureaucrat::decrGrade( void ) {    
    this->_grade++;
     if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char*     Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high.");
}

const char*     Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low.");
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & copy ) {    // o = output stream
    o << copy.getName() << ", bureaucrat grade " << copy.getGrade() << ".";
    return o;
}

void            Bureaucrat::signForm(Form & form) {
    if (form.getSigned() == true)
        std::cout << "Form already signed." << std::endl;
    else if (this->_grade <= form.getGrade_sign())
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    else if (this->_grade > form.getGrade_sign())
        std::cout << this->_name << " couldn't sign " << form.getName() << " because its grade is too low. He should ask his supervisior." << std::endl;
}