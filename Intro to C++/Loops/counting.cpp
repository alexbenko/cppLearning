#include <iostream>
using namespace std;

int main() {
	int userNumber, x;
	
	 do{
		cout << "Enter a positive whole number" << endl;
		cin >> userNumber;
		cin.ignore(1000, 10);


	 } while (userNumber <= 0);



	for (x = 0; x != userNumber; x = x + 1) {
			
		cout << x << endl;
			 
		}


	cout << userNumber << endl;
}