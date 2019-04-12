//Blocks for the tileset and tilemaps

#include "main.hpp"
#ifndef BLOCK_HPP
#define BLOCK_HPP

class Block
{
    public:
        Block();

        void setCollide(bool C_bool);
        void setSize(int b_size);
        void setRect(sf::IntRect B_Rect);
        int size;
        bool collide;
        int Width;
        int Height;
        int x;
        int y;
        int BlockNum;
        sf::Sprite BlockSprite;
    private:
};
#endif