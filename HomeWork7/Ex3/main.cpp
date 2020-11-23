#include "GenericPlayer.h"
#include "Game.h"


void TheGame(){
    std::cout<<"Number of players:";
    int playersNum;
    std::cin>>playersNum;//без обработки некорректного ввода
    std::vector<std::string> playersNames;
    for(int i=0;i<playersNum;i++){
        std::cout<<"Player "<<i+1<<" name:";
        std::string name;
        std::cin>>name;
        playersNames.push_back(name);
    }
    Game mainGame = Game(playersNames);
    mainGame.Play();
    
}

int main(){
    std::cout<<"Hello!"<<std::endl;   
    std::string answer;
    while(answer!="n"){
        TheGame();
        std::cout<<"Try again?(y/n):";
        std::cin>>answer;
    }
    
} 

