#include <iostream>
using namespace std;

int main() {

	const int size = 10;
	int x[size] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	int sum = 0;


	for (i = 0; i < size; i++) {

		sum += x[i];

	}

	cout << sum << endl;
}