#include <vector>
#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

// Ҫ��
// filelist �ļ��в�Ҫ����Ч�Ŀ���
// strDstFolder  strSrcFolder �� �� \\ 


string strFileListPath = "./filelist.txt";
string strSrcFolder = ".\\SrcFolder\\";
string strDstFolder = ".\\DstFolder\\";






int main()
{	
	fstream infile;
	//���ļ�����ʼд��  ����һ��txt�ļ�
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


