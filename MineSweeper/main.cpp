#include <iostream>
#include "Tile.hpp"
#include "Board.hpp"

Board makeBoard(){
    int rows, cols, mines;
    rows = 10, cols = 10, mines = 10;
    // cout << "How many rows for the board? ";
    // cin >> rows;
    // cout << "How many cols? ";
    // cin >> cols;
    // cout << "How many mines? ";
    // cin >> mines;
    return Board(rows, cols, mines);
}

int main()
{
    Tile t;
    Board x = makeBoard();
    x.setAllVisible();
    x.printBoard();
    
    return 0;
}
