#include "Animal.hpp"

    // ---------------- Constructors & Destructors ------------- //
Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal Constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    *this = animal;
}

    // ----------------- Getters & Setters ------------------------ //
std::string Animal::getType( void ) const
{
    return (this->type);
}

    // ------------------- Members Public functions ---------------- //
void    Animal::makeSound( void ) const
{
    std::cout << "Any Animal sound !"<< std::endl;
}

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
Animal    &Animal::operator = (Animal const &animal)
{
    this->type = animal.type;
    return (*this);
}
