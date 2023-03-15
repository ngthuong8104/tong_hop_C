// Bài 35: Tìm mảng con dài nhất liên tiếp không giảm
#include <stdio.h>
int n, a[100];

// function enterArray
void enterArray(int x[], int& n)
{
	do
	{
		printf("Enter Element n(0<n<=100) : ");
		scanf_s("%d", &n);
	} while (n <= 0 || n > 100);
	for (int i = 0; i < n; i++)
	{
		printf(" Enter Element [%d] : ", i);
		scanf_s("%d", &x[i]);
	}
}

// function printArray
void printArray(int x[], int n)
{
	printf("Values Array : ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", x[i]);
	}
}
// funtion searchMax
int searchMax(int x[], int n)
{
	int max = x[0];
	for (int i = 0; i < n; i++)
	{
		if (x[i] > max)
		{
			max = x[i];
		}
	}
	return max;
}
// function longestIncrementingSubarray
int longestIncrementingSubarray(int x[], int n)
{
	int b[100];
	for (int i = 0; i < n; i++)
	{
		b[i] = 1;
	}
	for (int i = n - 1; i > 0; i--)
	{
		if (x[i] > x[i - 1])
		{
			b[i - 1] = b[i] + 1;
		}
	}
	// function call printArray
	printf("\n");
	printArray(b, n);

	int quantity = searchMax(b, n);
	for (int i = 0; i < n; i++)
	{
		if (b[i] == quantity)
		{
			printf("\nLongest Non-Decreasing Subarray : ");
			for (int j = i; j < quantity + i; j++)
			{
				printf("%d ", x[j]);
			}
		}
	}
	return 0;    //===============================chu y==================
}
int main()
{
	// function call
	enterArray(a, n);
	printArray(a, n);
	longestIncrementingSubarray(a, n);
	return 0;
}