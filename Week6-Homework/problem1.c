#include <stdio.h>
int main(void)
{
  float x, y;
  scanf("%f", &x);
  if (0 <= x && x < 5) //分段函数
    y = 2.5 - x;
  if (5 <= x && x < 10)
    y = 2 - 1.5 * (x - 3) * (x - 3);
  if (10 <= x && x < 20)
    y = x / 2 - 1.5;
  printf("%.3f", y);
  return 0;
}
