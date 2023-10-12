#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 1 이하의 수는 소수가 아님
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // 나누어 떨어지면 소수가 아님
        }
    }

    return 1; // 나누어 떨어지지 않으면 소수
}

int main() {
    int num;

    printf("양의 정수를 입력하세요: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("It is a prime number.\n");
    }
    else {
        printf("It is not a prime number.\n");
    }

    return 0;
}

//안될 때는 속성 - SDL검사 아니요 적용 - 확인