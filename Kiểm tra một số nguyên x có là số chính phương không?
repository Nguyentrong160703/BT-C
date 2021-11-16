// Kiểm tra một số nguyên x có là số chính phương không?
#include <stdio.h>
#include <math.h>
int Sobinhphuong(int n){
    int so = 0;
    int i = 0;
    while(i <= n){
        if( pow( i, 2) == n ) {   
            so = 1;
            break; 
        }
        i++;
    }
    return so;
}
int main(void){
    int n;

    printf("nhap mot so tu nhien: ");
    scanf("%d",&n);

    int kq = Sobinhphuong(n);
 
    if( kq == 1 ) printf("%d la so chinh phuong\n", n);
    else printf("%d khong phai la so chinh phuong\n", n);
    return 0;
}
