#include "time.h"
#include "stdio.h"
#include "stdlib.h"

int main(void)
{
	time_t c_start,t_start, c_end,t_end;

	// time ��ȷ����
	t_start = time(NULL) ;
	system("pause");
	t_end = time(NULL) ;
	printf("The pause used %f s by clock()./n",difftime(t_end,t_start)) ;

	// clock ��ȷ������
	c_start = clock();
	system("pause");
	c_end = clock();
	printf("The pause used %f ms by time()./n",difftime(c_end,c_start)) ;

	system("pause");

	return 0;
}