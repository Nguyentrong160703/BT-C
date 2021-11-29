#include<conio.h>
#include<stdio.h>
int a[2][3];
// Nhap mang a tu ban phim
void NhapMang()
{
 for(int i=0; i<2;i++)  	
    for(int j=0;j<3;j++)
	 {
 	  printf("\n Nhap phan tu thu: a[%d][%d] = ", i,j);
	  scanf("%d", &a[i][j]);	
 	}  
}

// Xuat mang a
void XuatMang()
{
	printf("\n Mang vua nhap: ");
	for(int m=0;m<2;m++)
	   for(int n=0;n<3;n++)
	    {
		 printf("\t %d", a[m][n]);    		
    	}
}
// Tinh tong cac phan tu cua mang
void TongMang()
{
 int tong=0;
  for(int k=0;k<2;k++)
   for(int q=0;q<3;q++)
     {
	  tong=tong+a[k][q];	     
     }
 printf("\n Tong cac phan tu cua mang = %d", tong);  
}

// Tim phan tu lon nhat cua mang
void PhanTuLN()
{
 int Max=a[0][0];
  for(int k=0;k<2;k++)
   for(int q=0;q<3;q++)
     {
	  if(a[k][q]>Max)
	     Max=a[k][q];
     }
 printf("\n Phan tu lon nhat cua mang = %d", Max);  
}
// Tim phan tu nho nhat cua mang
void PhanTuNN()
{
 int Min=a[0][0];
  for(int k=0;k<2;k++)
   for(int q=0;q<3;q++)
     {
	  if(a[k][q]<Min)
	     Min=a[k][q];
     }
 printf("\n Phan tu nho nhat cua mang = %d", Min);  
}
//Tinh trung binh cong
void TBCong()
{
	int tong=0;
	for(int k=0;k<2;k++){
   		for(int q=0;q<3;q++){
   		tong+=a[k][q];
   		}
   	}	
   	double trungBinhCong = (double)tong/(6);
   	printf("\nTrung binh cong cua cac phan tu trong mang = %.2f",trungBinhCong);
}
//Xuat cac gia tri le
void GiaTriLe()
{
	printf("\nCac phan tu le trong mang la: ");
	for(int k=0;k<2;k++){
   		for(int q=0;q<3;q++){
   			if (a[k][q] % 2 != 0)
            printf("\t%d",a[k][q]);
        }
    }
}
int main()
{
 NhapMang();
 XuatMang();
 TongMang();	
 PhanTuLN(); 
 PhanTuNN();
 TBCong();
 GiaTriLe();
 getch();
 return 0;	
}

