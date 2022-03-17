#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main(void)
{
     {
        std::cout << "\n\tsubject test - without leaks:" << std::endl;
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << std::endl;

        j->makeSound();
        i->makeSound();
        std::cout << std::endl;

        delete j;
        delete i;
    }

    std::cout << "\033\n[1;45m_________NEXT________________\033[0m\n";

    {
        std::cout << "\n\tbrain/copy Cat tests - without leaks:" << std::endl;
        Cat cat;

        cat.getBrain()->getIdea()[0] = "my first idea";
        std::cout << "Cats idea = " << cat.getBrain()->getIdea()[0] << std::endl;
        std::cout << std::endl;

        Cat *copycat = new Cat(cat);
        std::cout << std::endl;

        std::cout << "copycats first idea is: " << copycat->getBrain()->getIdea()[0] << std::endl;
        delete copycat;
    }

    std::cout << "\033\n[1;45m_________NEXT________________\033[0m\n";


    {
        std::cout << "\n\tbrain/copy Dog tests - without leaks:" << std::endl;
        Dog dog;

        dog.getBrain()->getIdea()[0] = "my first idea";
        std::cout << "Dogs idea = " << dog.getBrain()->getIdea()[0] << std::endl;
        std::cout << std::endl;

        Dog *copydog = new Dog(dog);
        std::cout << std::endl;

        std::cout << "copydogs first idea is: " << copydog->getBrain()->getIdea()[0] << std::endl;
        delete copydog;
    }

    std::cout << "\033\n[1;45m_________NEXT________________\033[0m\n";
    
    {
        const Animal    *my_animals[10];

        std::cout << "\033[1;33mcreate my_animals array:\033[0m" << std::endl;
        for (int i = 0; i < 10; i++) {
            if (i < 5)
                my_animals[i] = new Cat();
            else
                my_animals[i] = new Dog();
        }
        std::cout << std::endl;
        my_animals[0]->makeSound();
        std::cout << std::endl;
        std::cout << "\033[1;33mdelete my_animals array:\033[0m" << std::endl;
        for (int i = 0; i < 10; i++) {
                delete my_animals[i];
        }
    }
    return 0;
}