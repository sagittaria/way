//逆序的三位数
#include <stdio.h>
int main()
{
  int a = 0;
  scanf("%d", &a);
  a = a % 10 * 100 + a / 10 % 10 * 10 + a / 100 % 10;
  printf("%d", a);
  return 0;
}