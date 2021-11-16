// kiểm tra một số nguyên x có là số hoàn thiện không?
#include <stdio.h>
int so_hoan_hao(int n){
    int so = 0, toan_bo=0;
    for (int i=1;i<n; i++){
         if (n % i == 0) toan_bo+=i;
    }
    if (toan_bo == n & n!=0) so = 1;

    return so;
}
int main(void){
    int n;
 
    printf("nhap mot so tu nhien: ");
    scanf("%d",&n);

    int kq = so_hoan_hao(n);
 
    if( kq == 1 ) printf("%d la so hoan hao\n", n);
    else printf("%d khong phai la so hoan hao\n", n);
    return 0;
}
