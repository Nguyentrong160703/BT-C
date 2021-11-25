#include<stdio.h>
int noiTiep(int R1, int R2)
{
	return R1+R2;
	}
int songSong(int R1,int R2)
{
	return (R1*R2)/(R1+R2);
	}
int TongDienTro(int R1,int R2,int R3)
{
	return songSong(R1,R2)+R3;
	}
int main()
{
	int R1,R2,R3;
	printf("R1: "); scanf("%d",&R1);
	printf("R2: "); scanf("%d",&R2);
	printf("R3: "); scanf("%d",&R3);
	printf("Noi tiep: %d", noiTiep(R1,R2));
	printf("\nSong song: %d", songSong(R1,R2));
	printf("\nTong Rtd: %d",TongDienTro(R1,R2,R3));
	return 0;
}
