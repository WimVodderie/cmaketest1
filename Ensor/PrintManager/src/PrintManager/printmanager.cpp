#include "printmanager.h"

#include <stdio.h>

namespace Ensor
{
    namespace PrintManaging
    {
        PrintManager::PrintManager()
        {
            printf("PrintManager::PrintManager\n");
        }

        PrintManager::~PrintManager()
        {
            printf("PrintManager::~PrintManager\n");
        }

        void PrintManager::Initialize()
        {
            printf("PrintManager::Initialize\n");
        }
    }
}
