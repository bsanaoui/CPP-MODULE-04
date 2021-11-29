#include "WrongAnimal.hpp"

    // ---------------- Constructors & Destructors ------------- //
WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "Call " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << this->type << " Dead" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong_animal)
{
    *this = wrong_animal;
}

    // ----------------- Getters & Setters ------------------------ //
std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}

    // ------------------- Members Public functions ---------------- //
void    WrongAnimal::makeSound( void ) const
{
    std::cout << "Any WrongAnimal sound !"<< std::endl;
}

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
WrongAnimal    &WrongAnimal::operator = (WrongAnimal const &wrong_animal)
{
    this->type = wrong_animal.type;
    return (*this);
}
