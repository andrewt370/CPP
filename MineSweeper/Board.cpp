#include <iostream>
#include <vector>
#include <algorithm>
#include "Board.hpp"

using namespace std;

Board::Board()
{
    rows = 10, cols = 10;
    populateGrid();
    addMines(rows * cols / 10);
}
Board::Board(int r, int c)
{
    rows = r, cols = c;
    populateGrid();
    addMines(rows * cols / 10);
}
Board::Board(int r, int c, int num_mines)
{
    rows = r, cols = c;
    populateGrid();
    addMines(num_mines);
}
Board::Board(const Board& b2)
{
    rows = b2.rows, cols = b2.cols;
    populateGrid();
    copyGrid(b2);
}
Board::~Board()
{
    for (int i = 0; i < rows; i++)
    {
        delete[] grid[i];
    }
    delete[] grid;
}
void Board::populateGrid()
{
    grid = new Tile * [rows];
    for (int i = 0; i < rows; i++)
    {
        grid[i] = new Tile[cols];
        for (int j = 0; j < cols; j++)
        {
            grid[i][j] = Tile();
        }
    }
}
void Board::copyGrid(const Board& b2)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            grid[i][j] = Tile(b2.grid[i][j]);
        }
    }
}
void Board::printBoard()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            grid[i][j].printTile();
        }
        cout << endl;
    }
}
void Board::addMines(int num_mines)
{
    //Given the number of rows and cols, generate num_mines unique locations.
    vector< pair <int,int> > vect;
    pair<int, int> temp;
    int x, y;
    cout << " Adding " << num_mines << " mines" << endl;
    while (vect.size() < num_mines)
    {
        x = rand() % this->rows;
        y = rand() % this->cols;
        temp = make_pair(x, y);
        // cout << temp.first << temp.second << (find(vect.begin(), vect.end(), temp) != vect.end()) << endl;
        if (find(vect.begin(), vect.end(), temp) == vect.end())
        {
            vect.push_back(temp);
        }
    }
    // x = 5, y = 5;
    // vect.push_back(make_pair(x, y));
    // vect.push_back(make_pair(x, y));
    // temp = make_pair(x, y);
    // cout << (find(vect.begin(), vect.end(), temp) != vect.end());
    for(auto gridPos : vect)
    {
        this->grid[gridPos.first][gridPos.second].mine = true;
        this->mineCount++;
    }
    cout << "added mines";
}
void Board::setAllVisible()
{
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->cols; j++)
        {
            this->grid[i][j].visible = true;
        }
    }
}