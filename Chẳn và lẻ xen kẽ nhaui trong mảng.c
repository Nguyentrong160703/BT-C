#include<conio.h>
#include<stdio.h>
void swap(int& a,int& b);
int main()
{
    int i,j,k=0,n,m=0,a[20],c[20],l[20],sc,p[20];
    printf ("Nhap so phan tu cua mang A: ");
    scanf ("%d", &n);
    for (i=0;i<n;i++)
    {
        printf ("A[%d] = ", i);
        scanf ("%d", &a[i]);
    }
    for (i=0;i<n;i++)
        if (a[i]%2==0)
        {
                     c[k]=a[i];
                     k++;
        }
        else
        {
                     l[m]=a[i];
                     m++;
        }
    for (i=0;i<k-1;i++)
    for (j=i+1;j<k;j++)
        if (c[i]>c[j])
        { 
			swap(c[i],c[j]);
        }
    for (i=0;i<m-1;i++)
    for (j=i+1;j<m;j++)
        if (l[j]<l[i])
        { 
           swap(l[j],l[i]);
        }    
    if (m==0)
    {
     printf ("\nMang ket qua la : \n");
     for (i=0;i<k;i++)
     printf ("%3d", c[i]);
    }
    else
        if (k==0)
        {
           printf ("\nMang ket qua la : \n");
           for (i=0;i<m;i++)
           printf ("%3d", l[i]);
        }
        else
         {        
           if (k>m)
              {
                   sc=m;
                   j=0;
                   for (i=0;i<sc;i++)
                       {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                           p[j]=c[i];
                           p[j+1]=l[i];
                           j=j+2;
                       }
                   for (i=sc;i<k;i++)
                   p[j]=c[i];
              }
           else
                {
                   sc=k;
                   j=0;
                   for (i=0;i<sc;i++)
                   {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
                          p[j]=c[i];
                          p[j+1]=l[i];
                          j=j+2;
                   }
                   for (i=sc;i<m;i++)
                   p[j]=l[i]; 
               }
			                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
           
        }
	printf ("\n Mang ket qua: \n"); 
	for (i=0;i<k+m;i++)
        printf ("%6d", p[i]);
    getch();
    return 0;
}
void swap(int& a,int& b)
{
	int temp=a;
	a=b;
	b=a;
}
