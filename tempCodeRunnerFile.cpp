#include <iostream>
#include <vector>

enum class Player { X, O, Empty };

class TicTacToe {
public:
    TicTacToe() : currentPlayer(Player::X), board(3, std::vector<Player>(3, Player::Empty)) {}

    void playGame() {
        while (!isGameOver()) {
            displayBoard();
            makeMove();
            switchPlayer();
        }

        displayResult();
    }

private:
    Player currentPlayer;
    std::vector<std::vector<Player>> board;

    void displayBoard() const {
        std::cout << "  0 1 2" << std::endl;
        for (int row = 0; row < 3; ++row) {
            std::cout << row << " ";
            for (int col = 0; col < 3; ++col) {
                switch (board[row][col]) {
                    case Player::X:
                        std::cout << "X ";
                        break;
                    case Player::O:
                        std::cout << "O ";
                        break;
                    case Player::Empty:
                        std::cout << ". ";
                        break;
                }
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    void makeMove() {
        int row, col;
        std::cout << "Player " << static_cast<char>(currentPlayer) << ", enter your move (row and column): ";
        std::cin >> row >> col;

        if (isValidMove(row, col)) {
            board[row][col] = currentPlayer;
        } else {
            std::cout << "Invalid move. Try again." << std::endl;
            makeMove();
        }
    }

    bool isValidMove(int row, int col) const {
        return row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == Player::Empty;
    }

    bool isGameOver() const {
        return checkWin() || checkTie();
    }

    bool checkWin() const {
        // Check rows and columns
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) {
                return true; // Check row
            }
            if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) {
                return true; // Check column
            }
        }

        // Check diagonals
        if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) {
            return true; // Check main diagonal
        }
        if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) {
            return true; // Check anti-diagonal
        }

        return false;
    }

    bool checkTie() const {
        for (const auto& row : board) {
            for (const auto& cell : row) {
                if (cell == Player::Empty) {
                    return false; // The board is not full
                }
            }
        }
        return true; // The board is full, and no player has won
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == Player::X) ? Player::O : Player::X;
    }

    void displayResult() const {
        displayBoard();
        if (checkWin()) {
            std::cout << "Player " << static_cast<char>(currentPlayer) << " wins!" << std::endl;
        } else {
            std::cout << "It's a tie!" << std::endl;
        }
    }
};

int main() {
    TicTacToe game;
    game.playGame();

    return 0;
}
