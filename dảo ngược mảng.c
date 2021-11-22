#include<stdio.h>
#include<conio.h>
void nhapmang(int a[], int &n)
{ 
printf("nhap so phan tu: " );
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  { 
  	printf("a[%d] :",i);
    scanf("%d",&a[i]);
  }
}
int xuatmang(int a[],int n)
 {
  for(int i=0;i<n;i++)
     {
        printf("%4d",a[i]);
     }
 }
void daonguocchieu(int a[],int n) 
{
 for(int i=0;i<=n/2;i++)
  {
   int temp=a[i];
   a[i]=a[n-1-i];
   a[n-1-i]=temp;
  }
 printf("\n Mang dao nguoc la: ");
 for(int i=0;i<n;i++)
     {
        printf("%4d",a[i]);
     } 
}

int main()
{
 int a[50],n;
 nhapmang(a,n);
 xuatmang(a,n);
 daonguocchieu(a,n);
 return 0;
}
