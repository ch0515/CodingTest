#include <stdio.h>
/*void getMax(int* arr, int length) {
	int temp = -1;
	int idx = 99; // �ε��� ��
	for (int i = 0; i < length; i++) {

		if (arr[i] > temp) {
			temp = arr[i];
			idx = i;
		}
	}
	printf("���� :%d, �ε��� ���� : %d\n", temp, idx);
}*/
int main(void)
{	
	int arr1[10] = { 8,5,1,6,4,9,10,7,11,14 };
	//getMax(arr1,10);
	//�Լ��� ������� ���� �ּҰ��� �� idx�� ���غ���.
	int temp = -1;
	int idx = 99;
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		if (arr1[i] > temp) {
			temp = arr1[i];
			idx = i;
		}
	}
	printf("�ּҰ��� %d, �ε��� ���� %d\n", temp, idx);
	/*int idx = 0;
	int temp = 10;
	for (int i = 0; i < 10; i++) {
		if (arr1[i] < temp) {
			temp = arr1[i];
			idx = i;
		}
	}
	printf("�ּ� ���� :%d, �ε��� ���� : %d\n", temp, idx);*/
	/*int temp2 = 1;
	int idx2 = 10;
	for (int i = 0; i < 10; i++) {
		if (arr1[i] < temp2) {
			temp2 = arr1[i];
			idx2 = i;
		}
	}
	printf("���� :%d, �ε��� ���� : %d\n", temp2, idx2);*/
	return 0;
}