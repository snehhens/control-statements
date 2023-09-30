#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RockPaperScissorsGame {
private:
    char userChoice;
    char computerChoice;

public:
   

    void getUserChoice() {
        cout << "Enter your choice (r, p, or s): ";
        cin >> userChoice;
    }

    void generateComputerChoice() {
        int randomChoice = rand() % 3;

        switch (randomChoice) {
            case 0:
                computerChoice = 'r';
                break;
            case 1:
                computerChoice = 'p';
                break;
            case 2:
                computerChoice = 's';
                break;
        }
    }

    char determineWinner() {
        if (userChoice == computerChoice) {
            return 't';  // Tie
        } else if 
        ((userChoice == 'r' && computerChoice == 's') ||
         (userChoice == 'p' && computerChoice == 'r') ||
         (userChoice == 's' && computerChoice == 'p')) {
            return 'u';  // User wins
        } else {
            return 'c';  // Computer wins
        }
    }

    void displayResults() {
        cout << "You chose: " << userChoice << endl;
        cout << "The computer chose: " << computerChoice << endl;

        char winner = determineWinner();

        if (winner == 'u') {
            cout << "You won!" << endl;
        } else if (winner == 'c') {
            cout << "The computer won!" << endl;
        } else if (winner == 't') {
            cout << "Tie!" << endl;
        }
    }
};

int main() {
    RockPaperScissorsGame game;

    cout << "Welcome to Rock-Paper-Scissors Game!" << endl;

    game.getUserChoice();
    game.generateComputerChoice();
    game.displayResults();

    return 0;
}
