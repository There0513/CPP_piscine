#include "Cat.hpp"

Cat::Cat( void ) {
    std::cout << "Void constructor Cat." << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat( Cat const &copy ): Animal(copy), _brain(new Brain())  {
    std::cout << "Copy constructor Cat for " << copy._type << std::endl;
    *this = copy;
}

Cat & Cat::operator=( Cat const &copy ) {
    std::cout << "Copy assignment operator overload Cat." << std::endl;
    this->_type = copy._type;
    delete _brain;  // delete brain first, otherwise leaks!
    // this->_brain = copy._brain;  // -> leaks with valgrind
    this->_brain = new Brain();
    *(this->_brain) = *copy._brain;
    return *this;
}

Cat::~Cat( void ) {
    delete this->_brain;
    std::cout << "Destructor Cat with type " << this->_type << std::endl;
}

void    Cat::makeSound( void ) const {
    std::cout << "Miauuu" << std::endl;
}

Brain   *Cat::getBrain( void ) const {
    return this->_brain;
}