#include "../include/AMateria.hpp"

 // ---------------- Constructors & Destructors ------------- //
AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

AMateria::AMateria(const AMateria &amateria)
{
    *this = amateria;
}

AMateria::AMateria()
{
    this->_type = "Unknown Materia";
}

AMateria::~AMateria()
{

}


// ------------------- Members Public functions ---------------- //
void AMateria::use(ICharacter& target)
{
    std::cout << "• Use Materia !!!! *\"" << std::endl;
}


// --------------------  Get & Set ----------------------------- //
std::string const & AMateria::getType() const //Returns the materia type
{
    return (this->_type);
} 

// -------------------- Operator Assignement ----------------------//
AMateria &AMateria::operator = (AMateria const &amateria)
{
    this->_type = amateria._type;
    return (*this);
}
