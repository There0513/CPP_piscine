#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm("ShrubberyCreationForm", 145, 137),
_target("Standard") {
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): /* AForm(... like line 3?!)*/_target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & copy ) {
    *this = copy;
    // *this->_target = copy._target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & copy ) {
    this->_target = copy._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
}

		// std::string getTarget() const;
void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    try
    {
        if (this->getSigned() != true)
            throw FormNotSignedExeption();
        if (executor.getGrade() > this->getGrade_exec())
            throw GradeTooLowException();
    // if executed      -> create a file + plant a tree:
        std::ofstream out_file((this->_target + "_shrubbery").c_str());
        if (!out_file)
        {
            std::cout << "Error with file-creation." << std::endl;
            return ;
        }
        out_file << "\_  \   /  \  /" <<  std::endl;
        out_file << "  \  \ /   / /" << std::endl;
        out_file << "   \--\   /\/" << std::endl;
        out_file << "       \ / /" << std::endl;
        out_file << "        | |" << std::endl;
        out_file << "        | |" << std::endl;
        out_file << "        | |" << std::endl;
        out_file << "        | |" << std::endl;
        out_file << "        | |" << std::endl;
        out_file << "        | |" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}