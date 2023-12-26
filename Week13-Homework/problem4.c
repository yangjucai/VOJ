#include <stdio.h>

int main() {
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);

    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) { //两个字符一样，第三个不一样
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
