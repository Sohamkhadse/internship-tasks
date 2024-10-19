#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, reversed;
    
    cout << "Enter a word: ";
    cin >> input;

    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }

    if (input == reversed) {
        cout << "It's a palindrome!" << endl;
    } else {
        cout << "Not a palindrome." << endl;
    }

    return 0;
}
