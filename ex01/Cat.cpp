#include "Cat.hpp"

    // ---------------- Constructors & Destructors ------------- //
Cat::Cat()
{
    std::cout << "Cat Constructor !!" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
    
}

Cat::~Cat()
{
    std::cout << "Cat Destructor !!"<< std::endl;
    delete this->_brain;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Cat Copy Constructor !!"<< std::endl;
    this->_brain = new Brain();
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
Cat    &Cat::operator = (Cat const &cat)
{
    std::cout << "Cat Assignement !!"<< std::endl;
    *(this->_brain) = *(cat.getBrain());
    return (*this);
}