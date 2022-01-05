#include "Dog.hpp"

    // ---------------- Constructors & Destructors ------------- //
Dog::Dog()
{
    std::cout << "Dog Constructor !!" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
    
}

Dog::~Dog()
{
    std::cout << "Dog Destructor !!" << std::endl;
    delete this->_brain;
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Dog Copy Constructor !!"<< std::endl;
    this->_brain = new Brain();
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
Dog    &Dog::operator = (Dog const &dog)
{
    std::cout << "Dog Assignement !!"<< std::endl;
    *(this->_brain) = *(dog.getBrain());
    return (*this);
}
