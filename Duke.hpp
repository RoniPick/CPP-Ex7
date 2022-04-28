#include <string>
#include <iostream>
#include "Player.hpp"
using namespace std;

namespace coup{
    class Duke: public Player{

    public:
        Duke(Game num, string name): Player(num, name){}

        void block(Player assassin);
        void tax();
        string role();
    };

}