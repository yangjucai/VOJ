#include <math.h>
#include <stdio.h>


int main(void) {
  int X, Y;
  scanf("%d %d", &X, &Y);
  int cnt = 0; //记录素数的个数
  _Bool isPrime = 1; //布尔变量记录是否为素数
  for (; X <= Y; X++) { //外循环遍历X 到 Y 的所有数
    if (X == 1) 
      isPrime = 0;
    
    int i;
    for (i = 2; i <= (int)sqrt(X); i++) { //内循环遍历2到根号X
      if (X % i == 0) { //如果i整除X (i|X)
        isPrime = 0; //不是素数
        break; //跳出内循环，不用继续遍历了
      }
    }
    if (isPrime)
      cnt++;
    isPrime = 1; //每次外循环结束前把isPrime置为1
  }
  return 0;
}