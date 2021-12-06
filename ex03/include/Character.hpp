#ifndef __CHARACTER__
#define __CHARACTER__
#include <iostream>
#include <cstring>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public virtual ICharacter
{
// Private Members ----- //
private:
        std::string     _name;
        AMateria        *_a_materia[4];
        int             _n_materia;

// Public Members ------ //

public:
     // ---------------- Constructors & Destructors ------------- //
    Character();
    ~Character();
    Character(const Character &character);
    Character(const std::string name);

    // ------------------- Members Public functions ---------------- //
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    
    // --------------------  Get & Set ----------------------------- //
    std::string const & getName() const;

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
    Character		&operator = (Character const &character) ;
 
};

#endif