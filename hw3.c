#include <stdio.h>

int main() {
    int i, j, k, space;

    // 피라미드 높이 설정
    int height = 5;

    for (i = 1; i <= height; i++) {
        // 공백 출력
        for (space = 1; space <= height - i; space++) {
            printf(" ");
        }

        // 별표 출력
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // 줄 바꿈
        printf("\n");
    }

    return 0;
}
