#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *z = new WrongAnimal();
    const WrongAnimal *x = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << z->getType() << " " << std::endl;
    std::cout << x->getType() << " " << std::endl;

    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    z->makeSound();
    x->makeSound();

    delete meta;
    delete j;
    delete i;
    delete z;
    delete x;
    return 0;
}