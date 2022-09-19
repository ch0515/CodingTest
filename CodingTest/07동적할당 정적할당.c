#include <stdio.h>

// 동적할당 : 메모리 할당 크기가 실행시간(runtime)에 결정
// 정적할당 : 메모리 할당 크기가 컴파일시간에 결정

int main(void) {
	char str[10]; // 정적할당 10바이트 할당이 명확함
	int num;
	scanf("%d", &num);

	// 동적할당 num의 입력값에 따라 크기가 달라짐
	char* str2 = malloc(sizeof(char) * num);// 동적할당
	//할당된 공간 늘리기 불가
}