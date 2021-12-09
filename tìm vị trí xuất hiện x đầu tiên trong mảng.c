# include <stdio.h>
# include <conio.h>
 
void nhap_mang(int a[],int n)
    {
        for (int i=0;i<n;i++)
            {
                printf("\n Nhap a[%d]: ",i);
                scanf("%d",&a[i]);
            }
    }
int tim_vi_tri(int a[],int n, int x)
    {
        for (int i=0;i<n;i++)
            if (a[i]==x) return i;
        return 0;
    }
int main(void)
    {

        int x,n,a[100];
        printf("\n Nhap n: ");
        scanf(" %d",&n);
        printf("\n Nhap x: ");
        scanf(" %d",&x);
        nhap_mang (a,n);
        int temp=tim_vi_tri(a,n,x);
        if (temp)
            printf ("\n vi tri dau tien cua %d trong mang la : a[%d]", x,temp);
        else
            printf ("\n ko co ");
        getch();
    }
