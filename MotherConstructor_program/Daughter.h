#pragma once

#include "Mother.h"  //include mother header file

class Daughter : public Mother{  //calling a default mother class constructor
    public:
        Daughter(int a);   // daughter constructor with an int parameter
};