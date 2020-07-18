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
	int mon = 97;
	int tues = 97;
	int wed = 92;
	int thu = 91;
	int fri = 89;
	string source = "weather.com";
	string deg = " degrees";

	cout << endl;
	cout << "St. George, UT 5-day forecast " << endl;
	cout << "-------------------------------" << endl;
	cout << "Monday, Sept 17th: " << mon << deg << endl;
	cout << "Tuesday, Sept 18th: " << tues << deg << endl;
	cout << "Wednesday, Sept 19th: " << wed << deg << endl;
	cout << "Thursday, Sept 20th: " << thu << deg << endl;
	cout << "Friaday, Sept 21st: " << fri << deg << endl;
	cout << "Source: " << source << endl;


}