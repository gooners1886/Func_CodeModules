#include <vector>
#include <iostream>
#include <fstream>
#include <string> 

using namespace std;


int main()
{	
	//注意：该路径不能含有中文字符，否则出错！！
	string total_name = "./src_file/file.txt";

	fstream infile;
	//打开文件，开始写入  创建一个txt文件
	infile.open(total_name.c_str (), ios::in);
	if(!infile)
	{
		cout<<"can not open the file:   "<<total_name<<endl;
	}
	else
	{
		cout<<"open txt successfully!!"<<endl;
	}

	string str;
	//while( !infile.eof() )
	getline(infile, str);
	cout << "第一行: " << str << endl;
	if ( str[0] == '*' )
	{
		cout<<"注释！"<<endl;
	}

	getline(infile, str);
	cout << "第二行: " << str << endl;
	string word;





	int cols = 5;
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


	infile.close();

	return 1;


}


