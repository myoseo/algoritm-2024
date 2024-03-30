#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int compute_square_A(n)
{
    return n*n;
}
int compute_square_B(n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum = sum + n;
    }
    return sum;
}
int compute_square_C(n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; i <= n; i++)
        {
            sum = sum + 1;
        }
    }
    return sum;
}
int main()
{
    int num;
    printf("수 입력 : ");
    scanf("%d", &num);
    int a = compute_square_A(num);
    int b = compute_square_B(num);
    int c = compute_square_C(num);
    printf("알고리즘 1: %d\n", a);
    printf("알고리즘 2: %d\n", b);
    printf("알고리즘 3: %d\n", c);
    return 0;
}