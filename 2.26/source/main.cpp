#include<stdio.h>
#include<stdlib.h>
int i, j;
int main(void)
{
	
	scanf_s("%d %d", &i, &j);
	if (i % j == 0)
		printf("%d is %d multiples",i,j);
	else
		printf("%d is not %d multiples", i, j);

		

	system("pause");
	return 0;


}