#include <iostream>
using namespace std;

int main() {

	
	int user;

	
	while (true) {
		cout << "Enter a number between 0-15" << endl;
		cin >> user;
		cin.ignore(1000, 10);

		if (user > 15) cout << "Error: enter number between 0-15" << endl;
		else break;

	}

	

	while (user > 0) {
		int binary = user % 2;

		cout << binary;
		user /= 2;
	}



	







	
}