#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dynamically allocate an integer
    int *pPointer_int = new int;

    // Dynamically allocate a string
    string *pPointer_str = new string;

    // Prompt user to assign a value to the dynamically allocated integer
    cout << "Enter an integer value: ";
    cin >> *pPointer_int;

    // Prompt user to assign a value to the dynamically allocated string
    cout << "Enter a string value: ";
    cin.ignore(); // Ignore any leftover newline characters
    getline(cin, *pPointer_str);

    // Display the values
    cout << "Integer value: " << *pPointer_int << endl;
    cout << "String value: " << *pPointer_str << endl;

    // Free the allocated memory
    delete pPointer_int;
    delete  pPointer_str;

    return 0;
}
