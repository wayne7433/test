#include<stdio.h>
#include<stdlib.h>
float i, j, m;

int main(void)
{
	printf("�Q�v�p�� ����:"); scanf_s("%f", &m);
	printf("�Q�v%  �Q��\n");
	for (j = 5; j < 11; j++)
	{
		printf("%.0f  %.2f\n", j, j*m/100);
	}


	system("pause");
	return 0;


}