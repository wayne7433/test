#include<stdio.h>
#include<stdlib.h>
float i, j, x, a, y, t,m;
int main(void)
{
	m = 1;
	 while (m==1)
	{
		printf("帳號\n"); scanf_s("%f", &y);

		printf("餘額\n"); scanf_s("%f", &i);
		printf("本月收取\n"); scanf_s("%f", &j);
		printf("取出數值\n"); scanf_s("%f", &t);
		printf("允許信用額度\n"); scanf_s("%f", &x);
		printf("帳號%f\n", y);
		if (x >= (i + j - t))
		{
			a = (i + j - t);
			printf("允許信用額度%f\n", x);
			printf("銀營行剩餘%f", a);
			printf("超出信用額度");
		}
		printf("\n");
		m = 1;

	 }


	system("pause");
	return 0;


}