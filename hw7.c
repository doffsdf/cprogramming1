#include <stdio.h>

int main() {
    // ���̰� 6�� int�� �迭 ���� �� �ʱ�ȭ
    int arr1[] = { 1, 2, 3, 4, 5, 6 };
    int arr2[] = { 7, 8, 9, 10, 11, 12 };

    // ������ ���� ���� �� �ʱ�ȭ
    int* ptr1 = arr1;
    int* ptr2 = arr2;

    // �迭�� ���� �ڹٲ�
    for (int i = 0; i < 6; i++) {
        // �ӽ� ������ ����Ͽ� �� ��ȯ
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        // ���� ���ҷ� �̵�
        ptr1++;
        ptr2++;
    }

    // ��� ���
    printf("arr1: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\narr2: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }

    // ���� �ڹٲ� ���� ��� ���
    printf("\nafter swap\n");
    printf("arr1: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\narr2: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
