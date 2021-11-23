#include "../include/Deck.h"

void clear(std::vector<Card*>& cards) {
    std::vector<Card *>::iterator it = cards.begin();
    for (it = cards.begin(); it != cards.end(); ++it) {
        delete *it;
        *it = 0;
    }
    cards.clear();
}

Deck::Deck() {
    generate();
}

Deck::~Deck() {
    clear(cards);
}

void Deck::generate() {
    clear(cards);
    for (int suit = ECardSuit::SPADES; suit <= ECardSuit::HEARTS; ++suit) {
        for (int rank = ECardValue::ACE; rank <= ECardValue::KING; ++rank) {
            cards.push_back(new Card(static_cast<ECardSuit>(suit), static_cast<ECardValue>(rank)));
        }
    }
}

void Deck::shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

void Deck::deal (Hand& hand) {
    if (!cards.empty()) {
        hand.add(cards.back());
        cards.pop_back();
    } else {
        std::cout << "Out of cards. Unable to deal.";
    }
}

void Deck::addCards (GenericPlayer& player) {
    std::cout << std::endl;
    while (!(player.isOverburdened()) && player.needMore()) {
        deal(player);
        std::cout << player << std::endl;

        if (player.isOverburdened()) {
            player.bust();
        }
    }
}