#ifndef BOARD_HPP
#define BOARD_HPP
#include <iostream>
#include "Tile.hpp"
using namespace std;

class Board
{
    public:
    int rows, cols, mineCount;
    Tile ** grid;
    Board();
    Board(int r, int c);
    Board(int r, int c, int num_mines);
    Board(const Board& b2);
    ~Board();
    void populateGrid();
    void copyGrid(const Board& b2);
    void printBoard();
    void addMines(int num_mines);
    void setAllVisible();
};
#endif  