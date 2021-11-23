#include "../include/Card.h"

Card::Card(ECardSuit _suit, ECardValue _value)  : suit(_suit), value(_value) {
    isCoverUp = true;
}
Card::~Card() {}
void Card::flip() {
    isCoverUp = !isCoverUp;
}
int Card::getValue() const {
    return (!isCoverUp) ? value : 0;
}

std::ostream& operator<<(std::ostream& os, const Card& aCard)
{
    const std::string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
    const std::string SUITS[] = { "c", "d", "h", "s" };

    if (aCard.isCoverUp)
        os << RANKS[aCard.value] << SUITS[aCard.suit];
    else
        os << "XX";

    return os;
}