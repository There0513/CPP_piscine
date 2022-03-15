#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
    std::cout << "Void constructor \033[31mWrongCat\033[0m." << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat( WrongCat const &copy ) {
    std::cout << "Copy constructor \033[31mWrongCat\033[0m for " << copy._type << std::endl;
    *this = copy;
}

WrongCat & WrongCat::operator=( WrongCat const &copy ) {
    std::cout << "Copy assignment operator overload \033[31mWrongCat\033[0m." << std::endl;
    this->_type = copy._type;
    return *this;
}

WrongCat::~WrongCat( void ) {
    std::cout << "Destructor Cat with type " << this->_type << std::endl;
}

void    WrongCat::makeSound( void ) const {
    std::cout << "Miauuu" << std::endl;
}