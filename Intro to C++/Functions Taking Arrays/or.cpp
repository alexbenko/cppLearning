#include <iostream>
using namespace std;

bool or_(bool * arr, int arr_size) {

	for (int i = 0; i < arr_size; i++) {

		if (arr[i] == 1) return true;
		
	}
	return false;
}

int main() {
	bool boom[] = { 1,1,1,1 };
	bool bang[] = { 0,0,0,0 };
	bool bop[]  = { 1,0,1,0 };
	bool zoom[] = { 0,1,0,1 };
	bool boof[] = { 0,1,1,0 };

	cout << or_(boom, 4) << endl;
	cout << or_(bang, 4) << endl;
	cout << or_(bop, 4)  << endl;
	cout << or_(zoom, 4) << endl;
	cout << or_(boof, 4) << endl;
}