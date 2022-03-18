#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure( void ): AMateria("cure") {
    std::cout << "Constructor Cure" << std::endl;
}

Cure::Cure( Cure const & copy )/*: AMateria() ?!*/ {
    std::cout << "Copy constructor Cure" << std::endl;
    *this = copy;
}

/* subject: "While assigning a Materia to another, copying the type doesn’t make sense." */
Cure & Cure::operator=( Cure const & copy ) {
    (void)copy;
    // std::cout << "Copy assignment operator overload Cure." << std::endl;
    return *this;
}

Cure::~Cure( void ) {
    std::cout << "Destructor Cure" << std::endl;
}

Cure*   Cure::clone( void ) const {
    return new Cure;
}

void    Cure::use( ICharacter & who ) {
    std::cout << "\033[1;33m* heals " << who.getName() << "'s wounds *\033[0m" << std::endl;
}
