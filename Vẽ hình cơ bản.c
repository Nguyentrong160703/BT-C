#include<stdio.h>
//Ve hinh vuong
void veHinhVuong (int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("*");
		}
		printf("\n");
	}
}
void veTamGiac1(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
			printf("*");
		}
		printf("\n");
	}
}
void veTamGiac2(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			printf("*");
		}
		printf("\n");
	}
}
void veTamGiac3(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			printf(" ");
			}
		for(int j=0; j<n-i; j++){
			printf("*");
		}
		printf("\n");
	}
}
void veTamGiac4(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			printf(" ");
			}
		for(int j=0; j<i+1; j++){
			printf("*");
		}
		printf("\n");
	}
}
void veTamGiac5(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			printf(" ");
			}
		for(int j=0; j<2*i+1; j++){
			printf("*");
		}
		printf("\n");
	}
}
void veTamGiac6(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			printf(" ");
			}
		for(int j=0; j<2*(n-i)-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
//Tam giac can rong, do cao h
void TamGiacCanRong(int n)
{
	int k=n-1;
	for(int i=0; i<=n-1;i++){
		for(int j=0;j<=2*n-1;j++){
		if(j==k-i || j==k+i)
			printf(" * ");
		else
			printf("   ");
			}
		printf("\n");
		}
	for(int i=0; i< 2*n-1;i++)
		printf(" * ");
}
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("---Hinh vuong---\n");
	veHinhVuong(n);
	printf("---Tam giac can 1---\n");
	veTamGiac1(n);
	printf("---Tam giac can 2---\n");
	veTamGiac2(n);
	printf("---Tam giac can 3---\n");
	veTamGiac3(n);
	printf("---Tam giac can 4---\n");
	veTamGiac4(n);
	printf("---Tam giac can 5---\n");
	veTamGiac5(n);
	printf("---Tam giac can 6---\n");
	veTamGiac6(n);
	printf("---Tam Giac Can Rong---\n");
	TamGiacCanRong(n);
	}
}
void veTamGiac4(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			printf(" ");
			}
		for(int j=0; j<i+1; j++){
			printf("*");
		}
		printf("\n");
	}
}
void veTamGiac5(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			printf(" ");
			}
		for(int j=0; j<2*i+1; j++){
			printf("*");
		}
		printf("\n");
	}
}
void veTamGiac6(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			printf(" ");
			}
		for(int j=0; j<2*(n-i)-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("---Hinh vuong---\n");
	veHinhVuong(n);
	printf("---Tam giac can 1---\n");
	veTamGiac1(n);
	printf("---Tam giac can 2---\n");
	veTamGiac2(n);
	printf("---Tam giac can 3---\n");
	veTamGiac3(n);
	printf("---Tam giac can 4---\n");
	veTamGiac4(n);
	printf("---Tam giac can 5---\n");
	veTamGiac5(n);
	printf("---Tam giac can 6---\n");
	veTamGiac6(n);
}
