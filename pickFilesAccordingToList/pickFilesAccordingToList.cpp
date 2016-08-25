#include <vector>
#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

// 要求
// filelist 文件中不要有无效的空行
// strDstFolder  strSrcFolder 中 是 \\ 


string strFileListPath = "./filelist.txt";
string strSrcFolder = ".\\SrcFolder\\";
string strDstFolder = ".\\DstFolder\\";






int main()
{	
	fstream infile;
	//打开文件，开始写入  创建一个txt文件
	infile.open(strFileListPath.c_str (), ios::in);
	if(!infile)
	{
		cout<<"can not open the file:   "<<strFileListPath<<endl;
	}
	else
	{
		cout<<"open txt successfully!!"<<endl;
	}

	

	string str;
	int iLineCounter = 0;
	while( !infile.eof() )
	{
		iLineCounter++;
		infile>>str;
		cout<<"line "<<iLineCounter<<" str = "<<str<<endl;

		string strCommond = "copy ";
		strCommond = strCommond + strSrcFolder + str + " " + strDstFolder;
		cout<<strCommond<<endl;
		system( strCommond.c_str() );

	}


	infile.close();

	return 1;


}


