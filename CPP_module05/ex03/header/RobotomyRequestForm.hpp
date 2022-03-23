#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
#include <stdlib.h>     /* srand, rand */

class RobotomyRequestForm: public AForm
{
    private:
            std::string     _target;
    public:
        RobotomyRequestForm( void );
        RobotomyRequestForm( std::string target );
        RobotomyRequestForm( RobotomyRequestForm const & copy );
        RobotomyRequestForm & operator=( RobotomyRequestForm const & copy );
        /*virtual?!*/ ~RobotomyRequestForm( void );

		// std::string getTarget() const;
        void    execute(Bureaucrat const & executor) const;

};
#endif