#include "Cat.hpp"

    // ---------------- Constructors & Destructors ------------- //
Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Call " << this->type << std::endl;
}

Cat::~Cat()
{
    std::cout << this->type << " Dead" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    *this = cat;
}

    // ------------------- Members Public functions ---------------- //
void    Cat::makeSound( void ) const
{
    std::cout << "The Cat says: meow !"<< std::endl;
}

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
Cat    &Cat::operator = (Cat const &cat)
{
    this->type = cat.type;
    return (*this);
}
