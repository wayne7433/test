#include<stdio.h>
#include<stdlib.h>
float i, j, km, cc, cckm, stpc, ptc;
int main(void)
{
	
	printf("�W�Z�Ҩ������{(km)\n");
	scanf_s("%f", &km);
	printf("�@���ɨT�o������\n");
	scanf_s("%f", &cc);
	printf("�@���ɯ�]�h�֤���\n");
	scanf_s("%f", &cckm);
	printf("�����O\n");
	scanf_s("%f", &stpc);
	printf("�L���O\n");
	scanf_s("%f", &ptc);

	printf("�`��O %f\n",(km / cckm)*cc+stpc+ptc);




	system("pause");
	return 0;


}