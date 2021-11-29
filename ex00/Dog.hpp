#ifndef __DOG__
#define __DOG__
#include <iostream>
#include "Animal.hpp"


class Dog : public Animal
{
    // Public Members ------ //
    public:

    // ---------------- Constructors & Destructors ------------- //
    Dog();
    ~Dog();
    Dog(const Dog &dog);

    // ------------------- Members Public functions ---------------- //
    void    makeSound( void ) const;

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
    Dog    &operator = (Dog const &dog);

};

#endif