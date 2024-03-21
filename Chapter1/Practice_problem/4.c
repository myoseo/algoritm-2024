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
  while (b != 0)
  {
    printf("변수 r에 b로 a를 나눈 나머지값 저장\n");
    int r = a % b;
    printf("b를 a에 저장\n");
    a = b;
    printf("r을 b에 저장\n");
    b = r;
  }
  return a;
}