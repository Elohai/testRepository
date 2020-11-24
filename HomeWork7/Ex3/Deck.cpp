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
    if(hand.size()==0){     //если при попытке выдать карту оказывается, что колода пуста - замешивается новая колода.
        Populate(1);        //с одной стороны, при однократной игре затруднительно выбрать всю колоду, но если
        Shuffle();          //сыграть несколько раз - на это есть все шансы.
    }                       //При такой обработке, кстати, отпадает необходимость замешивать колоду в классе Game, так
    aHand.Add(*(hand.end()-1));     //как при попытке раздать первую карту первому игроку - произойдет автозамес.
    hand.pop_back();
}

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
{    
    std::cout << std::endl;
    while (!(aGenericPlayer.IsBusted()) && aGenericPlayer.IsHitting())
    {
        Deal(aGenericPlayer);
        std::cout << aGenericPlayer <<" takes one more card"<< std::endl<<std::endl;
        aGenericPlayer.PrintHand();
        std::cout<<std::endl;
        
        if (aGenericPlayer.IsBusted())
        {
            aGenericPlayer.Bust();
        }
    }
}
