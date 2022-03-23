#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"
// # include "ShrubberyCreationForm.hpp"

class   AForm;

class   Bureaucrat
{
    private:
        std::string const   _name;
        int                 _grade; // highest 1 - lowest 150

    public:
        Bureaucrat( void );
        Bureaucrat( std::string const name , int grade);
        Bureaucrat( Bureaucrat const & copy );
        Bureaucrat & operator=( Bureaucrat const & copy );
        ~Bureaucrat( void );

        std::string getName( void ) const;
        int         getGrade( void ) const;
        void        incrGrade( void );
        void        decrGrade( void );

        class   GradeTooHighException: public std::exception {
            public:
                virtual const char*     what() const throw();
        };
        class   GradeTooLowException: public std::exception {
            public:
                virtual const char*     what() const throw();
        };
        void    signForm(AForm & form) const;
        void    executeForm( AForm const & form );
};
std::ostream & operator<<( std::ostream & o, Bureaucrat const & copy );

#endif