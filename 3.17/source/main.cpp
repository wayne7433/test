#include<stdio.h>
#include<stdlib.h>
float i, j, x, a, y, t,m;
int main(void)
{
	m = 1;
	 while (m==1)
	{
		printf("�b��\n"); scanf_s("%f", &y);

		printf("�l�B\n"); scanf_s("%f", &i);
		printf("���리��\n"); scanf_s("%f", &j);
		printf("���X�ƭ�\n"); scanf_s("%f", &t);
		printf("���\�H���B��\n"); scanf_s("%f", &x);
		printf("�b��%f\n", y);
		if (x >= (i + j - t))
		{
			a = (i + j - t);
			printf("���\�H���B��%f\n", x);
			printf("�����Ѿl%f", a);
			printf("�W�X�H���B��");
		}
		printf("\n");
		m = 1;

	 }


	system("pause");
	return 0;


}