#include "../include/Hand.h"

Hand::Hand() { }

Hand:: ~Hand() {
    clear();
}

void Hand::add(Card* card) {
    cards.push_back(card);
}
void Hand::clear() {
    std::vector<Card *>::iterator it = cards.begin();
    for (it = cards.begin(); it != cards.end(); ++it) {
        delete *it;
        *it = 0;
    }
    cards.clear();
}
int Hand::getPoints() const {
    int result = 0;
    int aces = 0;
    for (int i = 0; i < cards.size(); ++i) {
        if (cards[i]->getValue() == ACE)
            aces++;
        result += cards[i]->getValue();
    }
    while (aces > 0 && result <= 11) {
        result += 10;
        aces--;
    }
    return result;
}