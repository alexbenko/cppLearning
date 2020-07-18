// COMSC-110
// 2018 Fall
// Author: Alex Benko
// Lab 3
// Editor used: Visual Studio

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int lent = 150000;
	int offer = 300000;
	int change = offer - lent;

	int hundredthousand = change / 100000;
	int tenthousand = change / 10000;
	int fivethousand = change / 5000;
	int thousand = change / 1000;
	int fivehundred = change / 500;
	int twenty = change / 20;
	int ten = change / 10;
	int five = change / 5;
	int two = change / 2;
	int one = change / 1;

	cout << endl;
	cout << "Amount to be lent: " << lent << endl;
	cout << "Amount to be offered: " << offer << endl;
	cout << "Change due: " << change << endl;

	cout << endl;

	cout << "Change includes this many hundred thousand bills: "
		 << hundredthousand << endl;

	cout << "Change includes this many ten thousand dollar bills: "
		 << tenthousand << endl;

	cout << "Change includes this many five thousand dollar bills: "
		 << fivethousand << endl;

	cout << "Change includes this many thousand dollar bills: "
		 << thousand << endl;

	cout << "Change includes this many five hundred dollar bills: "
		 << fivehundred << endl;

	cout << "Change includes this many twenty dollar bills: "
		<< twenty << endl;

	cout << "Change includes this many ten dollar bills: "
		<< ten << endl;
	
	cout << "Change includes this many five dollar bills: "
		<< five << endl;

	cout << "Change includes this many two dollar bills: "
		<< two << endl;

	cout << "Change includes this many one dollar bills:  "
		<< one << endl;
}