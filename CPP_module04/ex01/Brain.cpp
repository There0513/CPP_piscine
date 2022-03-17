#include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "Brain constructor.\033\n[1;33m_________________________\033[0m" << std::endl;// [i] = 0
}

Brain::Brain( Brain const & copy ) {
    std::cout << "Brain copy constructor." << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = copy._ideas[i];
}

Brain & Brain::operator=(Brain const & copy) {
    std::cout << "Brain assignment operator overload." << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = copy._ideas[i];
    return *this;
}

Brain::~Brain( void ) {
    std::cout << "Brain Destructor." << std::endl;
}

std::string *Brain::getIdea( void ) {
    return _ideas;
}