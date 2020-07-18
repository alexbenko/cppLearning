#include <iostream>
using namespace std;

int main() {

	const int size = 10;
	int num[size];
	int i;
	int sum = 0;
	double avg;


	for (i = 0; i < size; i++) {

		cout << "Enter 10 Numbers: " << endl;
		cin >> num[i];

		sum += num[i];

	}

	avg = (double)sum / size;

	cout <<"The average is: "<< avg << endl;

}