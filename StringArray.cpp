#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize the array with size
    string elements[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C232", "B179"};

    // Iterate through the array
    for (int i = 0; i < 8; ++i) { // Using 8 as the size directly
        // Check if the element starts with 'B'
        if (elements[i][0] == 'B') {
            // Output the element starting with 'B'
            cout << elements[i] << endl;
        }
    }

    return 0;
}