#include<stdio.h>
#include<stdlib.h>
int a;
int q(int i,int j);
int main(void)
{
	int i, j;
	printf("輸入兩個數字");
	scanf_s("%d %d", &i,&j);
	printf("%d", q(i ,j)); 
}
int q(int i, int j)
{
	a++;


	while (a % i != 0 || a % j != 0)
	{
		a++;

	}
	
	
	return a;
}