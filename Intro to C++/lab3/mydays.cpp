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

	int years = 20;
	int leap = 4;
	int daysbirth = 141;
	int daysdue = 106;

	int a = 365 * years ;
	int b = a + leap;
	int c = b - daysbirth;
	int d = c - daysdue;

	string dob = "May 21,1998";
	string due = "Sept 16,2018";



	cout << "DOB: "<< dob << endl;
	cout << "Due: " << due << endl;
	cout << "Age: " << d << " days" << endl;
	
}

// years ive lived : 20
// birth year: 1998
// current year: 2018
// leap years : 4
// days before day of birthday including my date of brith : 141
// days left excluding due date : 106