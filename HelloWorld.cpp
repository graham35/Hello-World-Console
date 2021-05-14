#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cout << "Hello World" << endl;
	cout << "Enter a string" << endl;
	getline(cin, str);
	cout << "You entered: " << str << endl;

	return 0;

}