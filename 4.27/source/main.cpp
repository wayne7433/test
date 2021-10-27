#include<stdio.h>
#include<stdlib.h>
long int i, j, m,k;

int main(void)
{
	j = 0;
	m = 0;
	for (k = 1; k < 500; k++)
	{
		for (i = 1; i < 500; i++)
		{
			for (j = 1; j < 500; j++)
			{
				if (j*j == k*k+i*i)
					printf("%ld %ld %ld\n", k,i ,j);
			}
		}
	}

	system("pause");
	return 0;


}