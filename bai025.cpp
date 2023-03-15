// Bài 25: Viết hàm nhập xuất mảng 
#include <stdio.h>
// nhap mang
void Nhap_Mang(int n, int a[])
{
	for (int i = 0; i < n; i++)
	{
		printf(" nhap a[%d] : ", i);
		scanf_s("%d", &a[i]);
	}
}
// xuat mang
void Xuat_Mang(int n, int a[])
{
	printf("mang vua nhap la : ");
	for (int i = 0; i < n; i++)
	{
		printf("\t%d", a[i]);
	}
}
int main()
{
	int n, a[100];
	do
	{
		printf("nhap phan tu n(0<n<=100) : ");
		scanf_s("%d", &n);
	} while (n < 0 || n>100);
	// goi ham 
	Nhap_Mang(n, a);
	Xuat_Mang(n, a);
	return 0;
}