#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): AForm("PresidentialPardonForm", 25, 5),
_target("Standard") {
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ): /* AForm(... like line 3?!)*/_target(target) {
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & copy ) {
    *this = copy;
    // *this->_target = copy._target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & copy ) {
    this->_target = copy._target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
}

		// std::string getTarget() const;
void    PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    try
    {
        if (this->getSigned() != true)
            throw FormNotSignedExeption();
        if (executor.getGrade() > this->getGrade_exec())
            throw GradeTooLowException();
        // Informs that <target> has been pardoned by Zaphod Beeblebrox.
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}