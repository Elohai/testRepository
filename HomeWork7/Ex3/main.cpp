#include "GenericPlayer.h"
#include "Game.h"

int main(){
    std::vector<std::string> playersNames; 
    Game mainGame = Game(playersNames);
    bool samePlayers =false;
    std::string answer;
    do{
        if(answer=="y"){    //В начале эта переменная пустая, поэтому данный блок пропускается, при повторе есть возможность не вводить имена игроков заново, а просто продолжить играть в том же составе
            std::cout<<"Same players?(y/n):";
            std::string repeat;
            std::cin>>repeat;
            if(repeat=="y"){
                samePlayers=true;                   
            }
            else
                samePlayers=false;
        }
        if(!samePlayers){
            std::cout<<"Number of players:";
            int playersNum;
            std::cin>>playersNum;//без обработки некорректного ввода
            playersNames.clear();
            for(int i=0;i<playersNum;i++){
                std::cout<<"Player "<<i+1<<" name:";
                std::string name;
                std::cin>>name;
                playersNames.push_back(name);
            }
            mainGame.GeneratePlayers(playersNames);           
        }
        if(playersNames.size()==0){
            std::cout<<"Hard to play without players, accidentially you lose";
        }
        else{
            mainGame.Play();
        }       
        std::cout<<"Try again?(y/n):";
        std::cin>>answer;
    }while(answer!="n");   
} 

