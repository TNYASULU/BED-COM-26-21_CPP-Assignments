#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main(){
    Rectangle rect;  //creating object rect for rectangle class
    Triangle trgl;   //creating object trgl for triangle class
    rect.SetValues(4, 5);
    trgl.SetValues(4, 5);

    cout << "AREA OF A RECTANGLE : "<< rect.Area() << endl;
    cout << "AREA OF A TRIANGLE : " << trgl.Area() << endl;

    return 0;
}