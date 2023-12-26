#include <stdio.h>

// 获取实数输入的函数
void GetReal(char* num) {
    printf("please input a number:\n");
    scanf("%s", num);
}

// 获取字符串输入的函数
void GetString(char* str) {
    printf("please input a string:\n");
    scanf("%s", str);
}

int main() {
    char realNumber[100];
    char stringInput[100]; // 假设字符串的最大长度为100

    // 调用函数获取实数
    GetReal(realNumber);
    
    // 调用函数获取字符串
    GetString(stringInput);

    // 打印输入的实数和字符串
    printf("%s\n%s\n", realNumber, stringInput);

    return 0;
}