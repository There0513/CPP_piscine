#include "AMateria.hpp"

AMateria::AMateria( void ): _type("no_type") {
}

AMateria::AMateria( std::string const & type): _type(type) {
}

AMateria::AMateria( AMateria const & copy ) {
    std::cout << "Copy constructor AMateria" << std::endl;
    *this = copy;
}

/* subject: "While assigning a Materia to another, copying the type doesn’t make sense." */
AMateria & AMateria::operator=( AMateria const & copy) {
    // std::cout << "Copy assignment operator overload AMateria." << std::endl;
    (void)copy;
    // this->_type = copy._type;
    return *this;
}

AMateria::~AMateria( void ) {
    std::cout << "Destructor AMaterial" << std::endl;
}


std::string const & AMateria::getType( void ) const {
    return this->_type;
}


// virtual AMateria* AMateria::clone( void ) const = 0 {
// }

void    AMateria::use(ICharacter& target) {
    std::cout << "AMaterial::use function called." << std::endl;
}
