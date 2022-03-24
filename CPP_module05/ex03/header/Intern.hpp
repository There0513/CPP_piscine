#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class   Intern
{
    private:
        std::string     _formPtrs[3];

    public:
        Intern( void );
        Intern( Intern const & copy );
        Intern & operator=( Intern const & copy );
        ~Intern( void );

        AForm    * makeForm( std::string form, std::string target );
};

#endif