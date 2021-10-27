#include<stdio.h>
#include<stdlib.h>
float  j, m;
int i;
int main(void)
{
	printf("輸入職員代碼");

	scanf_s("%d", &i);
	printf("輸入周薪");
	scanf_s("%f", &j);

	switch (i)
	{
	case 1:
		printf("薪水為 %.2f", j);
		break;
	case 2:
		printf("輸入工作時數");
		scanf_s("%f", &m);
		printf("薪水為 %.2f", (m > 40) ? j+(j/40)*0.5*(m-40):j);
		break;
	case 3:
		printf("輸入賣出金額");
		scanf_s("%f", &m);
		printf("薪水為 %.2f", 250+(m/1000)*57);
		break;
	case 4:
		printf("輸入工作件數");
		scanf_s("%f", &m);
		printf("薪水為 %.2f", m * 50);
		break;


	}

	/*for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (j == 0 || j == 11 || i == 0 || i == 3)
				printf("x");
			else
				printf(" ");
		}
		printf("\n");
	}*/


	system("pause");
	return 0;


}