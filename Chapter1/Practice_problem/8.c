/*
202311401 박성서
Chapter 1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b);
int lit(int a, int b, int c);

int main()
{
    int a, b;
    printf("두 개의 수를 입력하시오.(앞이 큰수를 입력) ");
    scanf_s("%d %d", &a, &b);
    int max = gcd(a, b);
    int min = lit(a, b, max);
    printf("최소 공배수 : %d", min);
    return 0;
}

int lit(int a, int b, int c)
{
    int min;
    min = (a * b) / c;
    return min;
}

int gcd(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
