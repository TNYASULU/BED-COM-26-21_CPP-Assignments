#include "Son.h"  //include a son header file
#include <iostream>

using namespace std;

Son::Son(int a) : Mother(a)  //calling a Son class constructor with paramater  that called a base class constructor
{
    cout << "Son: int parameter\n\n";
}