#include "Dog.hpp"

Dog::Dog( void ) {
    std::cout << "Void constructor Dog." << std::endl;
    this->_type = "Dog";    // needed for getType() in main -> otherwise type == "no_type"
}

// Dog::Dog( std::string type ): _type(type) {
//     std::cout << "Default constructor Dog." << std::endl;
// } ?!? error compling


Dog::Dog( Dog const & copy ) {
    std::cout << "Copy constructor Dog for " << copy._type << std::endl;
    *this = copy;
}

Dog & Dog::operator=(Dog const & copy) {
    this->_type = copy._type;
    std::cout << "Copy assignment operator overload Dog." << std::endl;
    return *this;
}

Dog::~Dog( void ) {
    std::cout << "Destructor Dog with type " << this->_type << std::endl;
}

void    Dog::makeSound( void ) const {
    std::cout << "Wuff Wuff" << std::endl;
}
