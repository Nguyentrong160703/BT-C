#include <stdio.h>
#include <conio.h>
void NhapMang(int a[], int &n);
void TBC(int a[], int n);
int main()
{
    int a[100], n;
    NhapMang(a, n);
    TBC(a, n);
}
void NhapMang(int a[], int &n)
{
    printf("nhap so phan tu mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nnhap phan thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
void TBC(int a[], int n)
{
    int tong = 0;
    float tbc;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    tbc = (float)tong / n;
    printf("\ntrung binh cong cua mang la : %.2f ", tbc);
}
Tới:
