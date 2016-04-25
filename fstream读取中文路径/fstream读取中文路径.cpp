#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

#include <windows.h> //这个头文件很重要



void LoadSVMModel(vector<float> &Classify_w,std::string filemodel);

int main()
{
	string strFile=".\\模型\\SimpleModel.txt";
	int a = strFile.size();
	
	vector<float> w;
	LoadSVMModel(w, strFile);
	
	return 1;

}



void LoadSVMModel(vector<float> &Classify_w,std::string filemodel)
{
	//===============================这里是关键========================================
	WCHAR name[256];
	int res = MultiByteToWideChar( CP_ACP, 0, filemodel.c_str(),filemodel.size()+1,name,filemodel.size()+1);
	//=================================================================================



	std::ifstream Load_mod(name);

	//------Andy---------
	if(!Load_mod)
	{
		//cout<<"没有打开Model！！"<<endl;
		cout<<"Can not Open Model TXT!"<<endl;
	}
	else
	{
		cout<<"Open Model TXT Normally!"<<endl;
	}


	//------Andy-----------

	float w;
	for(;Load_mod.eof()==false;)
	{
		Load_mod>>w;
		if(Load_mod.fail())
			break;
		Classify_w.push_back(w);
	}
	Load_mod.close();
}

/*  //这个办法可以
	std::ifstream Load_mod(_TEXT("E:\\代码\\SimpleModel.txt"));
	if(!Load_mod)
	{
		//cout<<"没有打开Model！！"<<endl;
		cout<<"Can not Open Model TXT!"<<endl;
	}
	else
	{
		cout<<"Open Model TXT Normally!"<<endl;
	}
*/