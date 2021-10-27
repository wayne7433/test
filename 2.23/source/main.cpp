#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int innum[3],big,sml,i;
	big = 0;
	sml = 100;
	printf("LARGEST AND SMALLEST INTEGER\n");

	scanf_s("%d %d %d", &innum[0], &innum[1], &innum[2]);
	for (i = 0; i < 3; i++)
	{
		if (big < innum[i])
			big = innum[i];
		if (sml > innum[i])
			sml = innum[i];

	}




	printf("largest is %d smallest is %d\n", big, sml);

	system("pause");
	return 0;


}