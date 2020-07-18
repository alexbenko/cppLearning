#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

//Constant Functions

int five (){
	return 5;
}

bool contradiction() {
	return false;
}

bool tautology() {
	return true;
}

char at() {
	return '@';
}

string course() {
	return "COMSC-110";
}

string emptyString() {
	return "";
}

//Functions With 1 Arguement

int identity(int user) {
	
	return user;

}

int increment(int x) {
	
	x = x + 1;

	return x;
}

int add3(int x) {

	x = x + 3;

	return x;

}
 
int subtract5(int x) {

	x = x - 5;

	return x;
}

int squared(int x) {
	
	x = pow(x, 2);

	return x;
}

int xSquaredPlus3(int x) {
	
	x = pow(x, 2)+3;

	return x;
}

int polynomialSteve(int x) {
	
	x = pow(x, 2) + (3 * x) + 10;

	return x;
}

bool isFive(int x) {

	if (x == 5) return true;
	else return false;
}

bool isOneOrMore(int x) {

	if (x >= 1) return true;
	if (x < 1)  return false;
}

bool lessThan15(int x) {

	if (x < 15) return true;
	if (x > 15) return false;

}
bool isEven(int x) {

	if (x % 2 == 0) return true;
	else return false;
}

bool isOdd(int x) {

	if (x % 2 != 0) return true;
	else return false;
}

bool isDigit(int x) {

	if (x <= 9, x >= 0) return true;

	else return false;
}

bool isY(char x) {

	if (x == 'y') return true;
	else return false;
}

bool isN(char x) {

	if (x == 'n') return true;
	else return false;
}

bool isYorN(char x) {

	if (x == 'y' || x =='n') return true;
	else return false;
}

bool isABCorD(char x) {

	if (x == 'a' || x == 'b' || x == 'c' || x == 'd') return true;
	else return false;
}

bool boolIdentity(bool x) {

	return  x;
}

bool negation(bool x) {

	if (x == 1) return 0;
	if (x == 0) return 1;

}

bool isFoobar(string x) {
	
	if (x == "foobar") return true;
	else return false;


}

int isYes(string x) {
	 
	if (x == "yes" || x == "YES" || x == "Yes") return true;
	else return false;

}

int isNo(string x) {
	
	if (x == "no" || x == "NO" || x == "No") return true;
	else return false;

}

//Functions w/ more than 1 arguement

bool conjunction(bool a , bool b) {
	
	if (a && b == 1) return true;
	else return false;

}

bool disjunction(bool a, bool b) {
	
	if (a == 1 || b == 1) return true;
	else return false;
}

bool allThreeTrue(bool a, bool b, bool c) {

	if (a && b && c == 1) return true;
	else return false;
}

bool anyThreeTrue(bool a, bool b, bool c) {
	
	if ((a || b || c == 1)) return true;
	else return false;
}

bool allThreeFalse(bool a, bool b, bool c) {
	
	if (a == 0 && b == 0 && c == 0) return true;
	else return false;

}

bool isGreaterthan(int x, int y) {

	if (y < x) return true;
	else return false;


}

bool isLessThanOrEqualTo(int x, int y) {
	
	if (x <= y) return true;
	else return false;
}

bool isBetweenInclusive(int int1, int int2, int int3) {

	if (int1 > int2 && int1 < int3) return true;
	else if (int1 < int2 && int1 > int3) return true;
	else if (int1 = int2 || int3) return true;

}

int ifThenElse(bool bool1, int int1, int int2) {
	
	if (bool1 == 1) return int1;
	else return int2;
		
}

int add(int int1, int int2) {
	
	return int1 + int2;

}

int addAllThree(int int1, int int2, int int3) {
	
	return int1 + int2 + int3;
}

int multiplyAllThree(int int1, int int2, int int3) {

	return int1 * int2 * int3;
}

int pointsIfYes(int int1, string yes) {
	
	bool y = isYes(yes) ;

	if (y == true) return int1;
	else return 0;
}

int pointsIfNo(int num, string no) {
	bool n = isNo(no);

	if (n == true) return num;
	else return 0;
}

int scoreAnswer(string s1, string s2, int num) {
	
	if (s1 == s2) return num;
	else return false;


}

//Functions That Build String

string exclaim(string sent) {
	
	return sent + "!";
}

string fullStop(string sent) {
	

	return sent + ".";
}

string endLine(string line) {
	
	return line + "\n" ;
}

string concat(string str1, string str2) {
	
	return str1 + str2;
}

string exclaimIfFoobar(string str1) {
	string  x = "foobar";

	if (str1 == x) return str1 + "!";
	else return str1;
}

string appendTimes(string str1, string str2, int num) {
	
	
	for (int i = 1; i < num; i++)
		str2 += str1;

	return str1 ;
}

string boolToString(bool x) {
	
	if (x == 1) return "TRUE";
	else return "FALSE";
}

string intToString(int a)
{
	return to_string(a);
}

string additionToString(int x, int y) {
	int xy = x + y;
	return to_string(x) + " + " + to_string(y) + " = " + to_string(xy);
}

string numberQuestion(int num, string quest) {
	 
	return to_string(num) + ") " +  quest;

}

string dots(int input) {
	string p;
	string pe = "." ;

	for (int i = 1; i <= input; i++)
		p += pe;

	return p;
		
}

string headingLine (int input) {
	string e;
	string eq = "=";

	for (int i = 1; i <= input; i++)
		e += eq;

	return e;

}

string makeTitle(string userInput) {
	
	int titleLength = userInput.length();
	string headLin = headingLine(titleLength); 
	
	string top = headLin; 
	string mid = userInput; 
	string bot = headLin;

	return top + "\n" + userInput + "\n" + bot;
}

string indent(int num, string user) {
	string space = " ";
	string space2 = space;

	for (int i = 1; i < num; i++)
		space += space2;

	return space + user;
}

string repeat(string user, int num) {
	string user1 = user;
	string user2 = user;

	for (int i = 1; i < num; i++)
		user1 += user2;

	return user1;

}

string repeatLines(string user, int num) {
	string line1 = user + "\n";
	string line2 = user + "\n";

	for (int i = 1; i < num; i++)
		line1 += line2;

	return line1;

}

bool getYesOrNo (){
	string userInput;
	
	while (true) {
		cout << "Enter yes or No" << endl;
		getline(cin, userInput);

		int yes = isYes(userInput);

		if (yes == true) return true;
		else return false;
	}

}

//Void Funtions

void  sayLineTimes() {
	int num;
	string user;

	cout << "Enter an integer" << endl;
	cin >> num;
	cin.ignore(1000, 10);

	cout << "Enter string" << endl;
	getline(cin, user);
	 
	string line = repeatLines(num, user);

	cout << endl;

	cout << line << endl;

}


int main() {
	
	cout << repeat("a", 10) << endl;
}