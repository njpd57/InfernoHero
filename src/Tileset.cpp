#include "main.hpp"
#include "Tileset.hpp"

namespace debug
{
    extern void alert(std::string alert_msg,int Number=0);
}

tileset::tileset(std::string tile,int TWidth,int THeight,int BSize)
{
    tileTexture.loadFromFile(tile);
    RowBlocks = TWidth/BSize;
    
    ColumnBlocks= THeight/BSize;
    TotalBlocks=RowBlocks*ColumnBlocks;

    /*Debug
    std::cout<<"(Debug) ->"<<" RowBlocks on "<<tile<<" = "<<RowBlocks<<std::endl;
    std::cout<<"(Debug) ->"<<" ColumnBlocks on "<<tile<<" = "<<ColumnBlocks<<std::endl;
    std::cout<<"(Debug) ->"<<" TotalBlocks on "<<tile<<" = "<<TotalBlocks<<std::endl;
    */

    
    for(int i=0;i<ColumnBlocks;i++)
    {
        for(int j=0;j<RowBlocks;j++)
        {
            BlockRect[i][j].left=j*BSize;
            BlockRect[i][j].top=i*BSize;
            BlockRect[i][j].width=32;
            BlockRect[i][j].height=32;
        }
    }
}

sf::Texture tileset::returnTexture()
{
    return tileTexture;
}

sf::IntRect tileset::returnBlockRect(int blockNum)
{
    int TempBlockNum=0;
    for(int i=0;i<ColumnBlocks;i++)
    {
        for(int j=0;j<RowBlocks;j++)
        {
            if(blockNum == TempBlockNum)
            {
                return BlockRect[i][j];
            }else
            {
                TempBlockNum++;    
            };
        }
    };
    return sf::IntRect(0,0,32,32);
}

void tileset::LoadTileset()
{

}