#include "../include/Character.hpp"

    // ---------------- Constructors & Destructors ------------- //
Character::Character() : _name("Unknown"), _n_materia(0)
{}

Character::~Character()
{
    for (int i = 0; i < this->_n_materia; i++)
    {
        if (this->_a_materia[i])
        {
            delete this->_a_materia[i];
            this->_a_materia[i] = NULL;
        }
    }
}

Character::Character(const Character &character)
{
    *this = character;
}

Character::Character(const std::string name) : _name(name), _n_materia(0)
{}
    // ------------------- Members Public functions ---------------- //
void Character::equip(AMateria* m)
{
    if (this->_n_materia < 4)
    {
        this->_a_materia[_n_materia] = m->clone();
        _n_materia++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= this->_n_materia || idx < 0)
        return ;
    std::memmove(this->_a_materia + idx, this->_a_materia + idx + 1, this->_n_materia - idx - 1);
    this->_n_materia--;
}

void Character::use(int idx, ICharacter& target)
{
     if (idx >= this->_n_materia || idx < 0)
        return ;
    this->_a_materia[idx]->use(target);
}

    // --------------------  Get & Set ----------------------------- //
std::string const & Character::getName() const
{
    return (this->_name);
}

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
Character		&Character::operator = (Character const &character) 
{
    this->_n_materia = character._n_materia;
    for (int i = 0; i < _n_materia; i++)
        this->_a_materia[i] = character._a_materia[i]->clone();
    return (*this);
}
