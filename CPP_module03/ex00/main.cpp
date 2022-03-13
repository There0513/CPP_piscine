#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap    Henry("Henry");
    ClapTrap    Anna("Anna");
    ClapTrap    Bernd(Anna);

std::cout << std::endl;

    Henry.attack("Anna");
    Henry.attack("Xy");

    Anna.takeDamage(5);
    Anna.takeDamage(5);
    // Anna._hit_points - 5 - 5 -> anna is dead;

    Anna.attack("Henry");
    Anna.beRepaired(2);
    Anna.attack("Henry");

std::cout << std::endl;

    return 0;
}