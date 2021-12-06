#ifndef __CHARACTER__
#define __CHARACTER__
#include <iostream>

#include "ICharacter.hpp"

class Character : public ICharacter
{
// Public Members ------ //

public:
     // ---------------- Constructors & Destructors ------------- //
    Character();
    ~Character();
    Character(const Character &character);

    // ------------------- Members Public functions ---------------- //
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    
    // --------------------  Get & Set ----------------------------- //
    std::string const & getName() const;

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
    Character		&operator = (Character const &character) ;
 
}

#endif