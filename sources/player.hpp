#pragma once
#include <string>
namespace ariel{
    class Player{
        private:
            std::string name;
        public:
            int size;
            int card_taken;
            Player(std::string player_name);
            Player();

            int stacksize();

            int cardesTaken();

    };
}