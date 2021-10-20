#include<stdio.h>
#include<stdlib.h>
float i, j, km, cc, cckm, stpc, ptc;
int main(void)
{
	
	printf("上班所走的里程(km)\n");
	scanf_s("%f", &km);
	printf("一公升汽油的價錢\n");
	scanf_s("%f", &cc);
	printf("一公升能跑多少公里\n");
	scanf_s("%f", &cckm);
	printf("停車費\n");
	scanf_s("%f", &stpc);
	printf("過路費\n");
	scanf_s("%f", &ptc);

	printf("總花費 %f\n",(km / cckm)*cc+stpc+ptc);




	system("pause");
	return 0;


}