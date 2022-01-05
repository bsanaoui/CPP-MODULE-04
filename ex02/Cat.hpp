#ifndef __CAT__
#define __CAT__
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
    Brain *_brain;
    // Public Members ------ //
    public:

    // ---------------- Constructors & Destructors ------------- //
    Cat();
    virtual ~Cat();
    Cat(const Cat &cat);

    // ------------------- Members Public functions ---------------- //
    void    makeSound( void ) const;

    // --------------------  Get & Set ----------------------------- //
    Brain *getBrain( void ) const;
    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
    Cat    &operator = (Cat const &cat);
};

#endif