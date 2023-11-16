#include <stdio.h>

int main() {
    // 길이가 6인 int형 배열 선언 및 초기화
    int arr1[] = { 1, 2, 3, 4, 5, 6 };
    int arr2[] = { 7, 8, 9, 10, 11, 12 };

    // 포인터 변수 선언 및 초기화
    int* ptr1 = arr1;
    int* ptr2 = arr2;

    // 배열의 값을 뒤바꿈
    for (int i = 0; i < 6; i++) {
        // 임시 변수를 사용하여 값 교환
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        // 다음 원소로 이동
        ptr1++;
        ptr2++;
    }

    // 결과 출력
    printf("arr1: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\narr2: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }

    // 값이 뒤바뀐 후의 결과 출력
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
