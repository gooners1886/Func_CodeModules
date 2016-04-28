#include <iostream>
#include <math.h>
#include <float.h>

bool myDoubleEqualZero( double d )
{
	if ( fabs(d)<DBL_EPSILON )
	{
		return true;
	}

	return false;
}

bool myFloatEqualZero( float f )
{
	if ( fabs(f)<FLT_EPSILON )
	{
		return true;
	}

	return false;
}


int main ()
{
	double d1 = 0.0;
	float f1 = 0.0;
	double d2 = 0.00000000000001;
	float f2  = 0.000001;


	if ( myDoubleEqualZero(d1) )
	{
		std::cout<<"d1="<<d1<<" equal 0"<<std::endl;
	}
	else
	{
		std::cout<<"d1="<<d1<<" does not equal 0"<<std::endl;
	}

	if ( myDoubleEqualZero(d2) )
	{
		std::cout<<"d2="<<d2<<" equal 0"<<std::endl;
	}
	else
	{
		std::cout<<"d2="<<d2<<" does not equal 0"<<std::endl;
	}


	if ( myFloatEqualZero(f1) )
	{
		std::cout<<"f1="<<f1<<" equal 0"<<std::endl;
	}
	else
	{
		std::cout<<"f1="<<f1<<" does not equal 0"<<std::endl;
	}

	if ( myFloatEqualZero(f2) )
	{
		std::cout<<"f2="<<f2<<" equal 0"<<std::endl;
	}
	else
	{
		std::cout<<"f2="<<f2<<" does not equal 0"<<std::endl;
	}



	return 1;
}
	