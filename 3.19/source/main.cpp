#include<stdio.h>
#include<stdlib.h>
float i, j, m,x;
int main(void)
{
	j = 0;
	m = 0;

	while (m == 0)
	{
		printf("principal"); scanf_s("%f", &i);
		printf("rate"); scanf_s("%f", &j);
		printf("days"); scanf_s("%f", &x);
		printf("charge%f\n", i*j*x/365 );


	}




	system("pause");
	return 0;


}
