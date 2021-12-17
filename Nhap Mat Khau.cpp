#include <stdio.h>
#include <string.h>

int main() 
{
    char username[] = "jafirst167";
    char passwrod[] = "16072003";
    char user[50], pass[50];
    int count = 0; // đếm số lần đăng nhập
    do {
        if (count > 0) printf("\n\tusername or passwrod incorrect!\n\tPlease re-enter!\n");
        printf("Enter your username: ");
        gets_s(user);
        printf("Enter your password: ");
        gets_s(pass);
        count++;
    } while (strcmp(user, username) != 0 || strcmp(pass, passwrod) != 0);
    printf("Login success!\n");
    return 0;
}