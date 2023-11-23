#include <stdio.h>

void print_pyramid(char max_letter) {
    int num_spaces = max_letter - 'A';  // 计算每行开头的空格数

    for (int i = 0; i <= num_spaces; i++) {
        for (int j = 0; j < num_spaces - i; j++) {
            printf(" ");  // 打印每行开头的空格
        }

        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);  // 打印左半部分字母
        }

        for (int j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);  // 打印右半部分字母
        }

        printf("\n");  // 换行打印下一行
    }
}

int main() {
    char max_letter;
    scanf("%c", &max_letter);

    print_pyramid(max_letter);

    return 0;
}