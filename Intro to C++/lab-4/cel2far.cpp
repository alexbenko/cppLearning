// COMSC-110
// 2018 Fall
// Author: Alex Benko
// Lab 4
// Editor used: Visual Studio

#include <iostream>
#include <string>
using namespace std;

//equation is F=1.8C+32
int main() {

	double cel;

	cout << "Enter a temperature in Celcius: ";
	cin >> cel;
	cin.ignore(1000, 10);

	double far = (1.8 * cel) + 32;

	cout << cel << " degrees Celcius is " << far << " degrees Fahrenheit" << endl;

}