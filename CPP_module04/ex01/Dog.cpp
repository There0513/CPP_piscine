#include "Dog.hpp"

Dog::Dog( void ) {
    std::cout << "Void constructor Dog." << std::endl;
    this->_type = "Dog";    // needed for getType() in main -> otherwise type == "no_type"
    this->_brain = new Brain();
}

Dog::Dog( Dog const & copy ) {
    std::cout << "Copy constructor Dog for " << copy._type << std::endl;
    *this = copy;
}

Dog & Dog::operator=(Dog const & copy) {
    std::cout << "Copy assignment operator overload Dog." << std::endl;
    this->_type = copy._type;
    this->_brain = copy._brain;
    return *this;
}

Dog::~Dog( void ) {
    std::cout << "Destructor Dog with type " << this->_type << std::endl;
    delete this->_brain;
}

void    Dog::makeSound( void ) const {
    std::cout << "Wuff Wuff" << std::endl;
}
