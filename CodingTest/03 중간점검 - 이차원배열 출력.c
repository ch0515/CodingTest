#include <stdio.h>
int main(void)
{	
    /*int num[3][4] = {
    { 1,2,3,4 },
    { 5,6,7,8 },
    { 8,9,10,11 }
    };
    int col = sizeof(num[0]) / sizeof(int);
    int row = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }*/
    // ���ڿ��� ���̸� ���Ͻÿ�
    char str[30] = "Hello";
    int length = 0; //���ڿ��� ����

    for (int i = 0; str[i] != '\0'; i++) { //sizeof(str) for(�ʱ��     ���ǹ�      ������)

            length ++ ;
        
    }
    printf("���̴� %d", length);
    return 0;
}