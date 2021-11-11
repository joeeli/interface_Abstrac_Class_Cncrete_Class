#ifndef IHUMAN_H
#define IHUMAN_H

#include <iostream>
using namespace std;

class IHuman
{
    public:

        virtual void toLive() = 0; 

         
        IHuman();
        virtual ~IHuman();
        void eat();
        
};
#endif // IHUMAN_H