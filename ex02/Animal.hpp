#ifndef __ANIMAL__
#define __ANIMAL__
#include <iostream>
#include "Brain.hpp"

class Animal
{

    // Protected Members ----- //
    protected:
    std::string type;
    Brain *_brain;


    // Public Members ------ //
    public:

    // ---------------- Constructors & Destructors --------------- //
    Animal();
     virtual ~Animal();

    // virtual ~Animal() = 0; // pure virtual public
    Animal(const Animal &animal);

    // ----------------- Getters & Setters ----------------------- //
    std::string 	getType( void ) const ;
	virtual Brain   *getBrain( void ) const = 0;

    // ------------------- Members Public functions --------------- //
    virtual void        makeSound( void ) const;
    // ------------------  Operator Overload ---------------------- //
             //  ********* Assignement ********* //
    virtual Animal		&operator = (Animal const &animal) ;

};

#endif