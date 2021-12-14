                                            /* MỘT SỐ BÀI TOÁN VỀ MA TRẬN */
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

/*1. HÀM NHẬP MA TRẬN*/
//Cách 1: Nhập m, n trong hàm
void InputMatrix(int a[][20], int& m, int& n)
{
    printf("Nhap so hang m: ");
    scanf_s("%d", &m);
    printf("Nhap so cot n: ");
    scanf_s("%d", &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf_s("%d", &a[i][j]);
        }
}
////Cách 2: Nhập m, n ngoài hàm
//void InputMatrix(int a[][20], int m, int n)
//{
//    for (int i = 0; i < m; i++)
//        for (int j = 0; j < n; j++)
//        {
//            printf("A[%d][%d] = ", i, j);
//            scanf_s("%d", &a[i][j]);
//        }
//}

/*2. HÀM XUẤT MA TRẬN*/
void OutputMatrix(int a[][20], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}
/*3. TÌM GIÁ TRỊ LỚN NHẤT TRONG MA TRẬN*/
int MaxOfMatrix(int a[][20], int m, int n)
{
    int max = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] > max)
                max = a[i][j];
    return max;
}
/*4. TÍNH TỔNG CÁC SỐ CHẴN TRONG MA TRẬN*/
int SumEven(int a[][20], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] % 2 == 0)
                sum += a[i][j];
    return sum;
}
/*5. ĐẾM SỐ NGUYÊN TỐ TRONG MA TRẬN*/
int PrimeMatrix(int a[][20], int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (IsPrime(a[i][j])) dem++;
    return dem;
}
/*6. XOÁ 1 DÒNG HOẶC 1 CỘT TRONG MA TRẬN*/
void DeleteRow(int a[][20], int& m, int n, int indexRow)
{
    for (int i = indexRow; i < m - 1; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = a[i + 1][j];
    m--;
}
void DeleteColumn(int a[][20], int m, int& n, int indexColumn)
{
    for (int i = 0; i < m; i++)
        for (int j = indexColumn; j < n - 1; j++)
            a[i][j] = a[i][j + 1];
    n--;
}
/*7. XOÁ 1 DÒNG VÀ 1 CỘT TRONG MA TRẬN*/
void DeleteRowColumn(int a[][20], int& m, int& n,
    int indexRow, int indexColumn)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (i < indexRow && j >= indexColumn)
                a[i][j] = a[i][j + 1];
            else if (i >= indexRow && j < indexColumn)
                a[i][j] = a[i + 1][j];
            else if (i >= indexRow && j >= indexColumn)
                a[i][j] = a[i + 1][j + 1];
        }
    m--;
    n--;
}
/*8. HOÁN VỊ 2 CỘT/2 DÒNG TRONG MA TRẬN*/
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapRow(int a[][20], int m, int n, int row1, int row2)
{
    if ((row1 >= 0 && row1 < m) && (row2 >= 0 && row2 < m))
        for (int j = 0; j < n; j++)
            swap(a[row1][j], a[row2][j]);
}

void swapColumn(int a[][20], int m, int n, int column1, int column2)
{
    if ((column1 >= 0 && column1 < n) && (column2 >= 0 && column2 < n))
        for (int i = 0; i < m; i++)
            swap(a[i][column1], a[i][column2]);
}
/*9. TÍNH TỔNG CÁC PHẦN TỬ TRÊN BIÊN MA TRẬN*/
int Sum(int a[][20], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += a[i][0];
        sum += a[i][n - 1];
    }
    for (int j = 0; j < n; j++)
    {
        sum += a[0][j];
        sum += a[n - 1][j];
    }
    return sum;
}
/*10. TÌM VÀ XUẤT VỊ TRÍ CỦA PHẦN TỬ LỚN NHẤT TRONG MA TRẬN*/
void IndexOfMax(int a[][20], int m, int n)
{
    int iMax = 0, jMax = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] > a[iMax][jMax])
            {
                iMax = i;
                jMax = j;
            }
}
/*11. TÍNH TỔNG CÁC CÁC PHẦN TỬ TRÊN ĐƯỜNG CHÉO CHÍNH TRONG MA TRẬN VUÔNG*/
       //Đường chéo chính: chỉ số dòng = chỉ số cột
int Sum(int a[][20], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i][i];
    return sum;
}
/*12. TÌM PHẦN TỬ LỚN NHẤT, NHỎ NHẤT TRONG MA TRẬN VUÔNG*/
//Tìm max
int Max(int a[][20], int n)
{
    int max = a[0][0];
    for (int i = 1; i < n; i++)
        if (a[i][i] > max)
            max = a[i][i];
    return max;
}

//Tìm min
int Min(int a[][20], int n)
{
    int min = a[0][0];
    for (int i = 1; i < n; i++)
        if (a[i][i] < min)
            min = a[i][i];
    return min;
}
/*12. TÍNH TỔNG CÁC PHẦN TỬ TRÊN ĐƯỜNG CHÉO PHỤ TRONG MA TRẬN VUÔNG*/
    //Đường chéo phụ: chỉ số dòng + chỉ số cột = số dòng(hoặc số cột)
int Sum(int a[][20], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i][n - 1 - i];
    return sum;
}
//Cách khác
//int Sum(int a[][20], int n)
//{
//    int sum = 0;
//    for (int i = 0, j = n - 1; i < n; i++, j--)
//        sum += a[i][j];
//    return sum;
//}
/*13. KIỂM TRA ĐƯỜNG CHÉO CHÍNH CÓ TĂNG DẦN TỪ TRÊN XUỐNG TRONG MA TRẬN VUÔNG*/
int IsIncreasingDiagonal(int a[][20], int n)
{
    for (int i = 0; i < n - 1; i++)
        if (a[i][i] > a[i + 1][i + 1])
            return 0;
    return 1;
}
/*14. KIỂM TRA MA TRẬN CÓ ĐỐI XƯNG TRONG MA TRẬN VUÔNG*/
    //Ma trận đối xứng là ma trận có các phần tử đối xứng nhau qua đường chéo chính.
int IsSymmetric(int a[][20], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i][j] != a[j][i])
                return 0;
    return 1;
}
/*15. CHUYỂN VỊ TRONG MA TRẬN VUÔNG*/
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Transpose(int a[][20], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            swap(a[i][j], a[j][i]);
}
/*16. NHẬP MA TRẬN NGẪU NHIÊN TỪ 0-500, XUẤT MA TRẬN*/
void nhapdongvacot(int &m, int &n) 
{
    do {
        printf("Nhap so dong va cot: ");
        scanf("%d%d", &m, &n);
        if (m <= 0 && m > 100 || n <= 0 && n > 100)
            printf("Nhap sai, nhap lai");
    } while (m <= 0 && m > 100 || n <= 0 && n > 100);
}
void nhapmatran(int a[][100], int m, int n) 
{
    int min = 0;
    int max = 500;
    srand(time(0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = min + rand() % (max + 1 - min);
        }
    }
}
void xuatmatran(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}
/*17. XUẤT ĐƯỜNG CHÉO CHÍNH*/
void xuatcheochinh(int a[], int n)
{
    printf("Duong cheo chinh: ");
    for (int i = 0; i < n; i++)
        printf("%4d", a[i][i]);
}
/*18. TÍNH TỔNG TAM GIÁC DƯỚI, TAM GIÁC TRÊN TỪ PHẢI QUA TRÁI CỦA ĐƯỜNG CHÉO PHỤ*/
long tamgiacduoi(int a[], int n)
{
    long s = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            s += a[i][j];
        }
    }
    return s;
}
/*19. TÍNH GIÁ TRỊ TRUNG BÌNH CỦA CÁC PHẦN TỬ TRONG MA TRẬN*/
long giatritb(int a[][100], int m, int n) 
{
    long s = 0;
    long tb;
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            s = s + a[i][j];
        }
    }
    tb = s / (m * n);
    return tb;
}
/*20. TÍNH TỔNG MA TRẬN m dòng và n cột*/
long tongmatran(int a[][100], int m, int n) 
{
    long s = 0;
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++)
            s = s + a[i][j];
    }
    return s;
}
/*21. TÍNH TỔNG TỪNG DÒNG TRONG MA TRẬN*/
void tongdong(int a[][100], int m, int n) 
{
    for (int i = 0; i < m; i++) 
    {
        long s = 0;
        for (int j = 0; j < n; j++) 
        {
            s = s + a[i][j];
        }
        printf("\nDong thu % d co tong la : % ld", i, s);
    }
}
/*22. TÍNH TỔNG TỪNG CỘT TRONG MA TRẬN*/
void tongcot(int a[][100], int m, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        long s = 0;
        for (int j = 0; j < m; j++) 
        {
            s = s + a[j][i];
        }
        printf("\nCot thu % d co tong la : % ld", i, s);
    }
}
/*23. TÍNH TỔNG DÒNG K TRONG MA TRẬN*/
void tongdongk(int a[][100], int m, int n, int k = 2) 
{
    for (int i = 0; i < m; i++) 
    {
        long s = 0;
        if (i == k) 
        {
            for (int j = 0; j < n; j++) 
            {
                s = s + a[i][j];
            }
            printf("\nDong thu % d co tong la : % ld", i, s);
        }
    }
}
/*24. TÍNH TỔNG TAM GIÁC ĐƯỜNG CHÉO CHÍNH*/
long Tongtamgiacduoi(int a[][100], int n)
{
    long sum = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1; j++)
            if (i >= j)
                sum = sum + a[i][j];
    return sum;
}
/*25. TÍNH TỔNG TAM GIÁC TRÊN ĐƯỜNG CHÉO CHÍNH*/
long tongtamgiactren(int a[][100], int n)
{
    long tong = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            tong += a[i][j];
        }
    }
    return tong;
}
/*26. TỔNG HAI MA TRẬN*/
int main() 
{
    int i, j, matrix1[100][100]{}, matrix2[100][100]{}, matrix3[100][100]{};
    int row1, col1, row2, col2;

    printf("Cong hai ma tran trong C: \n\n");
    printf("Nhap so hang cua matrix1: ");
    scanf("%d", &row1);
    printf("Nhap so cot cua matrix1: ");
    scanf("%d", &col1);

    printf("Nhap so hang cua matrix2: ");
    scanf("%d", &row2);
    printf("Nhap so cot cua matrix2: ");
    scanf("%d", &col2);

    /*
    * Truoc khi nhap cac phan tu, kiem tra xem so hang va so cot
    * cua hai ma tran co bang nhau khong
    */
    if (row1 != row2 || col1 != col2) {
        printf("\nHai ma tran khong cung kich co!");
        exit(0);
    }

    //Nhap cac phan tu cua ma tran 1
    printf("\nNhap ma tran 1\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf("Nhap phan tu matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    //Nhap cac phan tu cua ma tran 2
    printf("\nNhap ma tran 2\n");
    for (i = 0; i < row2; i++)
        for (j = 0; j < col2; j++) {
            printf("Nhap phan tu matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }

    //Cong hai ma tran
    for (i = 0; i < row1; i++)
        for (j = 0; j < col1; j++) {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }

    //Hien thi ma tran ket qua
    printf("\nKet qua cua phep cong hai ma tran la: \n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
