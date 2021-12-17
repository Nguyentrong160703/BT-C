#include <stdio.h>
#include<conio.h>
void hoahongnhanduoc(int doanhso)
{
    float hoahong;
    if (doanhso <= 100000000)
    {
        hoahong = (float)doanhso * 5 / 100;
        printf("\n+) Thi hoa hong nhan duoc la %.0f VND\n",hoahong);
    }
    else if (doanhso <= 300000000)
    {
        hoahong = (float)doanhso * 10 / 100;
        printf("\n+) Thi hoa hong nhan duoc la %.0f VND\n", hoahong);
    }
    else if (doanhso > 300000000)
    {
        hoahong = (float)doanhso * 20 / 100;
        printf("\n+) Thi hoa hong nhan duoc la %.0f VND\n", hoahong);
    }
}
int main()
{
    int doanhso;
    float hoahong = 0.0;
    printf("Nhap gia tri tong doanh so ban hang: ");
    scanf_s("%d", &doanhso);
    printf("+) Voi tong doanh so la %d VND", doanhso);
    hoahongnhanduoc(doanhso);
}
