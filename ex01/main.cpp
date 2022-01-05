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

    std::cout << " ------------- Delete animals ------------ " << std::endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    
    std::cout << " ------------- Create 2 Dogs ------------ " << std::endl;

    Cat cat1, cat2;
    Brain   *brain = cat1.getBrain();
    brain->_ideas[0] = "I am the Monster !";
    brain->_ideas[1] = "OHHHH333333 !!";

    std::cout << " ------------- Get Ideas ------------ " << std::endl;

    std::cout << cat1.getType() << " 0: " << cat1.getBrain()->_ideas[0] << std::endl;
    std::cout << cat2.getType() << " 0: " << cat2.getBrain()->_ideas[0] << std::endl;

    std::cout << " ------------- Assignement animal to animal ------------ " << std::endl;
    cat1 = cat2;

    std::cout << cat1.getType() << " 0: " << cat1.getBrain()->_ideas[0] << std::endl;
    std::cout << cat2.getType() << " 0: " << cat2.getBrain()->_ideas[0] << std::endl;
    std::cout << " ------------- Delete cats --ß---------- " << std::endl;
    return (0);
}