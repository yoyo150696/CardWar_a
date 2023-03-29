#include "player.hpp"
namespace ariel{

    class Game{
        private:
        public:
            Player p1;
            Player p2;
            Game(Player first,Player second);
            void playTurn();
            void printLastTurn();
            void playAll();
            void printWiner();
            void printLog();
            void printStats();
    };
}