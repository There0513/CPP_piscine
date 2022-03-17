#include "Character.hpp"

Character::Character( void ) {

}

Character::Character( std::string name ) {

}

Character::Character( Character const & copy) {

}

Character & Character::operator=( Character const & copy) {

}

Character::~Character( void ) {

}


    /* from ICharacter Interface: */
void    Character::equip( AMateria* m ) {

}

void    Character::unequip( int idx ) {

}

void    Character::use( int idx, ICharacter& target ) {

}