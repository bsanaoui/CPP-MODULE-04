#include "Dog.hpp"

    // ---------------- Constructors & Destructors ------------- //
Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Call " << this->type << std::endl;
}

Dog::~Dog()
{
    std::cout << this->type << " Dead" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    *this = dog;
}

    // ------------------- Members Public functions ---------------- //
void    Dog::makeSound( void ) const
{
    std::cout << "The Dog says: Woof !"<< std::endl;
}

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
Dog    &Dog::operator = (Dog const &dog)
{
    this->type = dog.type;
    return (*this);
}
