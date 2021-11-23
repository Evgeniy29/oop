#pragma once

#include "GenericPlayer.h"

class Player : public GenericPlayer {
public:
    Player(std::string _name = "");
    virtual ~Player();
    virtual bool needMore() const;
    void win() const;
    void lose() const;
    void draw() const;
};