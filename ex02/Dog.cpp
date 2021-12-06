#include "Dog.hpp"

    // ---------------- Constructors & Destructors ------------- //
Dog::Dog()
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog Constructor !!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor !!" << std::endl;
    delete this->_brain;
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

    // --------------------  Get & Set ----------------------------- //
Brain   *Dog::getBrain( void ) const
{
    return (this->_brain);
}

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
Animal    &Dog::operator = (Animal const &animal)
{
    *(this->_brain) = *(animal.getBrain());
    this->type = animal.getType();
    return (*this);
}
