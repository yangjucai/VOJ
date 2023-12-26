#include <stdio.h>
#include <string.h>

char s[100], t;

int main(){
    gets(s);  // 获取用户输入的字符串

    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'Z') s[i] = 'A';  // 如果字符是大写字母 'Z'，替换为 'A'
        else if(s[i] == 'z') s[i] = 'a';  // 如果字符是小写字母 'z'，替换为 'a'
        else if(s[i] >= 'a' && s[i] <= 'y' || s[i] >= 'A' && s[i] <= 'Y') s[i] += 1;  // 对于字母，替换为下一个字母
        else t++;  // 非字母字符计数
        printf("%c", s[i]);  // 打印修改后的字符
    }

    return 0;
}
