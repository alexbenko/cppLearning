#include <iostream>
#include <string>
using namespace std;

struct Move{
	string name;
	int selfHPEffect;
	int otherHPEffect;
	int selfAtkEffect;
	int otherAtkEffect;
	int selfDefEffect;
	int otherDefEffect;
};

struct Pokemon {
	string pokeName;
	string type;
	int centimeterHeight;
	int gramWeight;
	int hp;
	int attack;
	int defense;
	Move move1;
	Move move2;
};

Move simpleAttack(Move name, Move otherHPEffect) {
	
	Move result = {name.name,otherHPEffect.otherHPEffect };
	
	return result;

}

string moveToString(Move name) {
	
	return name.name;

}

string shortDescription(Pokemon descr) {

	return descr.pokeName + " (" + descr.type + ")"
						  + "\n" + "  - " + moveToString(descr.move1)
						  + "\n" + "  - " + moveToString(descr.move2)
						  + "\n";

}


int main() {
	//Mudkip
	Move tackle   = {"Tackle",0,-15,0,0,0,0 };
	Move watergun = {"Water Gun",0,-25,0,0,0,0 };

	//Mew
	Move psychic  = {"Psychic",0,-40,0,0,0,-45 };
	Move fissure  = {"Fissure",0,-10000,0,0,0,0 };

	//Zoroark
	Move flamethrower = {"Flamethrower",0, 85,0,0,0,-50 };
	Move nightdaze    = {"Night Daze",0,-100,0,0,0,0 };

	//Rayquaza 
	Move hyperbeam   = {"Hyper Beam",0,-90,0,0,0,0 };
	Move dracometeor = {"Draco Meteor",0,-130,0,0,0,0 };

	//Buzzwole
	Move focuspunch = {"Focus Punch",0,-150,0,0,0,0 };
	Move lunge      = {"Lunge",0,-80,0,0,0,0 };


	Pokemon fav[5] = {
		{"Mudkip","Water", 60, 76, 50, 70, 50, tackle, watergun}
	   ,{"Mew", "Psychic", 71, 40, 100, 100, 100, psychic, fissure }
	   ,{"Zoroark","Dark", 160, 81100, 60, 105, 60, flamethrower, nightdaze}
	   ,{"Rayquaza","Dragon", 700, 206500, 105, 150, 90, hyperbeam, dracometeor}
	   ,{"Buzzwole","Bug", 240, 333600, 107, 139, 139,focuspunch,lunge}
	};

	for (int i = 0; i < 5; i++) {
		cout << shortDescription(fav[i]) << endl;
	}
}