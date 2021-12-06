#ifndef __AMATERIA__
#define __AMATERIA__
#include <iostream>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{

protected:
    std::string _type;

public:
    // ---------------- Constructors & Destructors ------------- //
    AMateria(std::string const & type);
    AMateria(const AMateria &amateria);
    AMateria();
    virtual ~AMateria();

    // ------------------- Members Public functions ---------------- //
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

    // --------------------  Get & Set ----------------------------- //
    std::string const & getType() const; //Returns the materia type

    // -------------------- Operator Assignement ----------------------//
    AMateria &operator = (AMateria const &amateria);

};

#endif