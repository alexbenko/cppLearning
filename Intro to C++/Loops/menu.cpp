#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <cstdlib>
#include <string>

using namespace std;

int main() {

	int num;

	srand(time(NULL));

	


	while (true) {
		cout << endl;
		cout << "Enter a number between 1-4: " << endl;
		cout << "1. Add two numbers" << endl;
		cout << "2. Flip a Coin" << endl;
		cout << "3. Get a fortune" << endl;
		cout << "4. Quit" << endl;

		cin >> num;
		cin.ignore(1000, 10);


		if (num == 1) {
			float x1, x2, y;

			cout << "Enter a number: " << endl;
			cin >> x1;
			cin.ignore(1000, 10);
			cout << "Enter another number: " << endl;
			cin >> x2;
			cin.ignore(1000, 10);

			y = x1 + x2;

			cout << x1 << "+" << x2 << "=" << y << endl;

		}


		if (num == 2) {
			int x = rand() % 2 + 0;

			if (x == 0) cout << "Heads" << endl;
			if (x == 1) cout << "Tails" << endl;

		}


		if (num == 3) {
			int x = rand() % 3 + 0;
			string fort1, fort2, fort3;

			fort1 = "You will win the lottery soon";
			fort2 = "Trust the deer";
			fort3 = "He who eats too many prunes, sits on toilet many moons.";

			if (x == 0) cout << fort1 << endl;
			if (x == 1) cout << fort2 << endl;
			if (x == 2) cout << fort3 << endl;
		}


		if (num == 4) {
			cout << "Goodbye" <<  endl;
			break;

		}

		if (num > 4) {

			cout << "Error, chose a number between 1-4 " << endl;
			
		}
		

	}

	


}