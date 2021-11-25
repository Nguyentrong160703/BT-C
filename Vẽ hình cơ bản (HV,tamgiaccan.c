#include<stdio.h>
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
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("---Hinh vuong---\n");
	veHinhVuong(n);
	printf("---Tam giac can---\n");
	veTamGiac1(n);
	printf("---Tam giac can nguoc---\n");
	veTamGiac2(n);
	}

	
