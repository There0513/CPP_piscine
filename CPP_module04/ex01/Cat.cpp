#include "Cat.hpp"

Cat::Cat( void ) {
    std::cout << "Void constructor Cat." << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat( Cat const &copy ) {
    std::cout << "Copy constructor Cat for " << copy._type << std::endl;
    *this = copy;
}

Cat & Cat::operator=( Cat const &copy ) {
    std::cout << "Copy assignment operator overload Cat." << std::endl;
    this->_type = copy._type;
    // this->_brain = copy._brain;  // -> leaks with valgrind
    (this->_brain) = new Brain(*copy._brain);
    return *this;
}

Cat::~Cat( void ) {
    std::cout << "Destructor Cat with type " << this->_type << std::endl;
    delete this->_brain;
}

void    Cat::makeSound( void ) const {
    std::cout << "Miauuu" << std::endl;
}

Brain   *Cat::getBrain( void ) const {
    return this->_brain;
}