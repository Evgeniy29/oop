#pragma once

#include<iostream>
#include "Hand.h"

class GenericPlayer : public Hand {
    friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);
protected:
    std::string name;
    GenericPlayer(std::string _name);
public:
    virtual ~GenericPlayer();
    virtual bool needMore() const = 0;
    bool isOverburdened() const;
    void bust() const;
};