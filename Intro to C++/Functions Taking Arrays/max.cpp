#include <iostream>
using namespace std;

int max(int*arr, int arr_size) {
	int max = arr[0];

	for (int i = 0; i < arr_size; i++) {
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

int main() {
	
	int foo[]  =  { 32,12,19 };
	int bar[]  =  { 1,23,421,23 };
	int ban[]  =  {1,2,3,4,5,6,7,8};
	int boom[] =  { 412,321,3214,5567,12 };
	int bang[] =  { 12,123,1234,12345,123456 };

	cout << max(foo, 3) << endl;
	cout << max(bar, 4) << endl;
	cout << max(ban, 8) << endl;
	cout << max(boom, 5) << endl;
	cout << max(bang, 5) << endl;
}

// just outputs first number in array
