#include <vector>
#include <iostream>
#include <fstream>
#include <string> 


using namespace std;

void main()
{

	//ע�⣺��·���в��ܺ��������ַ��������������
	string total_name = "./WriteSthInTxt.txt";

	fstream outfile;

	//���ļ�����ʼд��  ����һ��txt�ļ�
	// in::app��׷�Ӵ򿪷�ʽ�������ڲ��ƻ�ԭ���ļ����ݵĻ����ϼ���д��д������
	//outfile.open(total_name.c_str (), ios::app);

	// in::out�����Ĵ򿪷�ʽ��in::trunc,�����ļ������ԭ������
	outfile.open(total_name.c_str (), ios::out);
	if(!outfile)
	{
		cout<<"can not open the file!   "<<total_name<<endl;
	}
	else
	{
		cout<<"open txt successfully!!"<<endl;
	}


	//ֱ��д���ַ��� �� �س���
	outfile<<"version: 1"<<endl<<"n_points: 56"<<endl<<endl;

	//���д���ַ�����
	string str = "aaa";
	outfile<<str<<endl;

	//ֱ��д�����֣�
	outfile<<99.2222222<<endl;
	outfile<<8888888.21222222<<endl;

	//���д�����֣�
	double Dou = 12345.67890;
	outfile<<Dou<<endl;


	//�ر��ļ�
	outfile.close();
	//outfile.clear();

	cout<<"completed����";


}

