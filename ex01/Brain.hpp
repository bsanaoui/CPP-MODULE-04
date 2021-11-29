#ifndef __BRAIN__
#define __BRAIN__
#include <iostream>
#include <string>

class Brain
{
    // Public Members ------ //
    public:
    
    std::string _ideas[100];
    
    // ---------------- Constructors & Destructors ------------- //
    Brain();
    ~Brain();
    Brain(const Brain &brain);

    // ----------------- Getters & Setters ------------------------ //

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
    Brain    &operator = (Brain const &brain) ;

};

#endif