#include<stdio.h>
#include<math.h>
#define MAX 100
void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap vao so phan tu cua mang: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le, vui long nhap lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
 
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}
int SoChiPhuong(int a)
{
   for (int i=1; i<a; i++)
       if (i*i == a)
           return 1;
   return 0;
}
int ChinhPhuongDauTien(int A[100], int n)
{
   for (int i=0; i<n; i++)
       if (sochinhphuong(A[i])==1)
           return A[i];
   return -1;
}
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
    printf("\nSo chinh phuong dau tien la: ");
    ChinhPhuongDauTien(a, n);
}
