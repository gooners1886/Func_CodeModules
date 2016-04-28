//注意：
//FindFilesInOneFolder.h"最好放在第一个头文件  这个为了让#include <afx.h>放在第一个头文件，否则会报错：fatal error C1189: #error :  WINDOWS.H already included.  MFC apps must not #include <windows.h>
//工程设置成：在dll中使用MFC或者是在静态库中使用 MFC
//工程设置成：使用多字节字符或者Unicode都可以


#include "FindFilesInOneFolder.h"

#include <iostream>
using namespace std;

string ext1 = ".png";
string ext2 = ".bmp";
string ext3 = ".tif";
string ext4 = ".jpg";
string ext5 = ".ppm";

string SrcImgFolder = "./src_image/";


int main()
{
	// 1. Find all the filenames	
	cout<<"Find all the filenames ..."<<endl;
	vector<std::string> strFileList_tmp,strFileList;
	int i;
	strFileList.clear();
	strFileList_tmp=FindFilesInOneFolder(SrcImgFolder);
	int N_tmp=strFileList_tmp.size();
	int j, N;
	for (j=0,N=0;j<N_tmp;j++)//it=FilenamesVector.begin();it!=FilenamesVector.end();it++)
	{
		string tmp=strFileList_tmp[j];
		int q=tmp.find_last_of('.');
		string ext=tmp.substr(q,tmp.size());

		if (ext==ext1||ext==ext2||ext==ext3||ext==ext4||ext==ext5)		
		{
			strFileList.push_back(tmp);		
			N++;
		}
	}

	if (N<1)
	{
		cout<<"ERROR: No valid images in this folder!";
	}

	for(int id_file = 0; id_file < strFileList.size(); id_file++)
	{
		string strFile = strFileList[id_file];
		//1. 取得当前图像的名字和拓展名：
		int q=strFile.find_last_of('\\');
		int p=strFile.find_last_of('.');
		int difference1 = p - q - 1;
		string name=strFile.substr((q+1),difference1);//img186895
		int path_size = strFile.size();
		//int difference2 = path_size - p;
		string ext_name = strFile.substr(p, path_size);//.bmp
		string NameAndExtname = strFile.substr(q+1, path_size);//img186895.bmp

		cout<<strFile<<endl;


	}



}


