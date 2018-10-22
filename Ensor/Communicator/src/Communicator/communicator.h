#pragma once

namespace Ensor
{
    namespace Communicating
    {
        class Communicator
        {
        public:
            Communicator();
            virtual ~Communicator();

            void Initialize();
        };
    }
}
