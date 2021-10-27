#include<stdio.h>
#include<stdlib.h>
float i, j, m;

int main(void)
{
	printf("利率計算 本金:"); scanf_s("%f", &m);
	printf("利率%  利息\n");
	for (j = 5; j < 11; j++)
	{
		printf("%.0f  %.2f\n", j, j*m/100);
	}


	system("pause");
	return 0;


}