                         /* MỘT SỐ BÀI TOÁN VỀ MA TRẬN */
#include<stdio.h>
#include<string.h>
#include<math.h>

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
/*8. HOÁ VỊ 2 CỘT/2 DÒNG TRONG MA TRẬN*/
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