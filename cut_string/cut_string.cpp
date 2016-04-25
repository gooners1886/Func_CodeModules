#include <iostream>
#include <string>
using namespace std;


void main()
{

	string str1 = "C:\\Users\\gunners\\Desktop\\HandImages\\img186895.bmp";

	//1. 取得当前图像的名字和拓展名：
	int q=str1.find_last_of('\\');
	int p=str1.find_last_of('.');
	int difference1 = p - q - 1;
	string name=str1.substr((q+1),difference1);//img186895
	int path_size = str1.size();
	//int difference2 = path_size - p;
	string ext_name = str1.substr(p, path_size);//.bmp
	string NameAndExtname = str1.substr(q+1, path_size);//img186895.bmp

	return;

}
