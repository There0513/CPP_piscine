#include "Character.hpp"

Character::Character( void ): _name("no_name"), _inventory() {
    std::cout << "Constructor Character" << std::endl;
}

Character::Character( std::string name ): _name(name), _inventory() {
    std::cout << "Constructor Character" << std::endl;
}

Character::Character( Character const & copy) {
    this->_name = copy._name;
    // like brain: delete?! + copy
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = copy._inventory[i]->clone();
}

Character & Character::operator=( Character const & copy) {
    this->_name = copy._name;
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = copy._inventory[i]->clone();
    return *this;
}

Character::~Character( void ) {
    std::cout << "Destructor Character" << std::endl;
    for (int i = 0; i < 4; i++)
        if (_inventory[i])
            delete this->_inventory[i];
}


std::string const & Character::getName( void ) {
    return this->_name;
}

    /* from ICharacter Interface: */
void    Character::equip( AMateria* m ) {
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i]) {
            this->_inventory[i] = m;
            break ;
        }
    }
    // if i == 4 -> full
}

void    Character::unequip( int idx ) {
    if (idx >= 0 && idx < 4)
        this->_inventory[idx] = 0;
}

void    Character::use( int idx, ICharacter& target ) {
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}