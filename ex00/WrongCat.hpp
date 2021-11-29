#ifndef __WRONGCAT__
#define __WRONGCAT__
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    // Public Members ------ //
    public:

    // ---------------- Constructors & Destructors ------------- //
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &wrong_cat);

    // ------------------- Members Public functions ---------------- //
    void    makeSound( void ) const;

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
    WrongCat    &operator = (WrongCat const &wrong_cat);

};

#endif