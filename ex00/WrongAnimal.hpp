#ifndef __WRONGANIMAL__
#define __WRONGANIMAL__
#include <iostream>

class WrongAnimal
{
    // Protected Members ----- //
    protected:
    std::string type;


    // Public Members ------ //
    public:

    // ---------------- Constructors & Destructors ------------- //
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &wrong_animal);

    // ----------------- Getters & Setters ------------------------ //
    std::string getType( void ) const ;

    // ------------------- Members Public functions ---------------- //
    void        makeSound( void ) const;

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
    WrongAnimal    &operator = (WrongAnimal const &wrong_animal) ;

};

#endif