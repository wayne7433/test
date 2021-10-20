#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int innum;
	printf("add or even\n");

	scanf_s("%d", &innum);
	if(innum % 2 ==0)
		printf("%d is even \n",innum);
	else
		printf("%d is add \n", innum);
	system("pause");
	return 0;


}