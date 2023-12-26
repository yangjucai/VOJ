#include<stdio.h>
#include<string.h>
#define SIZE 1000//字符数组大小
char ch[SIZE];
int main(void){
    scanf("%s", ch);
    for(int i=strlen(ch)-2; i>=0; i--)
        printf("%c", ch[i]);//逆序输出
    return 0;
}
