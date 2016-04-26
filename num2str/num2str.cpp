#include <sstream>
#include <string>
#include <iostream>
using namespace std;



std::string myInt2String( const int& n )
{
	//*************** Method 1 *****************
	//std::stringstream ss;
	//std::string str;
	//ss<<n;
	//ss>>str;
	//return str;

	//**************** Method 2 *****************
	std::stringstream ss;
	ss<<n;
	return	ss.str();

}



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