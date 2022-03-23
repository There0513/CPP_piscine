#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <iostream>

class ShrubberyCreationForm: public AForm
{
    private:
            std::string     _target;
    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( std::string target );
        ShrubberyCreationForm( ShrubberyCreationForm const & copy );
        ShrubberyCreationForm & operator=( ShrubberyCreationForm const & copy );
        ~ShrubberyCreationForm( void );

		// std::string getTarget() const;
        void    execute(Bureaucrat const & executor) const;

};

#endif