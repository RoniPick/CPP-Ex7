#include <string>
#include <iostream>
#include <vector>
#include "Player.hpp"

using namespace std;

namespace coup{
    class Assassin: public Player{
 
    public:
        Assassin(Game num, string name): Player(num, name){}

        void coup(Player player);
        string role();
    };

}