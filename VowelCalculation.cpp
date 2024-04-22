#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int countVowels(const string& text) {
    int count = 0;
    for (char ch : text) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int countWords(const string& text) {
    int count = 0;
    bool inWord = false;
    for (char ch : text) {
        if (isalpha(ch) && !inWord) {
            count++;
            inWord = true;
        } else if (!isalpha(ch)) {
            inWord = false;
        }
    }
    return count;
}

string reverseString(const string& text) {
    string reversed;
    for (int i = text.size() - 1; i >= 0; i--) {
        reversed += text[i];
    }
    return reversed;
}

   string capitalizeSecondLetter(const string& text) {
    string result = "";
    bool capitalize = false;
    for (char ch : text) {
        if (isalpha(ch)) {
            if (!capitalize) {
                result += ch;
                capitalize = true;
            } else {
                result += toupper(ch);
                capitalize = false;
            }
        } else {
            result += ch;
            capitalize = false;
        }
    }
    return result;
}


int main() {
    ifstream file("my file.txt");
    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string fileData;
    getline(file, fileData);

    // Step iii
    int numVowels = countVowels(fileData);
    cout << "Number of vowels: " << numVowels << endl;

    // Step iv
    int numWords = countWords(fileData);
    cout << "Number of words: " << numWords << endl;

    // Step v
    string reversedText = reverseString(fileData);
    cout << "Reversed statement: " << reversedText << endl;

    // Step vi
   string capitalizedText = capitalizeSecondLetter(fileData);
    cout << "Capitalized second letter of each word: " << capitalizedText << endl;

    file.close();

    return 0;
}
