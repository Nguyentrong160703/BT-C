#include <stdio.h>
#include <conio.h>
void KiemTra(int *a, int i)
{
    int j;
    for (j=0;j<i;j++)
    {
        while (a[i]==a[j])
        {
            printf ("Nhap lai gia tri a[%d]= ",i);scanf ("%d",&a[i]);
            KiemTra(a, i);             
        }
    }
}
int main()
{
    int j,n, i, a[100];
    printf ("Nhap vao so phan tu cua mang ");scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        printf ("a[%d]= ",i);scanf ("%d",&a[i]);
        KiemTra(a, i); 
    }
    printf("Mang ban vua nhap : \n");
    for (i=0;i<n;i++)
    {
        printf ("%d  ",a[i]);
    }
    getch();
    return 0;
}
