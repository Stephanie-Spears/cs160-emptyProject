#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main()

{
	string P;
	char p;
	string R;
	string T;
	stringstream ss;

	cout << "P: ";
	cin >> P;
	getline(cin, P);
	cout << "p: ";
	putback(cout, p);



	getline(cin, P) >> P;
	cout << "R: ";
	getline(cin, R) >> R;
	cout << "T: ";
	getline(cin, T) >> T;


	system("pause");
}