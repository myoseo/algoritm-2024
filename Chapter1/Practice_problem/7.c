/*
#include <time.h>
#include <stdio.h>
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
int main()
{
   clock_t start, end;
   start = clock();
    int a = 60, b = 28;
    int alist[100], blist[100];
    int j = 0, l = 0;


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

    printf("%d과 %d의 최대 공약수 = %d\n", a, b, max);

   end = clock();
   printf("[time : %f]\n", (float)(end - start) / CLOCKS_PER_SEC);
    return 0;
}

#include <time.h>
#include <stdio.h>
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
int main()
{
    clock_t start, end;
    start = clock();
    int a = 60, b = 28;
    int alist[100], blist[100];
    int j = 0, l = 0;


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
    

    printf("%d과 %d의 최대 공약수 = %d\n", a, b, max);


    end = clock();
    printf("[time : %f]\n", (float)(end - start) / CLOCKS_PER_SEC);
    return 0;
}

#include <time.h>
#include <stdio.h>
int gcd(int a, int b) 
{
    int max = 0;
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return max;
}
int main()
{
    clock_t start, end;
    start = clock();
    int a = 60, b = 28;
    int max = gcd(a, b);

    printf("%d과 %d의 최대 공약수 = %d\n", a, b, max);


    end = clock();
    printf("[time : %f]\n", (float)(end - start) / CLOCKS_PER_SEC);
    return 0;
}
알고리즘 1.7의 코드가 가장  빠른것을 알 수 있었으며
이 차이는 수의 약수를 구하고 배열에 입력하는 시간에서 차이가 났다고 생각함.
*/