// COMSC-110
// 2018 Fall
// Author: Alex Benko
// Lab 4
// Editor used: Visual Studio

#include <iostream>
#include <string>
using namespace std;

int main() {

	int amt;
	double pay;
	char yesno;
	string flavor;

	cout << "Do you want pizza [Y/N} "; // single character
	cin >> yesno;
	cin.ignore (1000, 10);

	cout << "What kind of pizza do you want? "; // string
	//dont use cin for string variables
	getline(cin, flavor);

	cout << "How many pizzas do you want? "; // integer
	cin >> amt; 
	cin.ignore(1000, 10);

	cout << "How much will the pizzas cost? "; // double (floating point)
	cin >> pay;
	cin.ignore(1000, 10);

	cout << endl;
	cout << "You said: " << yesno << endl;
	cout << flavor << " is the type of pizza wanted" << endl;
	cout << "Pizzas wanted: " << amt << endl;
	cout << "Total cost for " << amt << " " << flavor << " pizzas is $" << pay << endl;
}