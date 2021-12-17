#include<stdio.h>
void tuoihs(int tuoi)
{
	if (tuoi >= 16)
	{
		printf("+) Tuoi cua hoc sinh la %d tuoi.", tuoi);
		printf("\n+) Hoc sinh du tuoi vao lop 10!\n");
	}
	else
	{
		printf("+) Tuoi cua hoc sinh la %d tuoi.", tuoi);
		printf("\n+) Hoc sinh khong du tuoi vao lop 10!\n");
	}
}
int main()
{

	int tuoi;
	printf("Nhap tuoi hoc sinh : "); scanf_s("%d", &tuoi);
	tuoihs(tuoi);
	return 0;
}