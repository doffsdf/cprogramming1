#include <stdio.h>
#include <math.h>

// ǥ�������� ����ϴ� �Լ�
double calculateStandardDeviation(double arr[], int n) {
    double sum = 0.0, mean, standardDeviation = 0.0;

    // ��� ���
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    mean = sum / n;

    // �� ���ҿ� ����� ���̸� �����Ͽ� �ջ�
    for (int i = 0; i < n; ++i) {
        standardDeviation += pow(arr[i] - mean, 2);
    }

    // �л꿡�� ǥ������ ���
    standardDeviation = sqrt(standardDeviation / n);

    return standardDeviation;
}

int main() {
    // �迭�� �Ǽ� 5�� ����
    double numbers[5];
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%lf", &numbers[i]);
    }

    // ǥ������ ���
    double stdDev = calculateStandardDeviation(numbers, 5);

    // ��� ���
    printf("Standard Deviation = %.3lf\n", stdDev);

    return 0;
}
