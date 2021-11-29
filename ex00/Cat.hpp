#ifndef __CAT__
#define __CAT__
#include <iostream>
#include "Animal.hpp"

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

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
    Cat    &operator = (Cat const &cat);

};

#endif