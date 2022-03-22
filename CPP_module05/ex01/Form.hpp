#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

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
        bool                getSigned( void );
        int const           getGrade_sign( void );
        int const           getGrade_exec( void );

        class   GradeTooHighException: public std::exception {
            public:
                virtual const char*     what() const throw();
        };
        class   GradeTooLowException: public std::exception {
            public:
                virtual const char*     what() const throw();
        };
};
std::ostream & operator<<( std::ostream & o, Form const & copy);

#endif