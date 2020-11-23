#include "Deck.h"
#include <algorithm>
void Deck::Populate(int deckCount){
    for (int i =0;i<deckCount;i++){
        for(int card=0;card<13;card++){ //количество карт одной масти
            for(int suit=0;suit<4;suit++){//количество мастей
                Card* newCard =new Card((CardValue)card,(CardSuit)suit);
                Add(newCard);
            }            
        }
    }    
}

void Deck::Shuffle(){
    std::random_shuffle(hand.begin(),hand.end());
} 

void Deck::Deal(Hand& aHand){
    aHand.Add(*(hand.end()-1));
    hand.pop_back();
}

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
{    
    std::cout << std::endl;
    while (!(aGenericPlayer.IsBusted()) && aGenericPlayer.IsHitting())
    {
        Deal(aGenericPlayer);
        std::cout << aGenericPlayer <<" takes one more card"<< std::endl;
        aGenericPlayer.PrintHand();
        std::cout<<std::endl;
        
        if (aGenericPlayer.IsBusted())
        {
            aGenericPlayer.Bust();
        }
    }
}
