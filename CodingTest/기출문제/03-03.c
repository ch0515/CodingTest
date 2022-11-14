#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len) {
	int answer = 0;
    int max = -1;// 매개변수 설명에서 0 ~ 100
    int min = 101;
	// 모든 값을 더한다
    for (int i = 0; i < scores_len; i++) {
        answer += scores[i];
    }
    // 모든 값의 최대값과 최소값을 뺀다
    for (int i = 0; i < scores_len; i++) {
        if (max < scores[i])
            max = scores[i];
        if (min > scores[i])
            min = scores[i];
    }
   // answer = answer - min - max;
    // 값의 개수 - 2를 나눈다
    
	return (answer-min-max) / (scores_len-2);
}
int main() {
    int scores1[10] = { 35, 28, 98, 34, 20, 50, 85, 74, 71, 7 };
    int scores1_len = 10;
    int ret1 = solution(scores1, scores1_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int scores2[5] = { 1, 1, 1, 1, 1 };
    int scores2_len = 5;
    int ret2 = solution(scores2, scores2_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}