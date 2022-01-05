#ifndef __ANIMAL__
#define __ANIMAL__
#include <iostream>

class Animal
{

    // Protected Members ----- //
    protected:
    std::string type;


    // Public Members ------ //
    public:

    // ---------------- Constructors & Destructors --------------- //
    Animal();
    virtual ~Animal();
    Animal(const Animal &animal);

    // ----------------- Getters & Setters ----------------------- //
    std::string 	getType( void ) const ;

    // ------------------- Members Public functions --------------- //
    virtual void        makeSound( void ) const = 0;
    // ------------------  Operator Overload ---------------------- //
             //  ********* Assignement ********* //
    virtual Animal		&operator = (Animal const &animal) ;

};

#endif