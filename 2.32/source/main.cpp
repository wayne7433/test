#include<stdio.h>
#include<stdlib.h>
float i, j, x, k;

int main(void)
{

	printf("�п�J�魫(����)\n");
	scanf_s("%f", &k);
	printf("�п�J����(����)\n");
	scanf_s("%f", &x);
	i = x * x;
	j = k / i;
	printf("%f\n",j);
	if(j<18.5)
		printf("underweight\n");
	if(j>=18.5 && j<=24.9)
		printf("normal\n");
	if (j >= 25 && j <= 29.9)
		printf("overweight\n");
	if (j >= 30)
		printf("obese\n");


	system("pause");
	return 0;


}