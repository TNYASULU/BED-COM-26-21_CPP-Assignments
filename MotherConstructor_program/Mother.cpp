#include "Mother.h"  //including mother header file
#include <iostream>

using namespace std;

Mother::Mother() //calling a base class constructor without parameters(default constructor)
{
    cout << "Mother: no parameters\n";
}
Mother::Mother(int a)   //calling a base class constructor with parameters
{
    cout << "Mother: int parameter\n";
}