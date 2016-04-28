#define _USE_MATH_DEFINES
#include<iostream>
#include <math.h>
using namespace std;

// 引用C/C++库中的宏来表示PI的方法:  
// 1. #define _USE_MATH_DEFINES   --- 注意，这个需要放在math.h的前面
// 2. #include <math.h>

int main()
{
	// 角度制
	double dAngle30 = 30;
	double dAngle60 = 60;
	double dAngle210 = 30+180;
	double dAngle240 = 60+180;

	// 转换成弧度制:    2*PI = 360度    1度 = (1/360)*2PI = (1/180)*PI
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