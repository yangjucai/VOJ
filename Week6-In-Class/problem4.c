#include <stdio.h>
int main(void) {
    int num = 0;
	scanf("%d",&num);
	char bits[32] = ""; 
	for(int i=0;i<32;i++)
	{
		bits[i] = num & 1; 
		num = num >> 1; 
	}
    for(int i=31;i>=0;i--)
    {
        printf("%hhd",bits[i]);
    }
    return 0;
}