#include "./header/AForm.hpp"

AForm::AForm( void ): _name("noName"), _signed(false), _grade_sign(150), _grade_exec(150) {
}

AForm::AForm( std::string name, int gradeSign, int gradeExec ): _name(name), _signed(false), _grade_sign(gradeSign), _grade_exec(gradeExec) {
     if (gradeSign < 1 || gradeExec < 1)
        throw AForm::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm( AForm const & copy ): _name(copy._name), _signed(copy._signed), _grade_sign(copy._grade_sign), _grade_exec(copy._grade_exec) {
    *this = copy;
}

AForm & AForm::operator=( AForm const & copy ) {
    this->_signed = copy._signed;
    return *this;
}

AForm::~AForm( void ) {
}


std::string const   AForm::getName( void ) const {
    return this->_name;
}

bool                AForm::getSigned( void ) const {
    return this->_signed;
}

int                 AForm::getGrade_sign( void ) const {
    return this->_grade_sign;
}

int                 AForm::getGrade_exec( void ) const {
    return this->_grade_exec;
}


const char*     AForm::GradeTooHighException::what() const throw() {
    return ("Grade is too high.");
}

const char*     AForm::GradeTooLowException::what() const throw() {
    return ("Grade is too low.");
}

const char*     AForm::FormNotSignedExeption::what() const throw() {
    return ("Form is not signed. It can't be executed without signature.");
}

void            AForm::beSigned( const Bureaucrat & person ) {
    if (this->_signed == true)
    {
        std::cout << "The document is already signed." << std::endl;
        return ;
    }
    if (person.getGrade() <= this->_grade_sign && person.getGrade() > 0)
    {
        this->_signed = true;
    }
    else
        throw AForm::GradeTooLowException();
}

std::ostream & operator<<( std::ostream & o, AForm const & copy ) {    // o = output stream
    o << "\t" << copy.getName() << "'s Form signed status = " << copy.getSigned() << "\n\t" << "and can be executed with a min grade of " << copy.getGrade_exec() << " and signed with a max grade of " << copy.getGrade_sign();
    return o;
}