#include <stdio.h>
#include <math.h>

// 표준편차를 계산하는 함수
double calculateStandardDeviation(double arr[], int n) {
    double sum = 0.0, mean, standardDeviation = 0.0;

    // 평균 계산
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    mean = sum / n;

    // 각 원소와 평균의 차이를 제곱하여 합산
    for (int i = 0; i < n; ++i) {
        standardDeviation += pow(arr[i] - mean, 2);
    }

    // 분산에서 표준편차 계산
    standardDeviation = sqrt(standardDeviation / n);

    return standardDeviation;
}

int main() {
    // 배열에 실수 5개 저장
    double numbers[5];
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%lf", &numbers[i]);
    }

    // 표준편차 계산
    double stdDev = calculateStandardDeviation(numbers, 5);

    // 결과 출력
    printf("Standard Deviation = %.3lf\n", stdDev);

    return 0;
}
