#ifndef __DOG__
#define __DOG__
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
    private:
    Brain *_brain;
    // Public Members ------ //
    public:

    // ---------------- Constructors & Destructors ------------- //
    Dog();
    virtual ~Dog();
    Dog(const Dog &dog);

    // ------------------- Members Public functions ---------------- //
    void    makeSound( void ) const;
    
    // --------------------  Get & Set ----------------------------- //
    Brain *getBrain( void ) const;
    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
    Dog    &operator = (Dog const &dog);

};

#endif