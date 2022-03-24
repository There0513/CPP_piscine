#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class   AForm;
class   Bureaucrat;

class ShrubberyCreationForm: public AForm
{
    private:
            std::string     _target;
    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( std::string target );
        ShrubberyCreationForm( ShrubberyCreationForm const & copy );
        ShrubberyCreationForm & operator=( ShrubberyCreationForm const & copy );
        virtual ~ShrubberyCreationForm( void );

        void    execute(Bureaucrat const & executor) const;

};

#endif