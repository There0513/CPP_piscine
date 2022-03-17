#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
    std::cout << "Constructor MateriaSource" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const & copy ) {

}

MateriaSource & MateriaSource::operator=( MateriaSource const & copy) {

}

MateriaSource::~MateriaSource( void ) {
    std::cout << "Destructor MateriaSource" << std::endl;
}


    /* from IMateriaSource Interface: */
void        MateriaSource::learnMateria( AMateria* ) {

}

AMateria*   MateriaSource::createMateria( std::string const & type ) {

}
