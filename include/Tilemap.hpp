#include "main.hpp"
#include "Block.hpp"
#include "Tileset.hpp"
#ifndef TILEMAP_HPP
#define TILEMAP_HPP

class Tilemap
{
    public:
        Tilemap();

        void loadTexture(sf::Texture T_Texture);

        void loadArray(int layer,int Array[255],int totalBlocks,tileset T_Tileset,int MapWidth,int MapHeight);      
        void Draw(sf::RenderWindow T_Window);
        void DrawDebugBlock(sf::RenderWindow T_Window);
        int returnTotalBlocksonLayer(int layer);

        void update();


        //DEBUG
        void loadDebugBlockRect(sf::IntRect D_Rect);
        Block TilemapBlocks1[512];
        Block TilemapBlocks2[512];
        Block TilemapBlocks3[512];
        Block TilemapBlocks4[512];
    private:

        sf::Texture tilemapTexture;
        int Height;
        int Width;
        int BlockNumbers;
        int BlockNumbers1;
        int BlockNumbers2;
        int BlockNumbers3;
        int BlockNumbers4;

        
        

    protected:
};

#endif
