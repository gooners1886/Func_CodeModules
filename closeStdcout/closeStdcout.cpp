#include <iostream>

// ʹ�� http://blog.csdn.net/sms88/article/details/567109 ���͵ķ���

int main(void) 
{
	std::cout<<"before close..."<<std::endl;

	fclose(stdout);

	std::cout<<"before close..."<<std::endl;
	std::cerr<<"Using cerr also can print..."<<std::endl;

	return 0; 
} 
