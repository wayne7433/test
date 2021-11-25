#include<stdio.h>
#include<stdlib.h>
#define SIZE 11
int q1(int a[]);
int q2(int a[]);
int t2;
int main(void)
{
	int s[SIZE] = {2,5,6,74,9,14,8,1,4,65};
	int j,t;
	printf("(a)\n");
	for (int i = 0; i < 10; i++)
	{
		printf("  %d", s[i]);
	}
	printf("\n\n");
	q1(s);


	int s2[SIZE] = { 2,5,6,74,9,14,8,1,4,65 };
	printf("(b)\n");
	for (int i = 0; i < 10; i++)
	{
		printf("  %d", s2[i]);

	}
	printf("\n\n");
	q2(s2);
	system("pause");
	return 0;
}
int q1(int a[])
{
	int reg,t;
	for (int j=0; j < 9; j++)
	{
		for (int i = 0; i < 9-j; i++)
		{
			if (a[9 - i] < a[8 - i])
			{
				reg = a[8 - i];
				a[8 - i] = a[9 - i];
				a[9 - i] = reg;
			}
		}
		for (int i = 0; i < 10; i++)
		{
			printf(" %d", a[i]);

		}
		printf("\n");
	}
	return 0;


}
int q2(int a[])
{
	int reg,f;
	for (int j = 0; j < 9; j++)
	{
		f = 0;
		for (int i = 0; i < 9 - j; i++)
		{
			if (a[9 - i] < a[8 - i])
			{
				f = 1;
				reg = a[8 - i];
				a[8 - i] = a[9 - i];
				a[9 - i] = reg;
			}
		}
		for (int i = 0; i < 10; i++)
		{
			printf(" %d", a[i]);
		}
		printf("\n");
		t2++;
		if (f == 0)
		{
			printf("\n time %d", t2);
			break;

		}
	}
	return 0
		;

}
