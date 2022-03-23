#include "./header/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("RobotomyRequestForm", 72, 45),
_target("Standard") {
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): AForm("RobotomyRequestForm", 72, 45),
_target(target) {
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
        /* Makes some drilling noises. */
        std::cout << "!@#$%^&*()(*!@#$%^&*()(*&^%$&^%$" << std::endl;
        /* Then, informs that <target> has been robotomized successfully 50%
        of the time. Otherwise, informs that the robotomy failed. */
        int random;

        srand(time(NULL));
        random = rand() % 10 + 1;
        std::cout << "random = " << random << std::endl;    // !!!!!!!!!!!!!!!!!!!!! modif.
        std::cout << this->_target << " has been robotomized successfully." << std::endl;
        std::cout << this->_target << "'s robotomy failed. You should try again." << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}