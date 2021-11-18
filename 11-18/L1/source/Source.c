#include<stdio.h>
#include<stdlib.h>
char i;
char q(char x);
int main(void)
{
	printf("¿é¤J¤p¼g\n");
	scanf_s("%c", &i);
	printf("%c", q(i));
}
char q(char x)
{
	if (x >= 'a' && x <= 'z')
	{
		x = x - 32;
	}
	else
	{
		x = x + 32;

	}
	return x;
}