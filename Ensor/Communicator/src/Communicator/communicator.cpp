#include "Communicator/communicator.h"

#include <stdio.h>

namespace Ensor
{
    namespace Communicating
    {
        Communicator::Communicator()
        {
            printf("Communicator::Communicator\n");
        }

        Communicator::~Communicator()
        {
            printf("Communicator::~Communicator\n");
        }

        void Communicator::Initialize()
        {
            printf("Communicator::Initialize\n");
        }
    }
}
