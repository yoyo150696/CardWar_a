#include <iostream>
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
using namespace ariel;
Player p1("yoni");
Player p2("ido");
Game g(p1,p2);

TEST_CASE("test 1 -- player_init"){
    Player p3("yoni");
    Player p4("ido");

    CHECK(p3.stacksize() == 0);
    CHECK(p4.stacksize() == 0);
    CHECK(p3.cardesTaken() == 0);
    CHECK(p4.cardesTaken() == 0);
}
TEST_CASE("test 2 -- game init"){
    CHECK(g.p1.stacksize() == 26);
    CHECK(g.p2.stacksize() == 26);
    CHECK(g.p1.cardesTaken() == 0);
    CHECK(g.p2.cardesTaken() == 0);

    }
TEST_CASE("test 3 -- one turn"){
    g.playTurn();
    CHECK(g.p1.stacksize() == 25);
    CHECK(g.p2.stacksize() == 25);
    CHECK(g.p1.cardesTaken() == 1);
    CHECK(g.p2.cardesTaken() == 0);
    
}
TEST_CASE("test 4 -- play all"){
    g.playAll();
    CHECK(g.p1.stacksize() == 0);
    CHECK(g.p2.stacksize() == 0);
    CHECK((g.p1.cardesTaken() + g.p2.cardesTaken()) == 26);
}
TEST_CASE("test 5 -- end of game"){
    CHECK_NOTHROW(g.printLastTurn());
    CHECK_NOTHROW(g.printLog());
    CHECK_NOTHROW(g.printStats());
    CHECK_NOTHROW(g.printWiner());
    CHECK_NOTHROW(g.printLastTurn());
}

