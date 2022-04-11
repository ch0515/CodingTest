#include <stdio.h>

int main(void)
{
	int arr[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	// idx는 0부터 시작
	for (int i = 1; i <= 12; i++)
	{
		printf("%d ", arr[i]);
	}
}