#include <stdio.h>

int main() {
    int i, j, k, space;

    // �Ƕ�̵� ���� ����
    int height = 5;

    for (i = 1; i <= height; i++) {
        // ���� ���
        for (space = 1; space <= height - i; space++) {
            printf(" ");
        }

        // ��ǥ ���
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // �� �ٲ�
        printf("\n");
    }

    return 0;
}
