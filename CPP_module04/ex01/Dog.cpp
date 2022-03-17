#include "Dog.hpp"

Dog::Dog( void ) {
    std::cout << "Void constructor Dog." << std::endl;
    this->_type = "Dog";    // needed for getType() in main -> otherwise type == "no_type"
    this->_brain = new Brain();
}

Dog::Dog( Dog const & copy ): Animal(copy), _brain(new Brain()) {
    std::cout << "Copy constructor Dog for " << copy._type << std::endl;
    *this = copy;
}

Dog & Dog::operator=(Dog const & copy) {
    std::cout << "Copy assignment operator overload Dog." << std::endl;
    this->_type = copy._type;
    delete _brain;
    this->_brain = new Brain();
    *(this->_brain) = *copy._brain;
    return *this;
}

Dog::~Dog( void ) {
    delete this->_brain;
    std::cout << "Destructor Dog with type " << this->_type << std::endl;
}

void    Dog::makeSound( void ) const {
    std::cout << "Wuff Wuff" << std::endl;
}

Brain   *Dog::getBrain( void ) const {
    return this->_brain;
}