#include <string>
#include <iostream>
#include <vector>
#include "Game.hpp"

using namespace std;
#pragma once

namespace coup{
    class Player{
    private:
        string name;
        Game gamenum;
        int coinsNum;

    public:
        Player(Game num, string name);
        //~Player();

        void income();
        void foreign_aid();
        void coup();
        virtual int coins();
        virtual string role();
        
    };
    
    
}