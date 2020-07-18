#include <iostream>
using namespace std;

void init(int * arr, int arr_size, int changed) {

	for (int i = 0; i < arr_size; i++) {

		arr[i] = changed;

	}

}

int main() {
	int change = 42;
	const int SIZE = 10;

	int jade[SIZE];
	int x[] = { 32,12,3213,45 };
	int y[] = { 1,2,3,4,5,6,7,8,9,10 };
	int z[] = { 21,43,12,43,421,21,356,47,87,90 };
	int bop[] = { 10,9,8,7,6,5,4,3,2,1 };

	init(jade, SIZE, change);
	init(x, 4, change);
	init(y, SIZE, change);
	init(z, SIZE, change);
	init(bop, SIZE, change);

	for (int i = 0; i < 4; i++) {
		cout << x[i] << " at index " << i << endl;
	}

	cout << endl;

	for (int i = 0; i < SIZE ; i++) {
		cout << jade[i] << " at index " << i << endl;
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << y[i] << " at index " << i << endl;
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << z[i] << " at index " << i << endl;
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << bop[i] << " at index " << i << endl;
	}

	cout << endl;


}