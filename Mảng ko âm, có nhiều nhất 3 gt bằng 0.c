//Còn mục có nhiều nhất 3 giá trị bằng không chưa làm
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, n,a[50],s=0;
    printf("Nhap vao so phan tu ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    	printf ("a[%d]= ",i);scanf ("%d",&a[i]);
    }
// Xoa tat ca cac so am trong day
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
         {    
            for(j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            n=n-1;
        }
    }
    printf("\n Day so sau khi xoa la:");
    for(i=0;i<n;i++)
    {
        printf("%4d", a[i]);
    }
    getch();
}
 
