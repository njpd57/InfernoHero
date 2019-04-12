#include "Engine.hpp"

void Engine::setGameMode(int NewGameMode)
{
    GameMode=NewGameMode;
    GameModeChanged=true;
}

//INGAMEMODE

//DEBUGMODE
void Engine::DebugModeInput()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        ViewX=-ViewSpeed;
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        ViewX= ViewSpeed;
    } else {
        ViewX=0;
    };

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        ViewY= -ViewSpeed;
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        ViewY= ViewSpeed;
    } else {
        ViewY=0;
    };

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
    {
        ViewSpeed=0.1;
    } else {
        ViewSpeed=0.05;
    }
}


