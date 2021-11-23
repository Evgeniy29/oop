#pragma once

#include <vector>
#include "Deck.h"
#include "House.h"
#include "Player.h"

class Game {
    Deck deck;
    House house;
    std::vector<Player> players;
public:
    static constexpr int points_to_win = 21;
    Game(std::vector<std::string> names) {
        for (std::string name : names) {
            Player p(name);
            players.push_back(p);
        }
    }

    void play();
};