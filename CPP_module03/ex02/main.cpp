#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    
    ScavTrap    Henry("Henry");
    ScavTrap    Anna("Anna");
    ClapTrap    Clap("clappi");
    ScavTrap    Bernd(Anna);

std::cout << std::endl;

    Henry.attack("Anna");
    Henry.attack("Xy");

    Anna.takeDamage(50);
    Anna.takeDamage(50);
    // Anna._hit_points - 5 - 5 -> anna is dead;

    Anna.attack("Henry");
    Anna.beRepaired(50);
    Anna.attack("Henry");
    Bernd.guardGate();

std::cout << std::endl;

    Clap.attack("Anna");
    Anna.takeDamage(10);
    Anna.attack("Clap");

std::cout << std::endl;

    return 0;
}