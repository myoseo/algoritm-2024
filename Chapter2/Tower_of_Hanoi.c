#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi_tower(int n, char fr, char tmp, char to)
{
    if (n == 1)
    {
        printf("원판 1: %c --> %c\n", fr, to);
    }
    else
    {
        hanoi_tower(n - 1, fr, to, tmp);
        printf("원판 %d: %c --> %c\n", n, fr, to);
        hanoi_tower(n - 1, tmp, fr, to);
    }
}

int main()
{
    int n;
    printf("개수 : ");
    scanf("%d", &n);
    hanoi_tower(n, 'A', 'B', 'C');
    return 0;
}