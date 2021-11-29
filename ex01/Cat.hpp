#ifndef __CAT__
#define __CAT__
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

    // Public Members ------ //
    public:

    // ---------------- Constructors & Destructors ------------- //
    Cat();
    ~Cat();
    Cat(const Cat &cat);

    // ------------------- Members Public functions ---------------- //
    void    makeSound( void ) const;
    Brain   *getBrain( void ) const;

    // --------------------  Get & Set ----------------------------- //
    Brain *getBrain( void );
    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
    Animal    &operator = (Animal const &animal);

};

#endif