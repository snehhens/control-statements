#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Three possible choices.
    char ROCK = 'r';
    char PAPER = 'p';
    char SCISSORS = 's';

    char playAgain = 'y';
    int userScore = 0;

    // Seed the random number generator.
    srand(static_cast<unsigned int>(time(0)));

    do {
        // Game mode selection.
        int gameMode;
        cout << "Choose a game mode (1 for one player, 2 for two players): ";
        cin >> gameMode;

        switch (gameMode) {
            case 1:
                //1 player
                break;
            case 2:
                //2 player
                cout << "Two-player mode is not implemented in this version." << endl;
                break;
            default:
                cout << "Invalid game mode." << endl;
                return 0;
        }

        // User's choice.
        char userChoice;
        cout << "Enter your choice (r, p, or s): ";
        cin >> userChoice;

        // Random choice for the computer.
        char computerChoice = rand() % 3;
        if (computerChoice == 0) {
            computerChoice = ROCK;
        } else if (computerChoice == 1) {
            computerChoice = PAPER;
        } else {
            computerChoice = SCISSORS;
        }

        // Determine the winner.
        char winner = 'n';
        if (userChoice == computerChoice) {
            winner = 't';
        } else if (userChoice == ROCK && computerChoice == SCISSORS) {
            winner = 'u';
        } else if (userChoice == PAPER && computerChoice == ROCK) {
            winner = 'u';
        } else if (userChoice == SCISSORS && computerChoice == PAPER) {
            winner = 'u';
        } else {
            winner = 'c';
        }

        // Display the results.
        cout << "You chose: " << userChoice << endl;
        cout << "The computer chose: " << computerChoice << endl;

        if (winner == 'u') {
            cout << "You won!" << endl;
            userScore++; // 
        } else if (winner == 'c') {
            cout << "The computer won!" << endl;
        } else if (winner == 't') {
            cout << "Tie!" << endl;
        }

        // Ask the user if they want to play again.
        cout << "Play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y');

    // Display the user's final score.
    cout << "Your final score is: " << userScore << endl;

    return 0;
}
