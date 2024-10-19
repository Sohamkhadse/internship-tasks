#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string userChoice, computerChoice;
    int computerNum;

    cout << "Enter rock, paper, or scissors: ";
    cin >> userChoice;

    srand(time(0));
    computerNum = rand() % 3;

    if (computerNum == 0) {
        computerChoice = "rock";
    } else if (computerNum == 1) {
        computerChoice = "paper";
    } else {
        computerChoice = "scissors";
    }

    cout << "Computer chose: " << computerChoice << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == "rock" && computerChoice == "scissors") ||
               (userChoice == "paper" && computerChoice == "rock") ||
               (userChoice == "scissors" && computerChoice == "paper")) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }

    return 0;
}
