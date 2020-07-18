#include <iostream>
using namespace std;

void reverse(int * arr, int arr_size) {

	

	for (int i = 0; i < (arr_size / 2); i++) {

		int temp = arr[i];

		arr[i] = arr[(arr_size - 1) - i];
		arr[(arr_size - 1) - i] = temp;



	}

}







int main() {

	const int SIZE = 10;

	int boof[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int oof[SIZE]  = { 10,9,8,7,6,5,4,3,2,1 };
	int x[SIZE]    = { 11,12,13,14,15,16,17,18,19,21 };
	int y[SIZE]    = { 31,32,33,34,35,36,37,38,38,3, };
	int foo[SIZE] =  { 101,102,103,104,105,106,107,108,109,110 };



	reverse(boof, SIZE);
	reverse(oof, SIZE);
	reverse(x, SIZE);
	reverse(y, SIZE);
	reverse(foo, SIZE);

	for (int i = 0; i < SIZE; i++) {
		cout << boof[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << oof[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << x[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << y[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << foo[i] << endl;
	}


}