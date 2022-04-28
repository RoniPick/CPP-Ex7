#include "Player.hpp"
#include "Game.hpp"

using namespace std;

namespace coup{
    Player::Player(Game num, std::string name){
        this->gamenum = num;
        this->name = name;
    }


    void Player::income(){
     }

    void Player::foreign_aid(){
    }

    void Player::coup(){}

    string Player::role(){
        return "";
    }

    int Player::coins(){
        return 0;
    }
}