#include <stdio.h>

// ���� ������ �����ϴ� ����ü ����
struct City {
    char name[50];
    char country[50];
    int population;
};

int main() {
    // ����ü �迭 ����
    struct City cities[3];

    // ����ڷκ��� ���� ���� �Է� �ޱ�
    for (int i = 0; i < 3; ++i) {
        printf("Input information for city %d:\n", i + 1);

        printf("Name> ");
        scanf("%s", cities[i].name);

        printf("Country> ");
        scanf("%s", cities[i].country);

        printf("Population> ");
        scanf("%d", &cities[i].population);
    }

    // �Է¹��� ���� ���� ���
    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d. %s in %s with a population of %d people\n",
            i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}
