#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main(void)
{
    {
        Cat cat;

        cat.getBrain()->getIdea()[0] = "my first idea";
        std::cout << cat.getBrain()->getIdea()[0] << std::endl;
        std::cout << std::endl;

        Cat *copycat = new Cat(cat);


        std::cout << "copycats first idea is: " << copycat->getBrain()->getIdea()[0] << std::endl;
    delete copycat;
    }
    {
        Dog dog;

        dog.getBrain()->getIdea()[0] = "my first idea";
        std::cout << dog.getBrain()->getIdea()[0] << std::endl;
        std::cout << std::endl;

        Dog *copydog = new Dog(dog);


        std::cout << "copycats first idea is: " << copydog->getBrain()->getIdea()[0] << std::endl;
    delete copydog;
    }
    std::cout << "\033\n[1;40m_________________________\033[0m\n";
    //{ //             "\033[1;40mbold                 text\033[0m\n"
        // example deep copy:
        // Cat Cat1;
        // Cat Cat2 = Cat1;

    //}
  /*  {
        const Animal    *my_animals[10];

        std::cout << "\033[1;33mcreate my_animals array:\033[0m" << std::endl;
        for (int i = 0; i < 10; i++) {
            if (i < 5)
                my_animals[i] = new Cat();
            else
                my_animals[i] = new Dog();
        }

    std::cout << std::endl;
        // std::cout << my_dogs->getType() << " " << std::endl;
        // my_dogs->makeSound();

    std::cout << std::endl;

        std::cout << "\033[1;33mdelete my_animals array:\033[0m" << std::endl;
        for (int i = 0; i < 10; i++) {
                delete my_animals[i];
        }
    }
 */   return 0;
}