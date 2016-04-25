#include <vector>
#include <iostream>
#include <fstream>
#include <string> 


using namespace std;

void main()
{

	//注意：该路径中不能含有中文字符，否则出错！！！
	string total_name = "./WriteSthInTxt.txt";

	fstream outfile;

	//打开文件，开始写入  创建一个txt文件
	// in::app是追加打开方式！！！在不破坏原有文件内容的基础上继续写入写的内容
	//outfile.open(total_name.c_str (), ios::app);

	// in::out隐含的打开方式是in::trunc,即打开文件后清除原有内容
	outfile.open(total_name.c_str (), ios::out);
	if(!outfile)
	{
		cout<<"can not open the file!"<<endl;
	}
	else
	{
		cout<<"open txt successfully!!"<<endl;
	}


	//直接写入字符串 和 回车：
	outfile<<"version: 1"<<endl<<"n_points: 56"<<endl<<endl;

	//间接写入字符串：
	string str = "aaa";
	outfile<<str<<endl;

	//直接写入数字：
	outfile<<99.2222222<<endl;
	outfile<<8888888.21222222<<endl;

	//间接写入数字：
	double Dou = 12345.67890;
	outfile<<Dou<<endl;


	//关闭文件
	outfile.close();
	//outfile.clear();

	cout<<"completed！！";


}

