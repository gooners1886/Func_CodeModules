#include <sstream>
#include <string>
#include <iostream>
using namespace std;

void main()
{
	int num1 = 45;
	double num2 = 99.93;

	stringstream ss1, ss2;
	ss1<<num1;
	ss2<<num2;

	string str1 = ss1.str();
	cout<<str1<<endl;
	string str2 = ss2.str();
	cout<<str2<<endl;
}