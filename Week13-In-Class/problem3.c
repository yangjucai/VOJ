#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char *str = (char*) malloc (260*sizeof(char));
    scanf("%[^\n]", str); //读入一行包含空格的字符串
    int cnt = 0;
    while(*str != '\0'){
        if(*str >= ‘0’ && *str <= ‘9’) //判断字符串里面有数字字符
            cnt++;
        str++; //指针后移，指向下一个字符
    }
    printf("%d\n", cnt);
    return 0;
}
