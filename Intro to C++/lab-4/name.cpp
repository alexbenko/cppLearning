// COMSC-110
// 2018 Fall
// Author: Alex Benko
// Lab 4
// Editor used: Visual Studio


#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {

	string name;

	cout << endl;
	cout << "Enter your name: ";
	getline (cin, name);

	cout << "You entered the name : " << "\"" << name << "\"" << endl;
	int length = name.length();
	cout << "It has " << length << " characters in it." << endl;

	float r = (length)/2.0 ;
	float PI = 3.142; 
	float area = PI * pow(r,2);

	cout.setf(ios::fixed | ios::showpoint);
	cout << setprecision(2);

	cout << "If every character of your name was 1 meter wide, your name could fit in a cirlce whose area is " 
		 << area << " meters." << endl;
}