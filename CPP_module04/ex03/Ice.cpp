#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice( void ): AMateria("ice") {
}

Ice::Ice( Ice const & copy )/*: AMateria() ?!*/ {
    std::cout << "Copy constructor Ice" << std::endl;
    *this = copy;
}

/* subject: "While assigning a Materia to another, copying the type doesn’t make sense." */
Ice & Ice::operator=( Ice const & copy ) {
    // std::cout << "Copy assignment operator overload Ice." << std::endl;
    (void)copy;
    return *this;
}

Ice::~Ice( void ) {
    std::cout << "Destructor Ice" << std::endl;
}

Ice*   Ice::clone( void ) { // const?!
    return new Ice;
}

void    Ice::use( ICharacter & who ) { //display who.name
    std::cout << "* heals " << who._name << "'s wounds *" << std::endl;
}// _name?!?!?
