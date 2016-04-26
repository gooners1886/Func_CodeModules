#include<fstream>  
#include <iostream>
using namespace std;

void funRedirectBefore()
{
	cout<<"funRedirectBefore called"<<endl;

	return;
}

void funRedirectAfter()
{
	cout<<"funRedirectAfter called"<<endl;

	for ( int i = 0; i < 100000; i++ )
	{
		cout<<"funRedirectAfter   "<<i<<endl;
	}

	return;
}

int main()
{   
	// step 1
	funRedirectBefore();

	// step 2  redirect
	ofstream log("./Func_Redirect.txt");
	streambuf * oldbuf =  cout.rdbuf(log.rdbuf());  

	// step 3
	funRedirectAfter();


	cout << "c test"<<endl<<"123456" ;
	return 0;
}