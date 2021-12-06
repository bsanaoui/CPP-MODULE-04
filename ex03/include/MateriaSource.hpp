#ifndef __MATERIASOURCE__
#define __MATERIASOURCE__

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#include <string>

class MateriaSource : public virtual IMateriaSource
{

private:
    AMateria *_a_materia[4];
    int     _nb_materia;

public:
    // ---------------- Constructors & Destructors ------------- //
    MateriaSource(const AMateria &materia_source);
    MateriaSource();
    ~MateriaSource();

     // ------------------- Members Public functions ---------------- //
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);

    // -------------------- Operator Assignement ----------------------//
    MateriaSource &operator = (MateriaSource const &materia_source);
};

#endif