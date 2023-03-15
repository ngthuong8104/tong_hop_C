// Bài 44 : Kiểm tra mảng đối xứng qua đường 
// chéo chính hay đường chéo phụ
#include <stdio.h>
// khai bao bien, mang
int n, a[100][100];
// ham nhap mang 
void nhapMang(int x[][100], int& n)
{
	do
	{
		// n: so luong phan tu dong, cot
		printf("\nNhap n = ");
		scanf_s("%d", &n);
	} while (n <= 0 || n > 100);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf(" Nhap [%d][%d] : ", i, j);
			scanf_s("%d", &x[i][j]);
		}
	}
}
// ham xuat mang
void xuatMang(int x[][100], int n)
{
	printf("\nMang : \n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("\t%d", x[i][j]);
		}
		printf("\n");
	}
}
// ham kiem tra mang doi xung qua duong cheo chinh
int mangDoiXungQuaDuongCheoChinh(int x[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (x[i][j] != x[j][i])
				{
					return 0;
				}
			}
		}
	}
	return 1;
}
// ham kiem tra mang doi xung qua duong cheo phu
int mangDoiXungQuaDuongCheoPhu(int x[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (x[i][j] != x[n - 1 - j][n - 1 - i])
				{
					return 0;
				}
			}
		}
	}
	return 1;
}
int main()
{
	// goi ham
	nhapMang(a, n);
	xuatMang(a, n);
	printf((mangDoiXungQuaDuongCheoChinh(a, n) ? "\nMang Doi Xung Qua Duong Cheo Chinh"
		: "\nMang Khong Doi Xung Qua Duong Cheo Chinh"));
	printf((mangDoiXungQuaDuongCheoPhu(a, n) ? "\nMang Doi Xung Qua Duong Cheo Phu"
		: "\nMang Khong Doi Xung Qua Duong Cheo Phu"));
	return 0;
}