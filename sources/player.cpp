#include "player.hpp"
namespace ariel{
    Player::Player(std::string st){
        this->name = st;
        this->size = 0;
        this->card_taken = 0;
    }
    int Player::cardesTaken(){
        return this->card_taken;
        
    }
    int Player::stacksize(){
        return size;
    }

}