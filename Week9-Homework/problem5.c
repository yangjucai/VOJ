#include <stdio.h>
#include <math.h>
int gcd(int x, int y) {//递归实现辗转相除法求gcd
    return y ? gcd(y, x % y) : x;
}

int main(void) {
    long long x,y;
    int ans = 0;//记录找到的P的个数
    scanf("%ld %ld", &x, &y);
    
    long long sq = (long long) sqrt(x*y);
    for(int i=x; i <= sq; i += x) {//找到前一半满足条件的P，此时Q=x*y%P, 再验证gcd(P,Q)是否等于x 
        if(x * y % i == 0 && gcd(i, x * y / i) == x)
            ans++;
    }
    ans *= 2;//P和Q是对称的，故结果乘以2
    if(x==y)
        ans=1; //如果x和y相等，ans=1, 即P=Q=x=y
    printf("%d", ans);
    return 0;
}