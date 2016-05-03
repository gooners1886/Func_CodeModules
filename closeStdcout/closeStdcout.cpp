#include <iostream>


// 使用 http://blog.csdn.net/sms88/article/details/567109 博客的方法

int main(void) 
{
	std::cout<<"before close..."<<std::endl;

	fclose(stdout);

	std::cout<<"before close..."<<std::endl;
	std::cerr<<"Using cerr also can print..."<<std::endl;

	return 0; 
} 
