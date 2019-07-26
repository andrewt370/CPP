#include <iostream>
#include "Tile.hpp"
using namespace std;

Tile::Tile() : nearby_mines(0), mine(false), visible(false) {};
Tile::Tile(int nearby_mines) : nearby_mines(nearby_mines), mine(false), visible (false) {};
Tile::Tile(bool mine, int nearby_mines) : nearby_mines(nearby_mines), mine(mine), visible(false) {};
Tile::Tile(const Tile& t2)
{
    mine = t2.hasMines();
    nearby_mines = t2.mineCount();
    visible = false;
}
Tile::~Tile() {}
bool Tile::hasMines() const{
    return this->mine;
}
int Tile::mineCount() const{
    return this->nearby_mines;
}
bool Tile::isVisible() const{
    return visible;
}
void Tile::printTile() const
{
    if (this->hasMines() && isVisible())
    {
        cout << " M ";
    }
    else if (isVisible())
    {
        cout << " " << this->mineCount() << " ";
    }
    else
    {
        cout << " # ";
    }
    
}