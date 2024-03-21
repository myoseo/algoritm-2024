/*
202311401 박성서
Chapter 1
*/
#include <stdio.h>

int gcd(int a, int b);

int main(void) {
  int a, b;
  printf("수 두개를 입력하시오\n");
  scanf("%d %d", &a, &b);
  int c = gcd(a, b);
  printf("최대 공약수는 %d입니다.\n", c);
  return 0;
}

int gcd(int a, int b)
{
  if (a > b)
  {
    while (b != 0)
    {
      int r = a % b;
      a = b;
      b = r;
    }
    return a;
  }
  else if (a < b)
  {
    while (a != 0)
    {
      int r = b % a;
      b = a;
      a = r;
    }
    return b;
  }
  else if (a == b)
  {
    return a;
  }
}