#include <iostream>
using namespace std;

int lookup(int * arr, int arr_size, int seek) {

	for (int i = 0; i < seek; i++) {
		if (arr[i] == seek) return i;
	}
	return -1;	
}


int isElem(int * arr, int arr_size, int seek) {
	if (lookup(arr, arr_size, seek) == -1) return false;
	else return true;
}


int main() {
	int foo[]  = { 32,12,193 };
	int bar[]  = { 1,23,421,23 };
	int ban[]  = { 1,2,3,4,5,6,7,8};
	int boom[] = { 412,321,3214,5567,12 };
	int bang[] = { 10,123,1234,12345,123456 };


	cout << lookup(foo, 3, 12)  << endl;
	cout << lookup(bar, 4, 421) << endl;
	cout << lookup(ban, 8, 6)   << endl;
	cout << lookup(boom, 5, 12) << endl;
	cout << lookup(bang, 5, 69) << endl;

	cout << endl;

	cout << isElem(foo, 3, 12) << endl;
	cout << isElem(bar, 4, 421) << endl;
	cout << isElem(ban, 8, 6) << endl;
	cout << isElem(boom, 5, 12) << endl;
	cout << isElem(bang, 5, 69) << endl;
}