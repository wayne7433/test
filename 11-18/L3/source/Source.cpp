#include<stdio.h>
#include<stdlib.h>
int a;
int q(int i, int j);
int main(void)
{
	int i, j;
	a = 1;
	printf("��J��ӼƦr�o�X�l��");
	scanf_s("%d %d", &i, &j);
	printf("%d", q(i, j));
}
int q(int i, int j)
{
	
	if (j > 0)
	{
		j--;
		q(i,j);
		a *= i;

	}





	return a;
}