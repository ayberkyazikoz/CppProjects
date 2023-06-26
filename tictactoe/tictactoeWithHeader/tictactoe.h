#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <string>
class TicTacToe
{
private:
    enum status { WIN, DRAW, CONTÝNUE };
    int board[3][3];
public:
    TicTacToe();
    void makeMove(void);
    void printBoard(void);
    bool validMove(int, int);
    bool xoMove(int);
    status gameStatus(void);
};
#endif