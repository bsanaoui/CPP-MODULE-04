#include "../include/Ice.hpp"

    // ---------------- Constructors & Destructors ------------- //
Ice::Ice()
{
    this->_type = "ice";
}

Ice::Ice(const Ice &amateria)
{
    (void)amateria;
}

Ice::~Ice()
{}

    // ------------------- Members Public functions ---------------- //
AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


    // -------------------- Operator Assignement ----------------------//
Ice &Ice::operator = (Ice const &ice)
{
    (void)ice;
    return (*this);
}
