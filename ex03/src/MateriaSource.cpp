#include "../include/MateriaSource.hpp"

    // ---------------- Constructors & Destructors ------------- //

MateriaSource::MateriaSource() : _nb_materia(0)
{}

MateriaSource::MateriaSource(const AMateria &materia_source)
{
    *this = materia_source; 
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < this->_nb_materia; i++)
        delete this->_a_materia[i];
}

     // ------------------- Members Public functions ---------------- //
void MateriaSource::learnMateria(AMateria* m)
{
    if (this->_nb_materia < 4)
    {
        this->_a_materia[this->_nb_materia] = m;
        this->_nb_materia++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->_nb_materia ; i++)
        if (!type.compare(this->_a_materia[i]->getType()))
            return (this->_a_materia[i]->clone());
    return (0);
}

    // -------------------- Operator Assignement ----------------------//
MateriaSource &MateriaSource::operator = (MateriaSource const &materia_source)
{
    this->_nb_materia = materia_source._nb_materia;
    for (int i = 0; i < this->_nb_materia ; i++)
        this->_a_materia[i] = materia_source._a_materia[i]->clone();
    return (*this);
}
