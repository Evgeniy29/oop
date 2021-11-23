#include "../include/Game.h"

void Game:: play()
{
    
    std::vector<Player>::iterator pPlayer;
    for (int i = 0; i < 2; ++i)
    {
        for (pPlayer = players.begin(); pPlayer != players.end(); ++pPlayer)
        {
            deck.deal(*pPlayer);
        }
        deck.deal(house);
    }

    
    house.flipTopCard();

    
    for (pPlayer = players.begin(); pPlayer != players.end(); ++pPlayer)
    {
        std::cout << *pPlayer << std::endl;
    }
    std::cout << house << std::endl;

    
    for (pPlayer = players.begin(); pPlayer != players.end(); ++pPlayer)
    {
        deck.addCards(*pPlayer);
    }

    
    house.flipTopCard();
    std::cout << std::endl << house;

    
    deck.addCards(house);

    if (house.isOverburdened())
    {
        
        for (pPlayer = players.begin(); pPlayer != players.end(); ++pPlayer)
        {
            if (!(pPlayer->isOverburdened()))
            {
                pPlayer->win();
            }
        }
    }
    else
    {
        
        for (pPlayer = players.begin(); pPlayer != players.end();
            ++pPlayer)
        {
            if (!(pPlayer->isOverburdened()))
            {
                if (pPlayer->getPoints() > house.getPoints())
                {
                    pPlayer->win();
                }
                else if (pPlayer->getPoints() < house.getPoints())
                {
                    pPlayer->lose();
                }
                else
                {
                    pPlayer->draw();
                }
            }
        }

    }

    
    for (pPlayer = players.begin(); pPlayer != players.end(); ++pPlayer)
    {
        pPlayer->clear();
    }
   house.clear();
}
