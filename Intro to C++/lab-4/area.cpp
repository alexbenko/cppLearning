// COMSC-110
// 2018 Fall
// Author: Alex Benko
// Lab 4
// Editor used: Visual Studio

#include <iostream>
using namespace std;

int main()
{
	double b;
	double h;

	cout << "What is the base? ";
	cin >> b;
	cin.ignore(1000, 10);

	cout << "What is the height? ";
	cin >> h;
	cin.ignore(1000, 10);


	double a = (b*h) / 2;
	
	cout << "The area of the triangle is " << a << endl;
}