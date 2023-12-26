#include<stdio.h>
#include<string.h>

int main(void) {
    char str[SIZE];
    scanf("%s", str);
    int len = strlen(str);
    for(int i=0; i<len; i++){
        if(i==len-1) //构造最后一个字符
            printf("%c", str[i] + str[0]);
        else //构造亲朋字符
            printf("%c", str[i] + str[i+1]);
    }

    return 0;
}