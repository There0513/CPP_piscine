#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <fstream> // std::ofstream for filePresidentialPardonForm
# include "Bureaucrat.hpp"
// # include "ShrubberyCreationForm.hpp"
// # include "RobotomyRequestForm.hpp"
// # include "PresidentialPardonForm.hpp"

class   Bureaucrat;

class   AForm
{
    private:
        std::string const   _name;
        bool                _signed;
        int const           _grade_sign;
        int const           _grade_exec;

    public:
        AForm( void );
        AForm( std::string name, int gradeSign, int gradeExec);
        AForm ( AForm const & copy );
        AForm & operator=( AForm const & copy );
        virtual ~AForm( void );

        std::string const   getName( void ) const;
        bool                getSigned( void ) const;
        int                 getGrade_sign( void ) const;
        int                 getGrade_exec( void ) const;

        // void                setSigned( bool state );

        class           GradeTooHighException: public std::exception {
            public:
                virtual const char*     what() const throw();
        };
        class           GradeTooLowException: public std::exception {
            public:
                virtual const char*     what() const throw();
        };
        class           FormNotSignedExeption: public std::exception {
            public:
                virtual const char*     what() const throw();
        };
        void            beSigned(const Bureaucrat & person);
        virtual void    execute(Bureaucrat const & executor) const = 0; // for new forms -> abstract class
};
std::ostream & operator<<( std::ostream & o, AForm const & copy);

#endif