#include <stdio.h>

int main() {
    char input_string[100];  // �Է� ���� ���ڿ��� ������ �迭

    // ����ڷκ��� ���ڿ� �Է� �ޱ�
    printf("Input> ");
    fgets(input_string, sizeof(input_string), stdin);

    // ���ڿ��� ��ȸ�ϸ鼭 ��ҹ��� ��ȯ �� ���
    for (int i = 0; input_string[i] != '\0'; ++i) {
        char current_char = input_string[i];

        // �빮���� ��� �ҹ��ڷ� ��ȯ
        if (current_char >= 'A' && current_char <= 'Z') {
            printf("%c", current_char + ('a' - 'A'));
        }
        // �ҹ����� ��� �빮�ڷ� ��ȯ
        else if (current_char >= 'a' && current_char <= 'z') {
            printf("%c", current_char - ('a' - 'A'));
        }
        // �ٸ� ���ڴ� �״�� ���
        else {
            printf("%c", current_char);
        }
    }

    return 0;
}
