#include "../include/GenericPlayer.h"

GenericPlayer::GenericPlayer(const std::string name) : name(name) {}
GenericPlayer::~GenericPlayer() {}
bool GenericPlayer::needMore() const { return 0; }; // ?
bool GenericPlayer::isOverburdened() const {
    return (getPoints() > 21);
}
void GenericPlayer::bust() const {
    if (isOverburdened()) {
        std::cout << name << " busted";
    }
}

std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer) {
    os << aGenericPlayer.name << ": ";

    std::vector<Card *>::const_iterator pCard;
    if (!aGenericPlayer.cards.empty()) {
        for (pCard = aGenericPlayer.cards.begin(); pCard != aGenericPlayer.cards.end(); ++pCard) {
            os << * ( * pCard);
        }
        if (aGenericPlayer.getPoints() != 0) {
            std::cout << aGenericPlayer.getPoints();
        }
    } else {
        os << "no cards";
    }
    return os;
}