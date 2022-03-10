#include "Karen.hpp"

Karen::Karen( void ) {
}

Karen::~Karen() {
}

void    Karen::complain( std::string level ) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    // ptr to functions:
    void    (Karen::*functions[])( void ) = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
    
    // get level + call function[i] from ptr:
    for (int i = 0; i < 4; i++)
        if (level == levels[i])
            (this->*functions[i])();
}

void    Karen::_debug( void ) {
    std::cout << "\tI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Karen::_info( void ) {
    std::cout << "\tI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Karen::_warning( void ) {
    std::cout << "\tI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Karen::_error( void ) {
    std::cout << "\tThis is unacceptable! I want to speak to the manager now." << std::endl;

}
