#include<conio.h>
#include<stdio.h>
int a[3][2];
// Nhap mang a tu ban phim
void NhapMang()
{
 for(int i=0; i<3;i++)
    for(int j=0;j<2;j++)
	 {
 	  printf("\n Nhap phan tu thu a[%d][%d] = ", i,j);
	  scanf("%d", &a[i][j]);	
 	}	
}
// Xuat mang a
void XuatMang()
{
	printf("\n Mang vua nhap: ");
	for(int i=0;i<3;i++)
	   for(int j=0;j<2;j++)
	    {
		 printf("\t %d", a[i][j]);    		
    	}
}
int main()
{
 NhapMang();
 XuatMang();	
 getch();
 return 0;	
}
