#include <iostream>
using namespace std;

int head(int * arr ) {

	return arr[0];

}

int main() {
	
	int sebastian[] = { 431,32,9012,32 };
	int doom[]      = { 9,7,3,123 };
	int whatever[]  = { 12,142,190,654 };
	int foo[]       = { 21,32,43,54,65 };
	int x[]         = { 2, 31, 1 };

	cout << head(sebastian) << endl;
	cout << head(doom) << endl;
	cout << head(whatever) << endl;
	cout << head(foo) << endl;
	cout << head(x) << endl;

}