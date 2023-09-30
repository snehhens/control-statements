#include <iostream>

using namespace std;

int main() {

   int userScore = 0;

// Play a round of the game.

  char playAgain = 'y';
while (playAgain == 'y') {
  // Play a round of the game.

  // Define the three possible choices.
  const char ROCK = 'r';
  const char PAPER = 'p';
  const char SCISSORS = 's';

  // Get the user's choice.
  char userChoice;
  cout << "Enter your choice (r, p, or s): ";
  cin >> userChoice;

  // Generate a random choice for the computer.
  char computerChoice = rand() % 3 + 1;
  if (computerChoice == 1) {
    computerChoice = ROCK;
  } else if (computerChoice == 2) {
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
  } else if (winner == 'c') {
    cout << "The computer won!" << endl;
  } else if (winner == 't') {
    cout << "Tie!" << endl;
  }

// If the user won the round, increment their score.
if (winner == 'u') {
  userScore++;
}
  


  // play again.
  cout << "Play again? (y/n): ";
  cin >> playAgain;
}




// Display the user's score at the end of the game.
cout << "Your final score is: " << userScore << endl;



  return 0;
}
