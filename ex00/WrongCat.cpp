#include "WrongCat.hpp"

    // ---------------- Constructors & Destructors ------------- //
WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Call " << this->type << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << this->type << " Dead" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrong_cat)
{
    *this = wrong_cat;
}

    // ------------------- Members Public functions ---------------- //
void    WrongCat::makeSound( void ) const
{
    std::cout << "The WrongCat says: meow !"<< std::endl;
}

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
WrongCat    &WrongCat::operator = (WrongCat const &wrong_cat)
{
    this->type = wrong_cat.type;
    return (*this);
}
