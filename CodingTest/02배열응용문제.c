#include <stdio.h>
void getMax(int* arr,int length) {
	int temp = -1;
	int idx = 99; // �ε��� ��
	for (int i = 0; i < length; i++) {

		if (arr[i] > temp) {
			temp = arr[i];
			idx = i;
		}
	}
	printf("���� :%d, �ε��� ���� : %d\n", temp, idx);
}
int main(void)
{	
	int arr1[10] = { 8,5,1,6,4,9,10,7,11,14 };
	getMax(arr1,10);

	return 0;
}