#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal *meta = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    const WrongAnimal *wrongAa = new WrongAnimal();
    const WrongAnimal *wrongAc = new WrongCat();
    const WrongCat *wrongc = new WrongCat();

std::cout << std::endl;

    std::cout << meta->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << wrongAa->getType() << " " << std::endl;
    std::cout << wrongAc->getType() << " " << std::endl;
    std::cout << wrongc->getType() << " " << std::endl;

std::cout << std::endl;

    meta->makeSound();
    dog->makeSound();
    cat->makeSound(); // will output the cat sound!
    wrongAa->makeSound();
    wrongAc->makeSound();
    wrongc->makeSound();

std::cout << std::endl;

    delete meta;
    delete dog;
    delete cat;
    delete wrongAa;
    delete wrongAc;
    delete wrongc;
    return 0;
}