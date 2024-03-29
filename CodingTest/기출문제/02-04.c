#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> // strlen(), strcat()

//words 그냥 문자열이 들어가 있는 것
//5개이상의 문자열만 걸러서 넣는다
char* solution(char* words[], int words_len) {
    // 단어의 갯수 최대 100개 X 한 단어당 10개 + '\0' 공간 1개
    // 동적할당 못하겠으면 이렇게 풀 것
	//char answer[1001] = "";
    
    //메모리 공간 1001개 동적할당
    char* answer = malloc(1001 * sizeof(char));

    //모든 공간을 0으로 초기화
    for (int i = 0; i < 1001; i++)
        answer[i] = 0;

    // words[0]이 5글자 이상이면
    for (int i = 0; i < words_len; i++) {
        if (strlen(words[i]) >= 5) {
            strcat(answer, words[i]);
        }
    }
    //answer에 아무 글자도 없을때, answer는 "empty"가 된다
    if (strlen(answer) == 0) {
        strcat(answer, "empty");
    }
	return answer;
}
int main() {
    char* words1[5] = { "my", "favorite", "color", "is", "violet" };
    int words_len1 = 5;
    char* ret1 = solution(words1, words_len1);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

    char* words2[3] = { "yes", "i", "am" };
    int words_len2 = 3;
    char* ret2 = solution(words2, words_len2);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}