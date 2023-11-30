#include <stdio.h>

int main() {
    char input_string[100];  // 입력 받을 문자열을 저장할 배열

    // 사용자로부터 문자열 입력 받기
    printf("Input> ");
    fgets(input_string, sizeof(input_string), stdin);

    // 문자열을 순회하면서 대소문자 변환 및 출력
    for (int i = 0; input_string[i] != '\0'; ++i) {
        char current_char = input_string[i];

        // 대문자인 경우 소문자로 변환
        if (current_char >= 'A' && current_char <= 'Z') {
            printf("%c", current_char + ('a' - 'A'));
        }
        // 소문자인 경우 대문자로 변환
        else if (current_char >= 'a' && current_char <= 'z') {
            printf("%c", current_char - ('a' - 'A'));
        }
        // 다른 문자는 그대로 출력
        else {
            printf("%c", current_char);
        }
    }

    return 0;
}
