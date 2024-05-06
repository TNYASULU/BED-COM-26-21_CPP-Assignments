#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number;
    
    // Using a while loop to prompt the user for an integer between 5 and 10
    while (true) {
        cout << "Enter an integer between 5 and 10: ";
        cin >> number;
        
        // Check if the input is a valid integer
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << " Sorry you entered an Invalid number . Please try another value." << endl;
            continue;
        }
        
        // Check if the number is within the range [5, 10]
        if (number > 5 && number < 10) {
            break; // Exit the loop if the number is within the range
        } else {
            cout << "You entered  "  << (number )<< + " , Please enter an integer value between 5 and 10." << endl;
        }
    }
    
    // Output a message to inform the user that their input has been accepted
    cout << "Input  "<< number << " has been accepted!! " << endl;
    
    return 0;
}
