#include <stdio.h>
#include <string.h>
int main(void) {
    int n;
    scanf("%d", &n);
    char str[1005];
    scanf("%s", str);
    int cnt = 0; //重复字符个数，初始化为0
    char lastChar = str[0]; //上一个字符，初始化为str[0]
    _Bool exist = 0; //判断是否存在连续重复n次的字符
    for(int i=0; i<strlen(str); i++){ //遍历字符串
        if(str[i] == lastChar){ //当前字符与上一个字符相等
            cnt++;
            if(cnt == n){ //连续重复n个字符
                printf("%c", lastChar);
                exist = 1;
                break;
            }
        }
        else { //当前字符与上一个字符不相等
            cnt = 1; //重复字符的个数置为1
            lastChar = str[i]; //上一个字符更新为str[i]
        }
    }
    if(!exist) //不存在，输出No
        printf("No\n");
    return 0;
}

