#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 1 ������ ���� �Ҽ��� �ƴ�
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // ������ �������� �Ҽ��� �ƴ�
        }
    }

    return 1; // ������ �������� ������ �Ҽ�
}

int main() {
    int num;

    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("It is a prime number.\n");
    }
    else {
        printf("It is not a prime number.\n");
    }

    return 0;
}

//�ȵ� ���� �Ӽ� - SDL�˻� �ƴϿ� ���� - Ȯ��