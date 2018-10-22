#include "Castor/castor.h"


int main()
{
    EnsorApplication::Castor::Castor *castor=new EnsorApplication::Castor::Castor();

    castor->Initialize();


    delete(castor);
}