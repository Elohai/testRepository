#include "GenericPlayer.h"
#include "Player.h"
#include "House.h"
#include "Deck.h"
class Game
{
public:
    Game(const std::vector<std::string>& names);
    
    ~Game();
    void Play();
    void GeneratePlayers(const std::vector<std::string> &names); //метод для замены игроков в случае повторной игры без перезамеса колоды
private:
    Deck m_Deck;
    House m_House;
    std::vector<Player> m_Players;
};
