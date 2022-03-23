#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("RobotomyRequestForm", 72, 45),
_target("Standard") {
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): /* AForm(... like line 3?!)*/_target(target) {
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & copy ) {
    *this = copy;
    // *this->_target = copy._target;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & copy ) {
    this->_target = copy._target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
}

		// std::string getTarget() const;
void    RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    try
    {
        if (this->getSigned() != true)
            throw FormNotSignedExeption();
        if (executor.getGrade() > this->getGrade_exec())
            throw GradeTooLowException();
        /* Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed. */
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}