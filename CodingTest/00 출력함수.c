#include <stdio.h>
int main(void) {
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;
	//���� ���� ���� 11�� , �迭�� ���̴� 11+1 (�ι���) = 12 ��Ģ.., ���� ���� �ι��ڰ� �� ������
	char mjyeol[12] = "Hello World";

	printf("���� %d, ���� %c, ���� %lf, �÷� %f\n", jungsu, munja, sosu, sosu1);
	printf("%s\n", mjyeol);
}