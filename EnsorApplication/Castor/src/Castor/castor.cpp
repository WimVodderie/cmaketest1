#include "Castor/castor.h"

#include <stdio.h>

namespace EnsorApplication
{
    namespace Castor
    {
        Castor::Castor()
            :m_communicator(new Ensor::Communicating::Communicator())
            ,m_printmanager(new Ensor::PrintManaging::PrintManager())
        {
            printf("Castor::Castor\n");
        }

        Castor::~Castor()
        {
            printf("Castor::~Castor\n");
        }

        void Castor::Initialize()
        {
            m_communicator->Initialize();
            m_printmanager->Initialize();

            printf("Castor::Initialize\n");
        }
    }
}
