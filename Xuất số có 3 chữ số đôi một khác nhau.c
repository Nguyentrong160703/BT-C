#include<stdio.h>
#include<conio.h>
int main()
{
	printf("So co ba chu so doi mot khac nhau la: ");
	for (int i= 1; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int z = 0; z <= 9; z++)
			{ if (i != j && j != z && i != z) {
				printf("%d%d%d\t", i, j, z);
				}
			}
		}
  }
	return 0;
}
