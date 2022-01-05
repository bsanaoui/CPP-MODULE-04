#include "../include/Cure.hpp"

    // ---------------- Constructors & Destructors ------------- //
Cure::Cure()
{
    this->_type = "cure";
}

Cure::Cure(const Cure &amateria)
{
    (void)amateria;
}

Cure::~Cure()
{}

    // ------------------- Members Public functions ---------------- //
AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}


    // -------------------- Operator Assignement ----------------------//
Cure &Cure::operator = (Cure const &cure)
{
    (void)cure;
    return (*this);
}
