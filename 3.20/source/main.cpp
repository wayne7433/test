#include<stdio.h>
#include<stdlib.h>
float i, j, m, x;
int main(void)
{
	j = 0;
	m = 0;

	while (m == 0)
	{
		printf("hours working"); scanf_s("%f", &i);
		printf("rste of hours"); scanf_s("%f", &j);
		if (i > 40)
		{
			x = i - 40;
			printf("charge%f\n", j*i+(x*j*0.5));
		}
		else
		{
			printf("charge%f\n", j*i);
		}




	}




	system("pause");
	return 0;


}