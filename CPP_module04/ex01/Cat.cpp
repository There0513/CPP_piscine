#include "Cat.hpp"

Cat::Cat( void ) {
    std::cout << "Void constructor Cat." << std::endl;
    this->_type = "Cat";
}

Cat::Cat( Cat const &copy ) {
    std::cout << "Copy constructor Cat for " << copy._type << std::endl;
    *this = copy;
}

Cat & Cat::operator=( Cat const &copy ) {
    std::cout << "Copy assignment operator overload Cat." << std::endl;
    this->_type = copy._type;
    return *this;
}

Cat::~Cat( void ) {
    std::cout << "Destructor Cat with type " << this->_type << std::endl;
}

void    Cat::makeSound( void ) const {
    std::cout << "Miauuu" << std::endl;
}