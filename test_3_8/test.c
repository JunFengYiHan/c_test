#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//    int arr[4] = { 0 };
//    int n = 0;
//    int num = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &num);
//        if (num >= 0 && num <= 18)
//            arr[0]++;
//        else if (num >= 19 && num <= 35)
//            arr[1]++;
//        else if (num >= 36 && num < 61)
//            arr[2]++;
//        else if (num >= 61)
//            arr[3]++;
//    }
//    for (i = 0; i < 4; i++)
//    {
//        printf("%.2f%%\n", arr[i] *100.0/ n);
//    }
//    return 0;
//}

#include<stdio.h>
void sort(int* p, int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    for (j = 0; j < n; j++)
    {
        int min = *(p + j);
        for (i = j+1; i < n; i++)
        {
            if (min > *(p + i))
            {
                min = *(p + i);
                k = i;
            }
        }
        if (*(p + j) > min)
        {
            *(p + k) = *(p + j);
            *(p + j) = min;
        }
    }
}
int main()//—°‘Ò≈≈–Ú
{
    int arr[100] = { 0 };
    int n= 0;
    scanf("%d", &n);
    int i = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    for (i = 0; i < n; i++)
    {
        printf("%.4f", (double)arr[i]);
        if (i < n - 1)
            printf(" ");
    }
    return 0;
}

//#include<stdio.h>
//void sort(int* p,int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n -1 -i; j++)
//		{
//			if (*(p + j) > *(p + j + 1))
//			{
//				int tmp = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = tmp;
//			}
//		}
//	}
//}
//int main()//√∞≈›≈≈–Ú
//{
//	int arr[100] = { 0 };
//	int n= 0;
//	scanf("%d", &n);
//	int i = 0;
//	
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	sort(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%.4f", (double)arr[i]);
//		if (i < n - 1)
//			printf(" ");
//	}
//	return 0;
//}