#include <iostream>
using namespace std;

bool and_(bool * arr, int arr_size) {
	
	for (int i = 0; i < arr_size; i++) {

		if (arr[i] == 0)  return false ;
	}
	
	return true;
}

int main() {

	bool boom[] = { 1,1,1,1 };
	bool bang[] = { 0,0,0,0 };
	bool bop[]  = { 1,0,1,0 };
	bool zoom[] = { 0,1,0,1 };
	bool boof[] = { 1,1,1,1 };

	cout << and_(boom, 4) << endl;
	cout << and_(bang, 4) << endl;
	cout << and_(bop, 4)  << endl;
	cout << and_(zoom, 4) << endl;
	cout << and_(boof, 4) << endl;
	
}