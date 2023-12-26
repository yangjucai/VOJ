#include<stdio.h>
#include<string.h>

int main(void) {
	char a[1001];
    while(gets(a)){//读入一行，遇到EOF结束
        int len=strlen(a);
        for(int i=0;i<len;i++){
            if(a[i]=='y'&&a[i+1]=='o'&&a[i+2]=='u'){
                printf("we");
                i=i+2;//找到you,替换为we,i加2 
            }
            else{
                printf("%c",a[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
//目前VOJ有问题，出现了compile error