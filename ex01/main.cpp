#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    std::cout << " ------------- Create Animals ------------ " << std::endl;

    Animal *animals[10]; // Number of animals = 10
    for (int i = 0; i < 10; i++)
    {
        if(i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    // -------
    Brain   *brain = animals[0]->getBrain();
    brain->_ideas[0] = "I am the Monster !";
    brain->_ideas[1] = "OHHHH333333 !!";

    std::cout << " ------------- Get Ideas ------------ " << std::endl;
    int nb_animal = 0;
    std::cout << animals[nb_animal]->getType() << " " << nb_animal << ": "
            << animals[nb_animal]->getBrain()->_ideas[0] << std::endl;

    nb_animal = 5;
    std::cout << animals[nb_animal]->getType() << " " << nb_animal << ": "
            << animals[nb_animal]->getBrain()->_ideas[0] << std::endl;

    std::cout << " ------------- Assignement animal to animal ------------ " << std::endl;
    *(animals[5]) = *(animals[0]);
    nb_animal = 0;
    std::cout << animals[nb_animal]->getType() << " " << nb_animal << ": "
            << animals[nb_animal]->getBrain()->_ideas[0] << std::endl;

    nb_animal = 5;
    std::cout << animals[nb_animal]->getType() << " " << nb_animal << ": "
            << animals[nb_animal]->getBrain()->_ideas[0] << std::endl;

    std::cout << " ------------- Delete animals------------ " << std::endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];

        // delete animals[0];

    return (0);
}