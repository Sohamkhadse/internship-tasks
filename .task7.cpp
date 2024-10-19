#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    float sum = 0, grade;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    for (int i = 1; i <= numSubjects; i++) {
        cout << "Enter grade for subject " << i << ": ";
        cin >> grade;
        sum += grade;
    }

    float average = sum / numSubjects;
    cout << "Average grade: " << average << endl;

    return 0;
}
