#include <stdio.h>
#include <string.h>
int main(void) {
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;
	//문자 띄어쓰기 포함 11개 , 배열의 길이는 11+1 (널문자) = 12 규칙.., 문자 끝엔 널문자가 꼭 들어가야함
	char mjyeol[12] = "Hello World";
	printf("정수 %d, 문자 %c, 더블 %lf, 플롯 %f\n", jungsu, munja, sosu, sosu1);
	//printf("%s\n", mjyeol);
	for (int i = 0; i < strlen(mjyeol); i++) {
		printf("%c", mjyeol[i]);
	}
	/*printf("%c", mjyeol[0]); // 'H'
	printf("%c", mjyeol[1]); // 'e'
	printf("%c", mjyeol[2]); // 'l'
	printf("%c", mjyeol[3]); // 'l'
	printf("%c", mjyeol[4]); // 'o'
	printf("%c", mjyeol[5]); // ' '
	printf("%c", mjyeol[6]); // 'w'
	printf("%c", mjyeol[7]); // 'o'
	printf("%c", mjyeol[8]); // 'r'
	printf("%c", mjyeol[9]); // 'l'
	printf("%c", mjyeol[10]); // 'd'
	printf("%c", mjyeol[11]); // 널문자*/
}