#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//    int i, j, a[50];
//    int t, * p;
//    i = 0;
//    while (scanf("%d", &a[i]) != EOF) {
//        i++;
//    }
//    for (j = 0; j < i / 2; j++) {
//        t = a[j];
//        a[j] = a[i - j - 1];
//        a[i - j - 1] = t;
//    }
//    for (p = a; p < a + i; p++) {
//        printf("%d", *p);
//    }
//    return 0;
//}


//#include <stdio.h>
//
//void change(int* p1, int* p2);
//int* sort(int* pArr, int n);
//
//int main()
//{
//    int arr[20], * pa, i, n;
//    scanf("%d", &n);
//    for (i = 0, pa = arr; i < n; i++)
//    {
//        scanf("%d", pa++);
//    }
//    pa = sort(arr, n);
//    printf("output : \n");
//    for (i = 0; i < n; i++)
//    {
//        printf("%d   ", *(pa + i));
//    }
//    printf("\n");
//    return 0;
//}
//
//void change(int* p1, int* p2)
//{
//    int tmp;
//    tmp = *p1;
//    *p1 = *p2;
//    *p2 = tmp;
//}
//
//int* sort(int* pArr, int n)
//{
//    int i, * pa;
//    for (i = n - 1; i > 0; i--)
//    {
//        for (pa = pArr; pa < pArr + i; pa++)
//        {
//            if (*pa > *(pa + 1))
//            {
//
//                change(pa, pa + 1);
//
//            }
//        }
//    }
//    return pArr;
//}

#include <stdio.h>
void Rev(int* x, int n);

int main()
{
    int i, a[10] = { 3,7,9,11,0,6,7,5,4,2 };
    int* p;

    Rev(a, sizeof(a) / sizeof(a[0]));
        //µ÷ÓÃÄæÐòº¯Êý
    printf("The array has been reverted:\n");
    for (
        p = a; p < a + sizeof(a) / sizeof(a[0]); p++)
        printf("%d,",*p);
    return 0;
}
void Rev(int* x, int n)
{
    int t, * p, * i, * j, m = (n - 1) / 2;
    i = x;  j = x + n - 1;  p = x + m;
    for (; i <= p; i++, j--)
    {

        int tmp = *i;


        *i = *j;


        *j = tmp;

    }
}
