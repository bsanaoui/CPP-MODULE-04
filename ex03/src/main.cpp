#include "../include/Character.hpp"
#include "../include/Cure.hpp"
#include "../include/Ice.hpp"
#include "../include/MateriaSource.hpp"

int main()
{
   IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;

    std::cout << "// ------------ Deep Copy ------------ //" << std::endl;
    {
        Character *c1 = new Character("c1");
        Character *c2 = new Character("c2");

        c1->equip(tmp);
        c1->equip(tmp);
      
        // ****** unequip  materia ***** //
        c1->unequip(1);
        c1->use(0, *c2);

        *c2 = *c1;
        c2->use(0, *c1);
        delete c1;
        delete c2;
    }
    delete src;
    return 0;
}