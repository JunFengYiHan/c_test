#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void swap(char* str1, char* str2) {
    while (str1 < str2) {
        char tmp = *str1;
        *str1 = *str2;
        *str2 = tmp;
        str1++;
        str2--;
    }
}

void right_remove(char* arr, int n) {
    int len = strlen(arr);
    n %= len;
    swap(arr, arr + len - n - 1);
    swap(arr + len - n, arr + len - 1);
    swap(arr, arr + len - 1);
}

int main()
{
    int n = 0;
    char arr[1001] = { 0 };
    scanf("%d", &n);
    getchar();
    gets(arr);
    right_remove(arr, n);
    puts(arr);
    return 0;
}