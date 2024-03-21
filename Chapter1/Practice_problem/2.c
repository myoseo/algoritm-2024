/*
202311401 박성서
Chapter 1
*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int gcd(int alist[], int blist[], int a_size, int b_size);

int main() {
    int a, b;
    int alist[100], blist[100];
    int j = 0, l = 0;

    printf("두 개의 수를 입력하시오.(앞이 큰수를 입력) ");
    scanf_s("%d %d", &a, &b);

    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            alist[j] = i;
            j++;
        }
    }

    for (int k = 1; k <= b; k++) {
        if (b % k == 0) {
            blist[l] = k;
            l++;
        }
    }

    int max = gcd(alist, blist, j, l);

    printf("%d의 약수= [", a);
    for (int i = 0; i < j; i++) {
        printf("%d ", alist[i]);
    }
    printf("]\n");

    printf("%d의 약수= [", b);
    for (int i = 0; i < l; i++) {
        printf("%d ", blist[i]);
    }
    printf("]\n");

    printf("%d과 %d의 최대 공약수 = %d", a, b, max);
    return 0;
}

int gcd(int alist[], int blist[], int a_size, int b_size) {
    int max = 0;

    for (int i = 0; i < a_size; i++) {
        for (int j = 0; j < b_size; j++) {
            if (alist[i] == blist[j] && alist[i] > max) {
                max = alist[i];
            }
        }
    }

    return max;
}