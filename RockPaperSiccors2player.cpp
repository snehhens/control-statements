#include <iostream>


using namespace std;

int main() {
    // Three possible choices.
    char ROCK = 'r';
    char PAPER = 'p';
    char SCISSORS = 's';

    char playAgain = 'y';

    do {
        // Player 1 choice.
        char player1Choice;
        cout << "Player 1, enter your choice (r, p, or s): ";
        cin >> player1Choice;

        // Player 2 choice.
        char player2Choice;
        cout << "Player 2, enter your choice (r, p, or s): ";
        cin >> player2Choice;

        // Determine the winner.
        char winner = 'n';
        if (player1Choice == player2Choice) {
            winner = 't';  // Tie
        } else if ((player1Choice == ROCK && player2Choice == SCISSORS) ||
                   (player1Choice == PAPER && player2Choice == ROCK) ||
                   (player1Choice == SCISSORS && player2Choice == PAPER)) {
            winner = '1';  // Player 1 wins
        } else {
            winner = '2';  // Player 2 wins
        }

        // Display the results.
        cout << "Player 1 chose: " << player1Choice << endl;
        cout << "Player 2 chose: " << player2Choice << endl;

        if (winner == '1') {
            cout << "Player 1 wins!" << endl;
        } else if (winner == '2') {
            cout << "Player 2 wins!" << endl;
        } else {
            cout << "It's a tie!" << endl;
        }

        // Ask if they want to play again.
        cout << "Play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y');

    return 0;
}
