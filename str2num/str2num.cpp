#include <iostream>
using namespace std;



#include <sstream>
#include <string>
string num2str(double i);
void main()
{
	string str1 = "45";
	string str2 = "99.93";

	stringstream ss1, ss2;
	ss1<<str1;
	ss2<<str2;

	int num1;
	double num2;
	ss1>>num1;
	ss2>>num2;

	cout<<num1<<"   "<<num2<<endl;


}