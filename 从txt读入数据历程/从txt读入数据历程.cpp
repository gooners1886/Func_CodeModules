#include <vector>
#include <iostream>
#include <fstream>
#include <string> 

using namespace std;


int main()
{	
	//ע�⣺��·�����ܺ��������ַ������������
	string total_name = "./src_file/file.txt";

	fstream infile;
	//���ļ�����ʼд��  ����һ��txt�ļ�
	infile.open(total_name.c_str (), ios::in);
	if(!infile)
	{
		cout<<"can not open the file!"<<endl;
	}
	else
	{
		cout<<"open txt successfully!!"<<endl;
	}

	string str;
	getline(infile, str);
	cout << "��һ��: " << str << endl;
	if ( str[0] == '*' )
	{
		cout<<"ע�ͣ�"<<endl;
	}

	getline(infile, str);
	cout << "�ڶ���: " << str << endl;
	string word;





	int cols = 5;
	vector<string> temp(cols);
	for(int i = 0; i < cols; i++)
	{
		//�����ո���߻س�����ֹͣ���ζ���
		infile>>temp[i];
	}



	////��������ַ���ת�������ֵķ�����
	////(1)����c_str()   
	////(2)����atof atoi�Ⱥ���ת����double int������
	//vector<double> itemp(cols);
	//for (int i = 0; i < cols; i++)
	//{
	//	itemp[i] = atof(temp[i].c_str());
	//}


	return 1;


}


