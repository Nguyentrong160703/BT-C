#include <stdio.h>
int main()
{
	int i, j, x;
	printf("BANG CUU CHUONG: \n");
	for (j=1;j<=10; j++)
	{
	for (i=2; i<=9;i++)
	{
	x=i*j;
	printf("%dx%d=%d", i, j, x);
	printf("\t");
	}
	printf("\n");
	}
	return 0;
}	
