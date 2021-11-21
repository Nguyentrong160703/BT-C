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
void TongLe(int a[],int n)
{
	int i;
	int s=0;
		for(i=0;i<n;i++)
 		{
			if(a[i]%2!=0)
		{
			s+=a[i];
		}
		}
		printf("\nTong cac phan tu le la: %d.",s);
}
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
    TongLe(a, n);
}
