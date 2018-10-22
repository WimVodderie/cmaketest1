#pragma once

namespace Ensor
{
    namespace Communicating
    {
        class Communicator
        {
            Communicator();
            virtual ~Communicator();

            void Initialize();
        };
    }
}
