#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ): _inventory() {
    std::cout << "Constructor MateriaSource" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const & copy ): _inventory() {
    for (int i = 0; i < 4; i++)
        if (_inventory[i])
            delete _inventory[i];
    for (int i = 0; i < 4; i++)
        if (copy._inventory[i])
            this->_inventory[i] = copy._inventory[i]->clone();
}

MateriaSource & MateriaSource::operator=( MateriaSource const & copy) {
    for (int i = 0; i < 4; i++)
        delete _inventory[i];
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = copy._inventory[i]->clone();
    return *this;
}

MateriaSource::~MateriaSource( void ) {
    std::cout << "Destructor MateriaSource" << std::endl;
    for (int i = 0; i < 4; i++)
        if (_inventory[i])
            delete this->_inventory[i];
}


    /* from IMateriaSource Interface: */
void        MateriaSource::learnMateria( AMateria* tocopy) {
// Copies the Materia passed as a parameter and store it in memory so it can be cloned
// later. Like the Character, the MateriaSource can know at most 4 Materias. They
// are not necessarily unique.
    for (int i = 0; i < 4; i++) {
        if (!_inventory[i])
        {
            _inventory[i] = tocopy;
            std::cout << "MateriaSource learned " << tocopy->getType() << std::endl;
            return ;
        }
    }
    std::cout << "No more space in inventory." << std::endl;
}

AMateria*   MateriaSource::createMateria( std::string const & type ) {
// Returns a new Materia. The latter is a copy of the Materia previously learned by
// the MateriaSource whose type equals the one passed as parameter. Returns 0 if
// the type is unknown.
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i]->getType() == type)
            return this->_inventory[i]->clone();
    }
    return 0;
}