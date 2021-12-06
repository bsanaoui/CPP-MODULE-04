#ifndef __CURE__
#define __CURE__
#include <iostream>

#include "AMateria.hpp"

class Cure : public AMateria
{

public:
    // ---------------- Constructors & Destructors ------------- //
    Cure();
    Cure(const Cure &amateria);
    ~Cure();

    // ------------------- Members Public functions ---------------- //
    AMateria* clone() const;
    void use(ICharacter& target);

    // -------------------- Operator Assignement ----------------------//
    Cure &operator = (Cure const &cure);

};

#endif