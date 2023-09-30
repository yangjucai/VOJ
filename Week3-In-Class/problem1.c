#include<stdio.h>

int main(void) {
    printf("\\\n");
    printf("\n");
    printf("\'\n");
    printf("\"");

    /*
    或者全部放到一个printf里面:
    printf("\\\n\n\'\n\"")
    */

    return 0;
}