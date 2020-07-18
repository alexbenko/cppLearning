#include <iostream>
#include <string>
using namespace std;

string unlines(string * arr, int arr_size) {
	string comb = " ";

	for (int i = 0; i < arr_size; i++) {
		comb += arr[i];
	}
	return comb + "\n";
}

int main() {

	string boom[] = { "boom","bang","bop" };
	string x[]    = {"X","Y","Z" };
	string bar[]  = { "Som","et","hi","ng" };
	string bop[]  = { "Mo","ns","ter" };
	string bam[]  = { "Pr","og","ram","mi","ng" };


	cout << unlines(boom, 3) << endl;
	cout << unlines(x, 3)    << endl;
	cout << unlines(bar, 4)  << endl;
	cout << unlines(bop, 3)  << endl;
	cout << unlines(bam, 5)  << endl;


}