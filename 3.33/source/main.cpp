#include<stdio.h>
#include<stdlib.h>

float i, j, m;

int main(void)
{
	m = 5;
	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (j>m && j< 11-m)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		//m=(i < 6) ? m-1 : m+1;
	}


	system("pause");
	return 0;


}