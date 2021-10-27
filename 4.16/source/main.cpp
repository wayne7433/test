#include<stdio.h>
#include<stdlib.h>
float i,  m;
int j;
int main(void)
{
	m = 1;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j<m)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		m = m + 1;
		printf("\n");
	}
	printf("\n");
	m = 10;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j < m)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		m = m - 1;
		printf("\n");
	}
	printf("\n");
	m = 0;
	for (i = 0; i < 11; i++)
	{
		for (j = 1; j < 11; j++)
		{
			if (j > m)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		m = m + 1;
		printf("\n");
	}
	printf("\n");
	m = 9;
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j < 11; j++)
		{
			if (j > m)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		m = m - 1;
		printf("\n");
	}

	system("pause");
	return 0;


}