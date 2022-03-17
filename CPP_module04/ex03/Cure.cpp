#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure( void ): AMateria("cure") {
}

Cure::Cure( Cure const & copy )/*: AMateria() ?!*/ {
    std::cout << "Copy constructor Cure" << std::endl;
    *this = copy;
}

/* subject: "While assigning a Materia to another, copying the type doesn’t make sense." */
Cure & Cure::operator=( Cure const & copy ) {
    // std::cout << "Copy assignment operator overload Cure." << std::endl;
    (void)copy;
    return *this;
}

Cure::~Cure( void ) {
    std::cout << "Destructor Cure" << std::endl;
}

Cure*   Cure::clone( void ) { // const?!
    return new Cure;
}

void    Cure::use( ICharacter & who ) { //display who.name
    std::cout << "* shoots an ice bolt at " << who._name << std::endl;
}// _name?!?!?
