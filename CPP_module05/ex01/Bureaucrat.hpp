#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class   Form;

class   Bureaucrat
{
    private:
        std::string const   _name;
        int                 _grade; // highest 1 - lowest 150

    public:
        Bureaucrat( void );
        Bureaucrat( std::string name , int grade);
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
        void    signForm(Form & form);
};
std::ostream & operator<<( std::ostream & o, Bureaucrat const & copy );

#endif