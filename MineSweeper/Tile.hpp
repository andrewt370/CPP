#ifndef TILE_HPP
#define TILE_HPP
#include <iostream>
class Tile
{
    public:
    int nearby_mines;
    bool mine;
    bool visible;
    Tile();
    Tile(int nearby_mines);
    Tile(bool mine, int nearby_mines);
    Tile(const Tile& t2);
    ~Tile();
    bool hasMines() const;
    int mineCount() const;
    bool isVisible() const;
    void printTile() const;
    
};

#endif