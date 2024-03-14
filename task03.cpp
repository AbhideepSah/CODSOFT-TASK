#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_board(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " | ";
        }
        cout << endl << "---------" << endl;
    }
}

bool check_win(const vector<vector<char>>& board, char player) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}

bool check_draw(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ')
                return false;
        }
    }
    return true;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char current_player = 'X';
    bool game_over = false;

    while (!game_over) {
        cout << "Current Board:" << endl;
        print_board(board);
        int row, col;
        cout << "Player " << current_player << ", enter your move (row col): ";
        cin >> row >> col;

        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[row][col] = current_player;

        if (check_win(board, current_player)) {
            cout << "Player " << current_player << " wins!" << endl;
            game_over = true;
        }

        else if (check_draw(board)) {
            cout << "It's a draw!" << endl;
            game_over = true;
        }

        current_player = (current_player == 'X') ? 'O' : 'X';
    }

    return 0;
}
