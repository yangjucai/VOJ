#include <stdio.h>
#include <string.h>
char s[100], tr[26] = {'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U'};
int main(){
    gets(s);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') 
            s[i] = tr[s[i] - 'A']; //密文替换为明文
        printf("%c", s[i]);
    }
    return 0;
}