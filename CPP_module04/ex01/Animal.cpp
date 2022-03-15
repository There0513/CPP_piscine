#include "Animal.hpp"

Animal::Animal( void ): _type("no_type") {
    std::cout << "Void constructor Animal." << std::endl;
}

Animal::Animal( std::string type ): _type(type) {
    std::cout << "Default constructor Animal." << std::endl;
}

Animal::Animal( Animal const & copy ) {
    std::cout << "Copy constructor Animal for " << copy._type << std::endl;
    *this = copy;
    // this->_type = copy._type;
}

Animal & Animal::operator=(Animal const & copy) {
    this->_type = copy._type;
    std::cout << "Copy assignment operator overload Animal." << std::endl;
    return *this;
}

Animal::~Animal( void ) {
    std::cout << "Destructor Animal with type " << this->_type << std::endl;
}

std::string     Animal::getType( void ) const {
    return this->_type;
}

void            Animal::setType( std::string type ) {
    this->_type = type;
}

void            Animal::makeSound( void ) const {
    std::cout << "Animal::makeSound( void ) -> method (virtual member function) \033[1;33mcan't make sound\033[0m" << std::endl;
}