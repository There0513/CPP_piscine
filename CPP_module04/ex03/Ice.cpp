#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice( void ): AMateria("ice") {
    std::cout << "Constructor Ice" << std::endl;
}

Ice::Ice( Ice const & copy )/*: AMateria() ?!*/ {
    std::cout << "Copy constructor Ice" << std::endl;
    *this = copy;
}

/* subject: "While assigning a Materia to another, copying the type doesn’t make sense." */
Ice & Ice::operator=( Ice const & copy ) {
    (void)copy;
    // std::cout << "Copy assignment operator overload Ice." << std::endl;
    return *this;
}

Ice::~Ice( void ) {
    std::cout << "Destructor Ice" << std::endl;
}

Ice*   Ice::clone( void ) const {
    return new Ice;
}

void    Ice::use( ICharacter & who ) {
    std::cout << "\033[1;33m* shoots an ice bolt at " << who.getName() << " *\033[0m" << std::endl;
}
