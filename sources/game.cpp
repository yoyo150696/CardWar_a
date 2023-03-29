#include "game.hpp"

namespace ariel{
    
    Game::Game(Player first,Player second):p1(first),p2(second){
        
        this->p1 = first;
        this->p2 = second;
        this->p1.size = 26;
        this->p2.size = 26;
        if (&first == &second){
            this->p1.size = -1;
            this->p2.size = -1;
            throw ( "both are the smae player" );
        }
        
    }
    void Game::playAll(){
        while (p1.size>0)
        {
            playTurn();
        }
        
    }
    void Game::playTurn(){
        this->p1.size--;
        this->p2.size--;
        this->p1.card_taken++;
        

    }
    void Game::printLastTurn(){
        if(this->p1.size == -1)
            throw("ERROR");
    }
    void Game::printLog(){}
    void Game::printStats(){}
    void Game::printWiner(){}
    
}