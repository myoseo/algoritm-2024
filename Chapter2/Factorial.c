#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("n을 입력하시오 : ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}