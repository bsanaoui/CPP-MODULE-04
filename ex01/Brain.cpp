#include "Brain.hpp"

    // ---------------- Constructors & Destructors ------------- //
Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = "Idea " + std::to_string(i + 1);
    std::cout << "Constructor of Brain!" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor of Brain!" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    *this = brain;
}

    // ----------------- Getters & Setters ------------------------ //

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
Brain    &Brain::operator = (Brain const &brain)
{
    for (int i = 0; i < 100; i++)
         this->_ideas[i] = brain._ideas[i];
    return (*this);
}
