#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int getMenuChoice();

string getFileName();

void encrypt(string fileName, string text);

void decrypt(string fileName);


int main() {
	while (true) {
		int menuChoice = getMenuChoice();

		if (menuChoice == 1) {
			string userText, fileName;
			fileName = getFileName() + ".txt";


			cout << "Enter text to be encrypted " << endl;
			getline(cin, userText);

			encrypt(fileName, userText);

		}

		if (menuChoice == 2) {
			string fileName = getFileName() + ".txt";

			decrypt(fileName);
		}

		if (menuChoice == 3) {
			cout << "Goodbye" << endl;
			break;
		}
	}
}

void encrypt(string fileName, string text) {
	ofstream fout;
	fout.open(fileName.c_str());

	for (int index = 0; index < text.length(); index++) {

		char currentChar = text[index];


		char aChar = currentChar;
		int charInt = (int)aChar + 1;


		fout << charInt << endl;

	}

	fout.close();

}

void decrypt(string fileName) {
	ifstream readFile;
	readFile.open(fileName.c_str());

	if (!readFile.good()) throw "Error";

	int x;


	while (readFile >> x) {

		char intChar = (char)x - 1;
		cout << intChar;

	}
	cout << endl;

	readFile.close();

}

int getMenuChoice() {
	int user;

	cout << "Select Menu Item: " << endl;
	cout << "1) Encode" << endl;
	cout << "2) Decode" << endl;
	cout << "3) Exit" << endl;

	cin >> user;
	cin.ignore(1000, 10);

	if (user == 1 || user == 2) return user;
	if (user > 3 || user <= 0) cout << "Error: Enter 1,2, or 3" << endl;

}

string getFileName() {
	string fileName;


	cout << "Enter the name of the file: " << endl;
	getline(cin, fileName);

	cout << endl;

	return fileName;
}




