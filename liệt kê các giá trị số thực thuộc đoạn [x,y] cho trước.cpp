#include<stdio.h>
#include<math.h>
#define MAX 100
 

void nhap (float a[], int &n)
{

    do
    {
        printf("\nNhap so luong cac phan tu trong mang: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le, vui long nhap lai !");
        }
    }while(n <= 0 || n > MAX);

    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}

void LietKetTrongDoanXY(float a[], int n, float x, float y)
{
    for (int i=0; i<n; i++)
        if (x<=a[i] && a[i]<=y)
            printf("%8.2f",a[i]);
}

int main()
{
    int n;
    float a[MAX];
    float x, y;
    printf("Nhap x: "); scanf("%f",&x);
    printf("Nhap y: "); scanf("%f", &y);
 
    nhap(a, n);
    xuat(a, n);
    printf("\nLiet ke trong doan [%8.3f,%8.3f]: ", x, y);
    LietKetTrongDoanXY(a, n,x,y);
    return 0;
}
