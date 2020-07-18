#include <iostream>
#include <string>
using namespace std;


struct Move {
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

struct Pokedex { 
	Pokemon* p;
	Pokedex* rest;

};
    
struct Pokedex* head;

Pokedex empty() {

	 Pokedex *emptyPokedex = new Pokedex{ NULL,NULL };

	 return *emptyPokedex;
}

bool isEmpty(Pokedex* dex) {
	
	if (dex->p == NULL && dex->rest == NULL) return true;
	
	return false;
  
}

int length(Pokedex* dex) {

	int length = 0;

	while (dex->p != NULL && dex->rest != NULL) {
		
		length++;
	}

	return length;
}

Pokedex prepend(Pokemon* poke, Pokedex* dex) {

	Pokedex *newPokemon = new Pokedex;

	while (isEmpty(dex)) {

			newPokemon->p = poke;
			newPokemon->rest = NULL;

			if (head != NULL) {

				newPokemon->rest = head;
		
			}

		head = newPokemon;
	
			return *newPokemon;
	}
	
}

string shortDescription(Pokemon* poke) {


	return poke->pokeName + " (" + poke->type + ")"
						  + "\n";
}

string index(Pokedex* dex) {

	string description;

	while (dex->p != NULL && dex->rest != NULL) {

		description += shortDescription(dex->p) + "\n";

	}

	return description;


}

int main() {

	Pokemon fav[5] = {
	{"Mudkip","Water"}
   ,{"Mew", "Psychic"}
   ,{"Zoroark","Dark"}
   ,{"Rayquaza","Dragon"}
   ,{"Buzzwole","Bug"}
	};

	
	Pokedex emptyDex = empty();

	//for (int i = 0; i < 5; i++) {

		prepend(&fav[1], &emptyDex);

	//


	cout << "There are " << length(&emptyDex) << " Pokemon in the Pokedex: " << endl;

}

    