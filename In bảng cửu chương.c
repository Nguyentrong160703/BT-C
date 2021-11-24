#include<stdio.h>
int main()
{
	int n, i;
	do{
		printf("Nhap bang cuu chuong ban muon in (1-9): ");
		scanf("%d", &n);
		if(n>=1&&n<=9)
			break;
		printf("\n --> So ban nhap khong hop le! Vui long nhap lai!\n\n");
	} while (n<1||n>9);
	printf("\n------Bang Cuu Chuong ------");
	for (i=1; i<=10;i++){
		printf("\n	--> %d*%d = %d", n,i,i*n);
		}
	}
