#pragma once

#include "Card.h"
#include <vector>

class Hand {
protected:
    std::vector<Card *> cards;
public:
    Hand();
    virtual ~Hand();
    void add(Card* card);
    void clear();
    int getPoints() const;
};
