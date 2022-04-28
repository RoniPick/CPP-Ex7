#include "doctest.h"
#include "Ambassador.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"
#include "Game.hpp"
#include <vector>

using namespace coup;
using namespace std;

TEST_CASE("Good cases"){

	Game game_1{};

	Duke duke{game_1, "Ram"};
	Assassin assassin{game_1, "Anthony"};
	Ambassador ambassador{game_1, "Maya"};
	Captain captain{game_1, "Dan"};
	Contessa contessa{game_1, "Roni"};

	vector<string> players = game_1.players();
    duke.income();
    assassin.income();
    ambassador.income();
    captain.income();
    contessa.income();

    //checking if the names are equals
    CHECK_EQ(assassin.role(), "Anthony");
    CHECK_EQ(duke.role(), "Ram");
    CHECK_EQ(ambassador.role(), "Maya");
    CHECK_EQ(captain.role(), "Dan");
    CHECK_EQ(contessa.role(), "Roni");

    //adding 1 to each member
    CHECK(duke.coins() == 1);
    CHECK(assassin.coins() == 1);
    CHECK(ambassador.coins() == 1);
    CHECK(captain.coins() == 1);
    CHECK(contessa.coins() == 1);

    duke.foreign_aid();
    assassin.foreign_aid();
    ambassador.foreign_aid();
    captain.foreign_aid();
    contessa.foreign_aid();

    //adding 2 to each member
    CHECK(duke.coins() == 3);
    CHECK(assassin.coins() == 3);
    CHECK(ambassador.coins() == 3);
    CHECK(captain.coins() == 3);
    CHECK(contessa.coins() == 3);


    duke.foreign_aid();
    assassin.foreign_aid();
    ambassador.foreign_aid();
    captain.foreign_aid();
    contessa.foreign_aid();

    //adding 2 to each member
    CHECK(duke.coins() == 5);
    CHECK(assassin.coins() == 5);
    CHECK(ambassador.coins() == 5);
    CHECK(captain.coins() == 5);
    CHECK(contessa.coins() == 5);

}


TEST_CASE("Bad cases"){
	Game game_1{};

	Duke duke{game_1, "Ram"};
	Assassin assassin{game_1, "Anthony"};
	Ambassador ambassador{game_1, "Maya"};
	Captain captain{game_1, "Dan"};
	Contessa contessa{game_1, "Roni"};

	vector<string> players = game_1.players();

    //negative value
    CHECK_FALSE(duke.coins() == -2);
    CHECK_FALSE(assassin.coins() == -2);
    CHECK_FALSE(ambassador.coins() == -2);
    CHECK_FALSE(captain.coins() == -2);
    CHECK_FALSE(contessa.coins() == -2);
    
}