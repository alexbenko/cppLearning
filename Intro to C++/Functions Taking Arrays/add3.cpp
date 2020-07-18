#include <iostream>
using namespace std;

void add3(int * arr, int arr_size) {
	
	int x;

	int add = 3;
	for (int i = 0; i < arr_size; i++) {
		
		arr[i] += add;

	}
	
}

int main() {
	const int SIZE = 4;
	int x[]   = { 1,3,5,7 };
	int even[]  = { 2,4,6,8 };
	int off[]   = { 0,0,0,0 };
	int on[]    = { 1,1,1,1 };
	int maybe[] = { 1,0,1,0 };

	add3(x, SIZE);
	add3(even, SIZE);
	add3(off, SIZE);
	add3(on, SIZE);
	add3(maybe, SIZE);

	for (int i = 0; i < SIZE; i++) {
		cout << x[i] << endl;
	}
	
	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << even[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << off[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << on[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << maybe[i] << endl;
	}

}