#include "AAnimal.hpp"

AAnimal::AAnimal( void ): _type("no_type") {
    std::cout << "Void constructor AAnimal." << std::endl;
}

AAnimal::AAnimal( std::string type ): _type(type) {
    std::cout << "Default constructor AAnimal." << std::endl;
}

AAnimal::AAnimal( AAnimal const & copy ) {
    std::cout << "Copy constructor AAnimal for " << copy._type << std::endl;
    *this = copy;
    // this->_type = copy._type;
}

AAnimal & AAnimal::operator=(AAnimal const & copy) {
    this->_type = copy._type;
    std::cout << "Copy assignment operator overload AAnimal." << std::endl;
    return *this;
}

AAnimal::~AAnimal( void ) {
    std::cout << "Destructor AAnimal with type " << this->_type << "\n\033[1;33m_________________________\033[0m" << std::endl;
}

std::string     AAnimal::getType( void ) const {
    return this->_type;
}

void            AAnimal::setType( std::string type ) {
    this->_type = type;
}

void            AAnimal::makeSound( void ) const {
    std::cout << "AAnimal::makeSound( void ) -> method (virtual member function) \033[1;33mcan't make sound\033[0m" << std::endl;
}