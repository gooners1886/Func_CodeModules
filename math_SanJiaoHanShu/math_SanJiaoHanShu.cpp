#define _USE_MATH_DEFINES
#include<iostream>
#include <math.h>
using namespace std;

// ����C/C++���еĺ�����ʾPI�ķ���:  
// 1. #define _USE_MATH_DEFINES   --- ע�⣬�����Ҫ����math.h��ǰ��
// 2. #include <math.h>

int main()
{
	// �Ƕ���
	double dAngle30 = 30;
	double dAngle60 = 60;
	double dAngle210 = 30+180;
	double dAngle240 = 60+180;

	// ת���ɻ�����:    2*PI = 360��    1�� = (1/360)*2PI = (1/180)*PI
	double a = sin(dAngle30*M_PI/180);
	double b = cos(dAngle60*M_PI/180);
	double c = sin(dAngle210*M_PI/180);
	double d = cos(dAngle240*M_PI/180);



	cout<<"sin(30)="<<a<<endl;
	cout<<"cos(60)="<<b<<endl;
	cout<<"sin(180+30)="<<c<<endl;
	cout<<"cos(180+60)="<<d<<endl;

	return 0;

}