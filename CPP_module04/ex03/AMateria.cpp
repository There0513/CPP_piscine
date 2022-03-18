#include "AMateria.hpp"

AMateria::AMateria( void ): _type("no_type") {
    std::cout << "Constructor AMateria" << std::endl;
}

AMateria::AMateria( std::string const & type): _type(type) {
    std::cout << "Constructor AMateria with args" << std::endl;
}

AMateria::AMateria( AMateria const & copy ) {
    std::cout << "Copy constructor AMateria" << std::endl;
    *this = copy;
}

/* subject: "While assigning a Materia to another, copying the type doesn’t make sense." */
AMateria & AMateria::operator=( AMateria const & copy) {
    (void)copy;
    // std::cout << "Copy assignment operator overload AMateria." << std::endl;
    // this->_type = copy._type;
    return *this;
}

AMateria::~AMateria( void ) {
    std::cout << "Destructor AMaterial" << std::endl;
}


std::string const & AMateria::getType( void ) const {
    return this->_type;
}

void    AMateria::use(ICharacter& target) {
    std::cout << "AMaterial::use function called for " << target.getName() << std::endl;
}
