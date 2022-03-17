#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): _type("no_type") {
    std::cout << "Void constructor \033[1;31mWrongAnimal\033[0m." << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ): _type(type) {
    std::cout << "Default constructor \033[1;31mWrongAnimal\033[0m." << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & copy ) {
    std::cout << "Copy constructor \033[1;31mWrongAnimal\033[0m for " << copy._type << std::endl;
    *this = copy;
    // this->_type = copy._type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & copy) {
    this->_type = copy._type;
    std::cout << "Copy assignment operator overload \033[1;31mWrongAnimal\033[0m." << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "Destructor \033[1;31mWrongAnimal\033[0m with type " << this->_type << std::endl;
}

std::string     WrongAnimal::getType( void ) const {
    return this->_type;
}

void            WrongAnimal::setType( std::string type ) {
    this->_type = type;
}

void            WrongAnimal::makeSound( void ) const {
    std::cout << "\033[1;31mWrongAnimal\033[0m::makeSound( void ) -> method (virtual member function) \033[1;33mcan't make sound\033[0m" << std::endl;
}