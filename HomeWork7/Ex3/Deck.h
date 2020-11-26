#include "GenericPlayer.h"
class Deck:public Hand{
    public:
        Deck():Hand(){};
        void Populate(int deckCount);
        void Shuffle();
        void Deal(Hand& aHand); //Полиморфизм - приведение всех игроков к базовому классу Hand, для наполнения картами вектора( класс Hand поддердивает данный функционал).
        void AdditionalCards(GenericPlayer& aGenericPlayer); //Полиморфизм -приведение всех игроков к базовому классу GenericPlayer для выдачи дополнительных карт( функционал отсутствует в Hand, но присутствует в GenericPlayer)
};
