#include "GenericPlayer.h"
#include "Game.h"

int main(){
    std::vector<std::string> playersNames; 
    Game mainGame = Game(playersNames);
    std::string answer;
    do{
        std::cout<<"Number of players:";
        int playersNum;
        std::cin>>playersNum;//без обработки некорректного ввода
        for(int i=0;i<playersNum;i++){
            std::cout<<"Player "<<i+1<<" name:";
            std::string name;
            std::cin>>name;
            playersNames.push_back(name);
        }
        if(playersNames.size()==0){
            std::cout<<"Hard to play without players, accidentially you lose";
        }
        else{
            mainGame.GeneratePlayers(playersNames);
            mainGame.Play();
        }
        std::cout<<"Try again?(y/n):";
        std::cin>>answer;
    }while(answer!="n");   
} 

