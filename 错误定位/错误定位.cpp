#include <iostream>

int main(int , char**)
{
	std::cout<<"This fake error is in "<<__FILE__<<" on line "<<__LINE__<<std::endl;
	return 0;
}