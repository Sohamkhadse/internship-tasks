#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, reversed;
    cout << "Enter a string: ";
    getline(cin, input);

    int length = input.length();
    for (int i = length - 1; i >= 0; i--) {
        reversed = reversed + input[i];
    }

    cout << "Reversed string: " << reversed << endl;
    return 0;
}
