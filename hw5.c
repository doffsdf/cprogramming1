#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��� �Լ��� ����Ͽ� ������ 2������ ��ȯ�Ͽ� ����ϴ� �Լ�
void intToBinary(int n) {
    if (n == 0) {
        return; // ��� ���� ����: n�� 0�̸� ��ȯ
    }

    intToBinary(n / 2); // n�� 2�� ����
    printf("%d", n % 2); // ������ ���
}

int main() {
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("������ ó���� �� �����ϴ�.\n");
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
