#pragma once 
#include "Mother.h" //include mother header file

class Son : public Mother //calling a base class constructor with an int parameter
{
    public:
        Son(int a);
};