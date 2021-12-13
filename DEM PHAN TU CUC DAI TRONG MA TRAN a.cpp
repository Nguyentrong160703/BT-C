#include<stdio.h>
#include<math.h>
#define MAX 100

void NhapMang(int a[][MAX], int& dong, int& cot)
{
	do
	{
		printf("\nNhap vao so dong: "); scanf_s("%d", &dong);
		if (dong < 1 || dong > MAX)
		{
			printf("\nSo dong khong hop le. Xin kiem tra lai!");
		}
	} while (dong < 1 || dong > MAX);
	do
	{
		printf("Nhap vao so cot: "); scanf_s("%d", &cot);
		if (cot < 1 || cot > MAX)
		{
			printf("\nSo cot khong hop le. Xin kiem tra lai!");
		}
	} while (cot < 1 || cot > MAX);
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			float index;
			printf("Nhap a[%d][%d] = ", i, j); scanf_s("%f", &index);
			a[i][j] = index;
		}
	}
}
void XuatMang(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n\n");
	}
}
int KiemTraPhanTuCucDai(int a[][MAX], int sodong, int socot, int dong, int cot)
{
	int jafirst = 1; 
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			if (dong + i >= 0 && cot + j >= 0 && dong + i < sodong && cot + j < socot && !(i == 0 && j == 0))
			{
				if (a[dong][cot] <= a[dong + i][cot + j])
				{
					jafirst = 0;
				}
			}
		}
	}
	return jafirst;
}
void DemSoPhanTuCucDai(int a[][MAX], int sodong, int socot)
{
	int dem = 0;
	printf("\nCac phan tu cuc dai la: \n");
	for (int i = 0; i < sodong; i++)
	{
		for (int j = 0; j < socot; j++)
		{
			if (KiemTraPhanTuCucDai(a, sodong, socot, i, j) == 1)
			{
				printf("\n%4d", a[i][j]);
				dem++;
			}
		}
	}
	printf("\nSo phan tu cuc dai = %d", dem);
}
int main()
{
	int a[MAX][MAX];
	int dong, cot;
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);
	DemSoPhanTuCucDai(a, dong, cot);
	return 0;
}