#include <ctime>
#include <string>
#include <iostream>




std::string myTime2String()
{
	time_t tt = time(NULL);//这句返回的只是一个时间戳
	tm* t= localtime(&tt);
	char tmp[100];
	sprintf(tmp, "%d%02d%02d_%02d%02d%02d", 
		t->tm_year + 1900,
		t->tm_mon + 1,
		t->tm_mday,
		t->tm_hour,
		t->tm_min,
		t->tm_sec);

	std::string strTime(tmp);

	return strTime;
}


int main()
{
	std::string strTime = myTime2String();
	std::cout<<strTime<<std::endl;

	return 1;
}