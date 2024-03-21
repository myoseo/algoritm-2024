/*
202311401 박성서
Chapter 1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    int x1, x2;
    printf("이차 방정식 입력(상수만) ");
    scanf_s("%d %d %d", &a, &b, &c);
    x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    printf("근 : %d,%d\n", x1, x2);
    return 0;
}
