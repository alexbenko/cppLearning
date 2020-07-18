#include <iostream>
using namespace std;

int* concat(int* arr1, int size_arr1, int * arr2, int size_arr2) {

	int size_arr3 = size_arr1 + size_arr2;
	int * arr3 = new int[size_arr3];

	
	
	for (int i = 0; i < size_arr1; i++) {
		arr3[i] = arr1[i];
	}

	for (int i = 0 + size_arr1; i < size_arr3; i++) {

		arr3[i] = arr2[i-size_arr1];
	}


	return  arr3;
}

int main() {

	int foo[] = {1,2,3};
	int bar[] = {7,8,9};

	for (int i = 0; i < 6; i++) {
		cout << concat(foo, 3, bar, 3)[i] << endl; ;
	}
}