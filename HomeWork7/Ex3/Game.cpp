#include "Game.h"

Game::Game(const std::vector<std::string>& names)
{
    // создает вектор игроков из вектора с именами
    std::vector<std::string>::const_iterator pName;
    for (pName = names.begin(); pName != names.end(); ++pName)
    {
        m_Players.push_back(Player(*pName));
    }
    
    // запускает генератор случайных чисел
    srand(static_cast<unsigned int>(time(0)));
    m_Deck.Populate(1);
    m_Deck.Shuffle();
}

Game::~Game()
{}

void Game::Play()
{    
    std::vector<Player>::iterator pPlayer;
    for (int i = 0; i < 2; ++i)
    {
        for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
        {
            m_Deck.Deal(*pPlayer);          
        }
        m_Deck.Deal(m_House);        
    }   
    m_House.FlipFirstCard();   
    for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
    {
        (*pPlayer).PrintHand();
    }
    
    m_House.PrintHand();
    for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
    {  
        std::cout<<"Player's "<<*pPlayer<<" turn"<<std::endl;
        m_Deck.AdditionalCards(*pPlayer);
    }
    std::cout<<m_House<<"'s turn"<<std::endl;
        
    m_Deck.AdditionalCards(m_House);    
    if (m_House.IsBusted())
    {        
        for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
        {
            if (!(pPlayer->IsBusted()))
            {
                pPlayer->Win();
            }
        }
    }
    else
    {    
        for (pPlayer = m_Players.begin(); pPlayer != m_Players.end();
             ++pPlayer)
        {
            if (!(pPlayer->IsBusted()))
            {
                if (pPlayer->GetTotal() > m_House.GetTotal())
                {
                    pPlayer->Win();
                }
                else if (pPlayer->GetTotal() < m_House.GetTotal())
                {
                    pPlayer->Lose();
                }
                else
                {
                    pPlayer->Push();
                }
            }
        }
        
    }
    
    
    for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
    {
        pPlayer->Clear();
    }
    m_House.Clear();
}
