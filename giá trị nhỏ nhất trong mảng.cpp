#include<stdio.h>
#include<stdio.h>
#include<math.h>
#define MAX 100
void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap vao phan tu mang la: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\n So phan tu khong hop le. Vui long nhap lai !");
        }
    }
    while(n <= 0 || n > MAX);
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
void Min(float a[], int n)
{
	for(int i=0; i<0; i++)
	{
		printf("Nhap vao phan tu a[%d]:", i);
		scanf("%d", &a[i]);
	}
}
int min(int a[], int n)
{
	int min= a[0];
	for(int i=1; i<n; i++)
	if(min>a[i])
	   min=a[i];
	return min;
}
int main()
{
	int a[100];
	int n;
	nhap(a, n);
	xuat(a, n);
	printf("\n Phan tu nho nhat =%d", min(a, n));
	return 0;
}
