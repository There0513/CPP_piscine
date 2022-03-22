#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class   Bureaucrat;

class   Form
{
    private:
        std::string const   _name;
        bool                _signed;
        int const           _grade_sign;
        int const           _grade_exec;

    public:
        Form( void );
        Form( std::string name, int gradeSign, int gradeExec);
        Form ( Form const & copy );
        Form & operator=( Form const & copy );
        ~Form( void );

        std::string const   getName( void ) const;
        bool                getSigned( void ) const;
        int                 getGrade_sign( void ) const;
        int                 getGrade_exec( void ) const;

        void                setSigned( bool state );

        class   GradeTooHighException: public std::exception {
            public:
                virtual const char*     what() const throw();
        };
        class   GradeTooLowException: public std::exception {
            public:
                virtual const char*     what() const throw();
        };
        void    beSigned(Bureaucrat person);
};
std::ostream & operator<<( std::ostream & o, Form const & copy);

#endif