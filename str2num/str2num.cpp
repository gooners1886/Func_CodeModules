#include <iostream>
#include <sstream>
#include <string>

using namespace std;

double myString2Double( std::string strNumber )
{
	double b = atof(strNumber.c_str());

	return b;
}

double myString2Int( std::string strNumber )
{
	int i = atoi(strNumber.c_str());

	return i;
}

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