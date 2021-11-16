#include<stdio.h>
#include<math.h>
int a[100],n;
void nhapxuat()
{
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=0; i<n;i++){
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void timkiemam(){
	int maxam=0;
	for(int i=0; i<n;i++)
	if (a[i]<0){
		maxam=a[i];
		break;
		}
	if(maxam!=0){
		for(int i=0; i<n;i++)
	if (a[i]<0 && a[i]>maxam)
		maxam=a[i];
		printf("\nPhan tu am lon nhat trong mang la: %d", maxam);
		}
	else
		printf("\nPhan tu khong xuat hien so am!");
		}
void timkiemduong(){
	int minduong=0;
	for(int i=0; i<n;i++)
	if (a[i]>0){
		minduong=a[i];
		break;
		}
	if(minduong!=0){
		for(int i=0; i<n;i++)
	if (a[i]>0 && a[i]<minduong)
		minduong=a[i];
		printf("\nPhan tu duong nho nhat trong mang la: %d ", minduong);
		}
	else
	printf("\Phan tu khong xuat hien so duong!");
}
int main(){
	nhapxuat();
	timkiemam();
	timkiemduong();
	return 0;
}
