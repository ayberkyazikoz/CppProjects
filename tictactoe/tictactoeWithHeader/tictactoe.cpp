#include <iostream>
using std::cout;
using std::cin;
#include <iomanip>
using std::setw;
#include "tictactoe.h"
TicTacToe::TicTacToe()
{
    for (int j = 0; j < 3; ++j)
        for (int k = 0; k < 3; ++k)
            board[j][k]; ' ';
}
bool TicTacToe::validMove(int r, int c)
{
    return r >= 0 && r < 3 && c >= 0 && c < 3 && board[r][c] == ' ';
}
TicTacToe::status TicTacToe::gameStatus(void)
{
    int a;
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
        return WIN;
    else if (board[2][0] != ' ' && board[2][0] == board[1][1] && board[2][0] == board[0][2])
        return WIN;
    for (a = 0; a < 3; ++a)
        if (board[0][a] != ' ' && board[0][a] == board[1][a] && board[0][a] == board[2][a])
            return WIN;
    for (int r = 0; r < 3; ++r)
        for (int c = 0; c < 3; ++c)
            if (board[r][c] == ' ')
                return CONTÝNUE;
    return DRAW;
}
void TicTacToe::printBoard(void)
{
    cout << "    0   1   2\n\n";
    for (int r = 0; r < 3; ++r)
    {
        cout << r;
        for (int c = 0; c < 3; ++c)
        {
            cout << setw(3) << static_cast<char>(board[r][c]);
            if (c != 2)
                cout << " !";
        }
        if (r != 2)
            cout << "\n-----|----|----" <<
            "\n     |    |    \n";
    }
    cout << "\n\n";
}
void TicTacToe::makeMove(void)
{
    printBoard();
    while (true)
    {
        if (xoMove('X'))
            break;
        else if (xoMove('O'))
            break;
    }
}
bool TicTacToe::xoMove(int symbol)
{
    int x, y;
    do
    {
        cout << "Player " << static_cast<char>(symbol) << " enter move :";
        cin >> x >> y;
        cout << '\n';
    } while (!validMove(x, y));
    board[x][y] = symbol;
    printBoard();
    status xostatus = gameStatus();
    if (xostatus == WIN)
    {
        cout << "Player " << static_cast<char>(symbol) << " wins! \n";
        return true;
    }
    else if (xostatus == DRAW)
    {
        cout << "Game is a draw. \n";
        return true;
    }
    else
        return false;
}