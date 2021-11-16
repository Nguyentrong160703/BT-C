#include<stdio.h>
#include<conio.h>
void nhap(int a[],int n)
{
    int i;
    printf("\nNhap phan tu cua mang:");
    for(i=0;i<n;i++)
    {
         printf("\na[%d]= ",i);
         scanf("%d",&a[i]);
    }
}
void xem(int a[],int n)
{
    int i;
    printf(" \n Cac phan tu trong mang la:");
    for(i=0;i<n;i++) printf("%5d",a[i]);
}
 
int tong(int a[],int n)
{
    int i,s;
    for(i=0,s=0;i<n;i++) s=s+a[i];
    return s;
}
int main()
{
    int a[50],n,s;
    printf("Nhap so phan tu cua mang:");
    scanf(" %d",&n);
    nhap(a,n);
    xem(a,n);
    s=tong(a,n);
    printf("\nTong cac phan tu trong mang la:%5d",s);
    getch();
    return 0;
}
