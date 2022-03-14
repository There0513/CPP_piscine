#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
    ClapTrap    Clap("clappi");
    ScavTrap    Henry("Henry");
    FragTrap    Anna("Anna");
    DiamondTrap Diamond("Star");

    std::cout << std::endl;

    Diamond.whoAmI();
    Henry.attack("Anna");
    Henry.attack("Xy");

    Anna.takeDamage(50);
    Anna.takeDamage(50);
    Diamond.attack("Henry");
    Diamond.takeDamage(50);
    Henry.attack("Star");
    Diamond.takeDamage(100);
    Anna.attack("Henry");
    Anna.beRepaired(50);
    Anna.attack("Henry");
    Henry.guardGate();
    Anna.highFivesGuys();
    
    std::cout << std::endl;

    Clap.attack("Anna");
    Anna.takeDamage(10);
    Anna.attack("Clap");

    std::cout << std::endl;

    return 0;
}