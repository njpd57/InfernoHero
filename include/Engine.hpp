//Game engine and master file

#include "main.hpp"
#include "Tilemap.hpp"

#ifndef ENGINE_HPP
#define ENGINE_HPP

//GAMEMODES
#define DEBUGMODE   0
#define INGAME      1



class Engine
{
    public:
        Engine();

        void Initialize();
        void Input();
        void Update();
        void Render();
        void MainLoop();


        //GameModes
        void setGameMode(int NewGameMode);

        //GamemodeFunctions
        void DebugModeInput();
        void DebugModeUpdate();
        void DebugModeLoader();
        void DebugModeRender();

        //DEBUG
        void loadDebugBlock();

    private:

        //Basic
        sf::RenderWindow window;

        //Gamemodes;
        int GameMode;
        bool GameModeChanged;

        //View
        sf::View View1;
        sf::FloatRect ViewRect;

        float ViewZoomSpeed;
        float ViewX;
        float ViewY;
        float ViewSpeed;

        //Map
        Tilemap Map1;
        
};

#endif