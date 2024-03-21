/*
202311401 박성서
Chapter 1
*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int gcd(int alist[], int b, int a_size);

int main() {
    int a, b;
    int alist[100];
    int j = 0;

    printf("두 개의 수를 입력하시오. ");
    scanf_s("%d %d", &a, &b);

    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            alist[j] = i;
            j++;
        }
    }


    int max = gcd(alist, b, j);

    printf("%d의 약수= [ ", a);
    for (int i = 0; i < j; i++) {
        printf("%d ", alist[i]);
    }
    printf("]\n");
    

    printf("%d과 %d의 최대 공약수 = %d", a, b, max);
    return 0;
}

int gcd(int alist[], int b, int a_size) {
    int max = 0;
    int temp;
    int blist[100];
    int l = 0;
    for (int k = 1; k <= b; k++) {
        blist[l] = k;
        l++;
    }

    for (int i = 0; i < a_size; i++)
    {
        for (int j = 0; j < a_size; j++)
        {
            if (alist[i] > alist[j])
            {
                temp = alist[i];
                alist[i] = alist[j];
                alist[j] = temp;
            }
        }
    }

    for (int i = 0; i < a_size; i++) {
        for (int j = 0; j < l; j++) {
            if (b % blist[j] == 0 && blist[j] > max && alist[i] == blist[j]) {
                max = alist[i];
            }
        }
    }

    return max;
}