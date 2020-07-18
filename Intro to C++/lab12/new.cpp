#include <iostream>
using namespace std;

int* newIntArray(int size, int init) {

	int* arr = new int[size];

	for (int i = 0; i < size; i++) {

		arr[i] = init;
	}

	return arr;
}

int main() {

	int init  = 20;
	int size2 = 420;

	
	

	for (int i = 0; i < size2; i++) {

		cout << newIntArray(size2, init)[i] << endl;

		}




}