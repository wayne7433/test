#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int i, j;
long long unsigned int c[10000],a;
int q(int i);
int main(void)
{
	

	c[0] = 1; c[1]=1;
	printf("%lu , %lu", c[0], c[1]);
	a = 1;
	q(a);
}
int q(int i)
{
	a += 1;
	c[a] = c[a - 1] + c[a - 2];
	if (c[a-2] <= c[a-1])
	{
		
		printf(" , %llu", c[a]);
		q(a);
	}

	return a;
}