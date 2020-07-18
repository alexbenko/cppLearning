#include <iostream>
using namespace std;


int* gimmieArray(int size) {

	int* arr[size];

	return arr[size];
}

int main() {

	int size2 = 10000000;

	for (int i = 0; i < size2; i++) {
		cout << gimmieArray(size2)[i] << endl;
	}








}