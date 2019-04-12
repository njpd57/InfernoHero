#include "Tilemap.hpp"
#include "Block.hpp"
#include "Tileset.hpp"


Tilemap::Tilemap()
{
    Height=0;
    Width=0;
    BlockNumbers=0;
    BlockNumbers1=0;
    BlockNumbers2=0;
    BlockNumbers3=0;
    BlockNumbers4=0;
    

}

int Tilemap::returnTotalBlocksonLayer(int layer)
{
    switch(layer)
    {
        case 1:
            return BlockNumbers1;
            break;
        case 2:
            return BlockNumbers2;
            break;
        case 3:
            return BlockNumbers3;
            break;
        case 4:
            return BlockNumbers4;
            break;
    }
}

void Tilemap::loadTexture(sf::Texture T_Texture)
{
    tilemapTexture=T_Texture;
}

void Tilemap::loadArray(int layer,int Array[255],int totalBlocks,tileset T_Tileset,int MapWidth,int MapHeight)
{
    int PosX(0);
    int PosY(0);

    switch(layer)
    {
        case 1:
            BlockNumbers1=totalBlocks;
            break;
        case 2:
            BlockNumbers2=totalBlocks;
            break;
        case 3:
            BlockNumbers3=totalBlocks;
            break;
        case 4:
            BlockNumbers4=totalBlocks;
            break;
    }
    for(int i=0;i<totalBlocks;i++)
    {     
        /*DEBUG
        std::cout<<"\n-----------------------"<<std::endl;
        std::cout<<"Block "<<i<<" PosX"<<PosX<<std::endl;
        std::cout<<"Block "<<i<<" PosY"<<PosY<<std::endl;
        std::cout<<"Tile "<<Array[i]<<std::endl;
        std::cout<<"-----------------------"<<std::endl;
        */
        switch(layer)
        {
            case 1:
                TilemapBlocks1[i].BlockSprite.setTexture(tilemapTexture);
                TilemapBlocks1[i].BlockSprite.setTextureRect(T_Tileset.returnBlockRect(Array[i]));
                TilemapBlocks1[i].BlockSprite.setPosition(PosX,PosY);
                
                break;
            case 2:
                TilemapBlocks2[i].BlockSprite.setTexture(tilemapTexture);
                TilemapBlocks2[i].BlockSprite.setTextureRect(T_Tileset.returnBlockRect(Array[i]));
                TilemapBlocks2[i].BlockSprite.setPosition(PosX,PosY);
                break;
            case 3:
                TilemapBlocks3[i].BlockSprite.setTexture(tilemapTexture);
                TilemapBlocks3[i].BlockSprite.setTextureRect(T_Tileset.returnBlockRect(Array[i]));
                TilemapBlocks3[i].BlockSprite.setPosition(PosX,PosY);
                break;
            case 4:
                TilemapBlocks4[i].BlockSprite.setTexture(tilemapTexture);
                TilemapBlocks4[i].BlockSprite.setTextureRect(T_Tileset.returnBlockRect(Array[i]));
                TilemapBlocks4[i].BlockSprite.setPosition(PosX,PosY);
                break;
        }

        PosX+=32;
        if(PosX==MapWidth)
        {
            PosX=0;
            PosY+=32;
        }
        /*
        if(PosX==MapWidth && PosY<=MapHeight)
        {
            PosY+=32;
            PosX=0;
        }else
        {
            PosX+=32;
        }*/
    }
}
void Tilemap::update()
{
}

void Tilemap::Draw(sf::RenderWindow T_Window)
{
    for(int i=0;i<=BlockNumbers;i++)
    {
        T_Window.draw(TilemapBlocks1[i].BlockSprite);
    }
}


void Tilemap::DrawDebugBlock(sf::RenderWindow T_Window)
{
    T_Window.draw(TilemapBlocks1[0].BlockSprite);
}

void Tilemap::loadDebugBlockRect(sf::IntRect D_Rect)
{
    TilemapBlocks1[0].BlockSprite.setTextureRect(D_Rect);
    TilemapBlocks1[0].BlockSprite.setTexture(tilemapTexture);
}
