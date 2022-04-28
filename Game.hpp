#include <string>
#include <iostream>
#include <vector>

#pragma once

using namespace std;

namespace coup{
    class Game{
    public:
    
        Game();
        //~Game();

        string turn();
        vector<string> players();
        string winner();

    };



}