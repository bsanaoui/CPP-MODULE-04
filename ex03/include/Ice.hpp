#ifndef __ICE__
#define __ICE__
#include <iostream>

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
    // ---------------- Constructors & Destructors ------------- //
    Ice();
    Ice(const Ice &amateria);
    ~Ice();

    // ------------------- Members Public functions ---------------- //
    AMateria* clone() const;
    void use(ICharacter& target);

    // -------------------- Operator Assignement ----------------------//
    Ice &operator = (Ice const &ice);

};

#endif