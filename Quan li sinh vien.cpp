//Quản lí sinh viên
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100
struct Hocvien{
	char HoTen[50];
	char Maso[30];
	float dtb;
	int Tuoi;
};
typedef Hocvien HV;
void Nhapthongtin(HV hv[], int &n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("\n Thong tin sinh vien %d", i);
		fflush(stdin);
		printf("\n Nhap Ho va ten hoc vien: "); gets(hv[i].HoTen);
		printf("\n Nhap MSSV: "); gets(hv[i].Maso);
		printf("\n Nhap diem trung binh cua hoc vien: "); scanf("%f", &hv[i].dtb);
		printf("\n Nhap tuoi: "); scanf("%d", &hv[i].Tuoi);
	}
}
void Xuathocvien(HV hv[], int &n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("\n Ho va ten: %s", hv[i].HoTen);
		printf("\t MSSV: %s", hv[i].Maso);
		printf("\t Diem trung binh: %.2f", hv[i].dtb);
		printf("\t Tuoi: %d", hv[i].Tuoi);
	}
}
void TBMax(HV hv[], int &n)
{
	int max=0, sv=1;
	for (int i = 1; i <= n; i++)
	{
		if(hv[i].dtb > max)
		{
			max = hv[i].dtb;
			sv = i;
		}
	}
	printf("\n Hoc vien co diem trung binh cao nhat la: ");
	printf("\n Ho va ten: %s", hv[sv].HoTen);
	printf("\t MSSV: %s", hv[sv].Maso);
	printf("\t Diem trung binh : %.2f", hv[sv].dtb);
	printf("\t Tuoi: %d", hv[sv].Tuoi);
}
void TuoiMax(HV hv[], int &n)
{
	int max = 0;
	for (int i = 1; i <= n; i++)
	{
		if (hv[i].Tuoi > max)
		{
			max = hv[i].Tuoi;
		}
	}
	printf("\n %d la tuoi lon nhat trong cac hoc vien", max);
}
void Sapxep(HV hv[], int &n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = i+1; j <= n; j++)
		{
			if (hv[i].dtb > hv[i].dtb)
			{
				HV temp = hv[i];
				hv[i] = hv[j];
				hv[j] = temp;
			}
		}
	}
	printf("\n Sap xep hoc vien theo diem trung binh tang dan: ");
	for (int i = 1; i <= n; i++)
	{
		printf("\n Ho va ten: %s", hv[i].HoTen);
		printf("\t MSSV: %s", hv[i].Maso);
		printf("\t Diem trung binh : %.2f", hv[i].dtb);
		printf("\t Tuoi: %d", hv[i].Tuoi);
	}
}
void Timkiem(HV hv[], int &n)
{
	char found[50];
	printf("\n Nhap ten can tim: "); fflush(stdin); gets(found);
	for (int i = 1; i <= n; i++)
	{
		if (hv[i].HoTen==found)
		{
			printf("\n Ho va ten: %s", hv[i].HoTen);
			printf("\t MSSV: %s", hv[i].Maso);
			printf("\t Diem trung binh : %.2f", hv[i].dtb);
			printf("\t Tuoi: %d", hv[i].Tuoi);
		}
	}
}
void SapxepTuoi(HV hv[], int &n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = i+1; j <= n; j++)
		{
			if (hv[i].Tuoi > hv[i].Tuoi)
			{
				HV temp = hv[i];
				hv[i] = hv[j];
				hv[j] = temp;
			}
		}
	}
	printf("\n Sap xep hoc vien theo diem trung binh tang dan: ");
	for (int i = 1; i <= n; i++)
	{
		printf("\n Ho va ten: %s", hv[i].HoTen);
		printf("\t MSSV: %s", hv[i].Maso);
		printf("\t Diem trung binh : %.2f", hv[i].dtb);
		printf("\t Tuoi: %d", hv[i].Tuoi);
	}
}
int main()
{
	HV hv[100];
	int n;
	printf("\n Nhap vao so luong sinh vien: "); scanf("%d", &n);
	Nhapthongtin(hv, n);
	Xuathocvien(hv, n);
	TBMax(hv, n);
	TuoiMax(hv, n);
	Sapxep(hv, n);
	Timkiem(hv, n);
	SapxepTuoi(hv, n);
	getch();
}
