#include "Block.hpp"

Block::Block()
{
    size=0;
    collide=false;
    Width=0;
    Height=0;
    x=0;
    y=0;    
}

void Block::setCollide(bool C_bool)
{
    collide=C_bool;
}
void Block::setSize(int b_size)
{
    size=b_size;
}

