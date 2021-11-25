#include <stdio.h>
#include<string.h>
int main()
{
	int a,b,kq;
	char pt;
	printf("Moi nhap so A: "); scanf("%d",&a);
	printf("Moi nhap so B: "); scanf("%d",&b);
	printf("Moi nhap phep tinh (+,-,x,/): "); scanf("%s", &pt);
	
	if(pt=='+')
	{
		kq=a+b;
		}
	else if(pt=='-')
	{
		kq=a-b;
		}
	else if(pt=='x')
	{
		kq=a*b;
		}
	else if(pt=='/')
	{
		kq=a/b;
		}
	printf("Ket qua phep toan: %d",kq);
}	
