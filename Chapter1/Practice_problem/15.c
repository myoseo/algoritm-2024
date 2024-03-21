/*
202311401 박성서
Chapter 1
*/
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    char str[1000] = "";
    printf("문장: ");
    scanf("%s", str);
    printf("찾는 단어: ");
    scanf("%s", word);
    char* ptr = strstr(str, word); /*strstr 함수는 문자열에서 부분 문자열을 찾아 해당 부분 문자열이 시작하는 위치를 포인터로 반환*/
    int count = 0;

    while (ptr != NULL) {
        ptr = strstr(ptr + 1, word); 
        count++;
    }

    printf("찾은 문자열 %d개", count);

    return 0;
}

