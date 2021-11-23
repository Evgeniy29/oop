#pragma once

#include <iostream>

enum ECardSuit { SPADES, CLUBS, DIAMONDS, HEARTS };
enum ECardValue {
    ACE   = 1,
    TWO   = 2,
    THREE = 3,
    FOUR  = 4,
    FIVE  = 5,
    SIX   = 6,
    SEVEN = 7,
    EIGHT = 8,
    NINE  = 9,
    TEN   = 10,
    JACK  = 10,
    QUEEN = 10,
    KING  = 10
};

class Card {
    ECardSuit suit;
    ECardValue value;
    bool isCoverUp;
public:
    friend std::ostream& operator<<(std::ostream& os, const Card& aCard);
    Card(ECardSuit _suit, ECardValue _value);
    virtual ~Card();
    void flip();
    int getValue() const;
};