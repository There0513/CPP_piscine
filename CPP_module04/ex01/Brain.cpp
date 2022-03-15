#include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "Brain constructor." << std::endl;
}

Brain::Brain( std::string ideas[100] ) {

}

Brain::Brain( Brain const & copy ) {
    std::cout << "Brain copy constructor." << std::endl;
    // for -> this ideas[i] = copy.getIdeas()[i] ??!

}

Brain & Brain::operator=(Brain const & copy) {
    std::cout << "Brain assignment operator overload." << std::endl;
    // for -> this ideas[i] = copy.getIdeas()[i] ??!
    return *this;
}

Brain::~Brain( void ) {
    std::cout << "Brain Destructor." << std::endl;
}