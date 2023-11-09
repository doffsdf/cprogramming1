#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int numbers[5];
    int odd[5], even[5];
    int oddCount = 0, evenCount = 0;

    // Input
    printf("Please input five integers: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &numbers[i]);
    }

    // Separating odd and even numbers
    for (int i = 0; i < 5; ++i) {
        if (numbers[i] % 2 == 0) {
            even[evenCount++] = numbers[i];
        }
        else {
            odd[oddCount++] = numbers[i];
        }
    }

    // Output
    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; ++i) {
        printf("%d ", odd[i]);
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < evenCount; ++i) {
        printf("%d ", even[i]);
    }

    return 0;
}
