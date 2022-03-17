#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

int main(void)
{
    {
        /* this will not work, as AAnimal is now an abstract class because of the pure virtual method makeSound*/
        
        // const AAnimal *aanimal = new AAnimal();
        // AAnimal test;
    }
     {
        std::cout << "\n\tsubject test - without leaks:" << std::endl;
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();
        std::cout << std::endl;

        j->makeSound();
        i->makeSound();
        std::cout << std::endl;

        delete j;
        delete i;
    }

    // std::cout << "\033\n[1;45m_________NEXT________________\033[0m\n";

    // {
    //     std::cout << "\n\tbrain/copy Cat tests - without leaks:" << std::endl;
    //     Cat cat;

    //     cat.getBrain()->getIdea()[0] = "my first idea";
    //     std::cout << "Cats idea = " << cat.getBrain()->getIdea()[0] << std::endl;
    //     std::cout << std::endl;

    //     Cat *copycat = new Cat(cat);
    //     std::cout << std::endl;

    //     std::cout << "copycats first idea is: " << copycat->getBrain()->getIdea()[0] << std::endl;
    //     delete copycat;
    // }

    // std::cout << "\033\n[1;45m_________NEXT________________\033[0m\n";


    // {
    //     std::cout << "\n\tbrain/copy Dog tests - without leaks:" << std::endl;
    //     Dog dog;

    //     dog.getBrain()->getIdea()[0] = "my first idea";
    //     std::cout << "Dogs idea = " << dog.getBrain()->getIdea()[0] << std::endl;
    //     std::cout << std::endl;

    //     Dog *copydog = new Dog(dog);
    //     std::cout << std::endl;

    //     std::cout << "copydogs first idea is: " << copydog->getBrain()->getIdea()[0] << std::endl;
    //     delete copydog;
    // }

    // std::cout << "\033\n[1;45m_________NEXT________________\033[0m\n";
    
    // {
    //     const AAnimal    *my_Aanimals[10];

    //     std::cout << "\033[1;33mcreate my_Aanimals array:\033[0m" << std::endl;
    //     for (int i = 0; i < 10; i++) {
    //         if (i < 5)
    //             my_Aanimals[i] = new Cat();
    //         else
    //             my_Aanimals[i] = new Dog();
    //     }
    //     std::cout << std::endl;
    //     my_Aanimals[0]->makeSound();
    //     std::cout << std::endl;
    //     std::cout << "\033[1;33mdelete my_Aanimals array:\033[0m" << std::endl;
    //     for (int i = 0; i < 10; i++) {
    //             delete my_Aanimals[i];
    //     }
    // }
    return 0;
}