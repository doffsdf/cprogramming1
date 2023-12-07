#include <stdio.h>

// 도시 정보를 저장하는 구조체 정의
struct City {
    char name[50];
    char country[50];
    int population;
};

int main() {
    // 구조체 배열 선언
    struct City cities[3];

    // 사용자로부터 도시 정보 입력 받기
    for (int i = 0; i < 3; ++i) {
        printf("Input information for city %d:\n", i + 1);

        printf("Name> ");
        scanf("%s", cities[i].name);

        printf("Country> ");
        scanf("%s", cities[i].country);

        printf("Population> ");
        scanf("%d", &cities[i].population);
    }

    // 입력받은 도시 정보 출력
    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d. %s in %s with a population of %d people\n",
            i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}
