#include <vector>
#include <iostream>
#include <fstream>
#include <string> 



using namespace std;


int main()
{	
	//注意：该路径不能含有中文字符，否则出错！！
	string total_name = "E:\\test_dir\\WriteSthInTxt.txt";

	fstream infile;
	//打开文件，开始写入  创建一个txt文件
	infile.open(total_name.c_str (), ios::in);
	if(!infile)
	{
		cout<<"can not open the file!"<<endl;
	}
	else
	{
		cout<<"open txt successfully!!"<<endl;
	}

	int cols = 50;
	vector<string> temp(cols);
	for(int i = 0; i < cols; i++)
	{
		//遇到空格或者回车都会停止本次读入
		infile>>temp[i];
	}

	////将读入的字符串转换成数字的方法：
	////(1)先用c_str()   
	////(2)再用atof atoi等函数转换成double int等类型
	//vector<double> itemp(cols);
	//for (int i = 0; i < cols; i++)
	//{
	//	itemp[i] = atof(temp[i].c_str());
	//}


	return 1;


}


