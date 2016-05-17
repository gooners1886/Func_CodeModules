#include <iostream>



void fun1D( int* pArr1D, int len )
{
	std::cout<<"=== fun1D ==="<<std::endl;
	for ( int i = 0; i < len; i++ )
	{
		if(7==i)
		{
			pArr1D[i] = 9;
		}
		std::cout<<pArr1D[i]<<std::endl;
	}

	return;
}

void fun2D( int pArr2D[2][4], int d1, int d2 )
{
	std::cout<<"=== fun2D ==="<<std::endl;
	for ( int i = 0; i < d1; i++ )
	{
		for ( int j = 0; j < d2; j++ )
		{
			std::cout<<pArr2D[i][j]<<std::endl;
		}
	}

	return;
}


int main()
{
	int iArr1D[8] = {1,2,3,4,5,6,7,8};
	int iArr2D[2][4] = { {1,2,3,4}, {5,6,7,8} };
	
	fun1D( iArr1D, 8 );
	fun2D( iArr2D, 2, 4 );

	return 1;
}