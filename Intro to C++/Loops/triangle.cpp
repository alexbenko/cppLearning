#include <iostream>
using namespace std;

int main() {

	int user,tri,bot;
	

	do {
		cout << endl;
		cout << "Enter a postive, whole number between 1-70 " << endl;

		cin >> user;
		cin.ignore(1000, 10);
	} while (user > 70);

	for (tri = 0; tri < user; tri++) {

		for (bot = 0; bot < (tri + 1); bot++)

			cout << "*";
			cout << endl;	
	  }
	
	for (tri = user; tri >= 0; tri--) {
		
		for (bot = 0; bot <= tri; bot++){
			
			cout << "*";
			
		}
		cout << endl; 
	}

	  







	









}