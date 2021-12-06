#include "Cat.hpp"

    // ---------------- Constructors & Destructors ------------- //
Cat::Cat()
{
    this->type = "Cat";
     this->_brain = new Brain();
    std::cout << "Cat Constructor !!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor !!"<< std::endl;
    delete this->_brain;
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


    // --------------------  Get & Set ----------------------------- //
Brain   *Cat::getBrain( void ) const
{
    return (this->_brain);
}

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
Animal    &Cat::operator = (Animal const &animal)
{
    *(this->_brain) = *(animal.getBrain());
    this->type = animal.getType();
    return (*this);
}
