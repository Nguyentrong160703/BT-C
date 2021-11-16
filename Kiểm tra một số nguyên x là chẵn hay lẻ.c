// Kiểm tra môt số nguyên x là chẵn hay lẻ?
#include <stdio.h>
int kiemtraso(int x){
    int flag = 1;
    if( x % 2 == 0 ) flag= 0;
    return flag;  
}
int main(void){
    printf("Nhap so nguyen= ");
    int n;
    scanf("%d",&n);
    int check = kiemtraso(n);
    if( check == 0 ) printf("%d la so chan\n", n);
    else printf("%d la so le\n", n);
    return 0;
}
