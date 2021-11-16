#include<stdio.h>
#include<math.h>
#define MAX 100
void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap vao so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop li");
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
        printf("%3d", a[i]);
    }
}
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
}
