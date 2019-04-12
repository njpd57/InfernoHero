#include "Debug.hpp"
#include "main.hpp"
#include "Engine.hpp"
#include "Tileset.hpp"

#include "Database.hpp"




Engine::Engine()
{
    debug::alert("Engine Initialized Succesfully");

    GameMode=DEBUGMODE;

    //View
    ViewX=0.0;
    ViewY=0.0;
    ViewSpeed=0.01;
    ViewRect.top=0.0;
    ViewRect.left=0.0;
    ViewRect.height=200.0;
    ViewRect.width=300.0;
    
    View1.setCenter(ViewX,ViewY);
    View1.setSize(ViewRect.width,ViewRect.height);

}
void Engine::Initialize()
{
    Map1.loadArray(2,debugMapLayer2,1290,dirtTile,1376,960);
    Map1.loadTexture(dirtTile.returnTexture());
    window.create(sf::VideoMode(800,450),"Inferno Hero");  
    
    window.setView(View1);
}
void Engine::Input()
{
    switch(GameMode)
    {
        case DEBUGMODE:
            DebugModeInput();
            break;
        case INGAME:
            break;
        default:
            break;
    }
}
void Engine::Update()
{
    switch(GameMode)
    {
        case DEBUGMODE:
            break;
        case INGAME:
            break;
        default:
            break;
    }
    View1.move(ViewX,ViewY);
}
void Engine::Render()
{
    window.clear(sf::Color(14,12,12,255));

    window.setView(View1);

    for(int i=0;i<=Map1.returnTotalBlocksonLayer(2);i++)
    {
        window.draw(Map1.TilemapBlocks2[i].BlockSprite);
    };
    window.display();
    
}
void Engine::MainLoop()
{
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
            Input();
        }
        Update();
        Render();
    }
}

/*
void Engine::loadDebugBlock()
{
    debugMap.loadTexture(dirtTile.returnTexture());
    debugMap.loadDebugBlockRect(dirtTile.returnBlockRect(50));
    debugMap.update();


    /*DEBUG
    for(int i=0;i<=72;i++)
    {
        std::cout<<"Rect "<<i<<".left :"<<dirtTile.returnBlockRect(i).left<<std::endl;
        std::cout<<"Rect "<<i<<".top :"<<dirtTile.returnBlockRect(i).top<<std::endl;
        std::cout<<"Rect "<<i<<".width :"<<dirtTile.returnBlockRect(i).width<<std::endl;
        std::cout<<"Rect "<<i<<".height:"<<dirtTile.returnBlockRect(i).height<<std::endl;
        std::cout<<"--------------\n"<<std::endl;
    }

} */