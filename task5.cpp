#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sourceFile, destFile;
    char ch;

    cout << "Enter the source file name: ";
    cin >> sourceFile;

    cout << "Enter the destination file name: ";
    cin >> destFile;

    ifstream source(sourceFile);
    ofstream dest(destFile);

    if (!source.is_open() || !dest.is_open()) {
        cout << "Error opening files!" << endl;
        return 1;
    }

    while (source.get(ch)) {
        dest.put(ch);
    }

    cout << "File copied successfully." << endl;

    source.close();
    dest.close();

    return 0;
}
