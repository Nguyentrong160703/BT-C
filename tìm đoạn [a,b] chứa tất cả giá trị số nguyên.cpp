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
void timdoan (int a [100], int n)
{
   float max = a [0];
   float min = a [0];
   for (int i = 1; i <n; i ++)
   {
      max = (max <a [i])? max: a [i];
      min = (min> a [i])? min: a [i];
   }
   printf ("[%.0f,%.0f] la doan chua cac gia tri trong mang \ n", max, min);
}
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
    printf("\nTim doan [a,b]: ");
    timdoan(a, n);
}
