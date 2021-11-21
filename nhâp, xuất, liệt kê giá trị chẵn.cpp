#include<stdio.h>
#include<math.h>
#define MAX 100
//Nhap mang 
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
// Xuat mang
void xuat(int a[], int n)
{
 
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}
//Liet ke cac mang co gia tri chan 
void lietkechan(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%4d", a[i]);
        }
    }
}
//goi lai cac ham tren
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
    printf("\nCac gia tri chan trong mang la: ");
    lietkechan(a, n);
}
