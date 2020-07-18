#include <iostream>
using namespace std;

int sum(int * arr, int arr_size) {


	int sum = 0;
	int i ;


	for (i = 0; i < arr_size; i++) {

		sum += arr[i];

	}

	return sum;
}

int main() {

	int foo[]  = { 32,12,12 };
	int bar[]  = { 1,23,421,23 };
	int ban[]  = { 1,2,3,4,5,6,7,8, };
	int boom[] = { 412,321,3214,5567,12 };
	int bang[] = { 12,123,1234,12345,123456 };

	cout << sum(foo,3)   << endl;
	cout << sum(bar, 4)  << endl;
	cout << sum(ban, 8)  << endl;
	cout << sum(boom, 5) << endl;
	cout << sum(bang, 5) << endl;
}