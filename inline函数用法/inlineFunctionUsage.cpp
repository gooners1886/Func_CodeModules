#include "inlineFunctionUsage.h"
#include <iostream>

extern int fun1();

int main ()
{
	int i = 10;
	int j = 9;
	int k = 8;

	int res = my_max(i, j, k);
	int res2 = fun1();

	std::cout<<"max is "<<res<<std::endl;
	std::cout<<"max is "<<res2<<std::endl;

	return 1;
}