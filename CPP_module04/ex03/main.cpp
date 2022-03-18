#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{
	{
        std::cout << "\n\tsubject test - without leaks:" << std::endl;

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		
		ICharacter* bob = new Character("bob");
		
		me->use(0, *bob);
		me->use(1, *bob);
		
		delete bob;
		delete me;
		delete src;
	}
    std::cout << "\033\n[1;45m_________NEXT________________\033[0m\n";
	{
        ICharacter *Anna = new Character("Anna");
        ICharacter *Peter = new Character("Peter");
		AMateria *ice = new Ice();
        AMateria *cure = new Cure();
		
        Anna->equip(ice);
        Anna->use(0, *Peter);
        Anna->use(1, *Anna); // nothing in it - so nothing to do
        Anna->unequip(2); // nothing in it - so nothing to do
        Peter->use(2, *Anna); // nothing in it - so nothing to do
        Peter->use(0, *Anna);
        Peter->equip(ice->clone());
		Peter->equip(cure);
		Peter->use(1, *Anna);
        Anna->equip(ice->clone());
        Anna->use(0, *Peter);

        delete Anna;
        delete Peter;
	}
    std::cout << "\033\n[1;45m_________END________________\033[0m\n";
	return (0);
}
