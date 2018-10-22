#pragma once

#include "Communicator/communicator.h"
#include "PrintManager/printmanager.h"

namespace EnsorApplication
{
    namespace Castor
    {
        class Castor
        {
        public:
            Castor();
            virtual ~Castor();

            void Initialize();

        private:
            Ensor::Communicating::Communicator* m_communicator;
            Ensor::PrintManaging::PrintManager* m_printmanager;
        };
    }
}
