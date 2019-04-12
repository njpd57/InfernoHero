#include "main.hpp"
#include "Block.hpp"
#ifndef TILESET_HPP
#define TILESET_HPP

class tileset
{
    public:
        tileset(std::string tile,int TWidth,int THeight,int BSize);
        void LoadTileset();

        sf::IntRect returnBlockRect(int blockNum);
        sf::Texture returnTexture();

    private:
        sf::Texture tileTexture;

        sf::IntRect BlockRect[128][128];
        int RowBlocks;
        int ColumnBlocks;
        int TotalBlocks;


        

        
};

#endif