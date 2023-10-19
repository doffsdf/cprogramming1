#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 재귀 함수를 사용하여 정수를 2진수로 변환하여 출력하는 함수
void intToBinary(int n) {
    if (n == 0) {
        return; // 재귀 종료 조건: n이 0이면 반환
    }

    intToBinary(n / 2); // n을 2로 나눔
    printf("%d", n % 2); // 나머지 출력
}

int main() {
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("음수는 처리할 수 없습니다.\n");
    }
    else if (num == 0) {
        printf("0\n");
    }
    else {
        intToBinary(num);
        printf("\n");
    }

    return 0;
}
