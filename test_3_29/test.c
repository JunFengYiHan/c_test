#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include"string.h"
//
//int main()
//{
//	char arr[5] = { 'a' };
//
//	printf("%s", arr);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//    int a[3][3] = { {1,2,3}, {4,6,2}, {9,3,6} }, s = 0;
//    int i, j, k = 1;
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 3; j++)
//            a[i][j] = a[i][j] / k;
//        k++;
//    }
//    for (i = 0; i < 3; i++)
//        s += a[i][i];
//    printf("%d", s);
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//    int arr[100][100] = { 0 };
//    int m = 0;
//    int n = 0;
//    int sum = 0;
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf(" %d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
//                sum += arr[i][j];
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int arr[100][100] = { 0 };
//    int stu[100] = { 0 };
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf(" %d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr[i][j] >= 95)
//            {
//                stu[i]++;
//            }
//        }
//    }
//    int flag = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (stu[i] >= 2)
//        {
//            printf("student:%d\n", i + 1);
//            flag = 1;
//        }
//    }
//    if (flag == 0)
//    {
//        printf("None\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int arr[10][10] = { 0 };
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf(" %d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        int row_max = arr[0][i];
//        for (j = 1; j < m; j++)
//        {
//            if (arr[j][i] > row_max)
//            {
//                row_max = arr[j][i];
//            }
//        }
//        printf("%d\n", row_max);
//    }
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//    int arr[6][6] = { 0 };
//    int flag = 0;
//    int s = 0;
//    int i = 0;
//    int j = 0;
//    int sum = 0;
//    for (i = 0; i < 6; i++)
//    {
//        for (j = 0; j < 6; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 1; i <= 6; i++)
//    {
//        scanf("%d", &s);
//        flag = flag ^ s ^ i;
//    }
//    int d = 0;
//    int n = 3;
//    while (n--)
//    {
//        scanf("%d %d", &i, &d);
//        if (i == 0)
//        {
//            i = flag;
//        }
//        if (d == 1)
//        {
//            for (j = 0; j < 6; j++)
//            {
//                sum += arr[i-1][j];
//            }
//        }
//        if (d == 2)
//        {
//            for (j = 0; j < 6; j++)
//            {
//                sum += arr[j][i-1];
//            }
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 3;
//	//0011
//	int b = 5;
//	//0101
//	int c = a ^ b;  
//	//0110
//	printf("%d", c);
//	return 0;
//}	

#include<stdio.h>

int main()
{

	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		if (i == 1) 
		{
			for (j = 1; j <= 9; j++)
			{
				printf("%4d", j);
			}
			printf("\n");
			for (j = 1; j <= 9; j++)
			{
				printf("-----");
			}
			printf("\n");
		}
		printf("%d |", i);
		for (j = 1; j <= 9; j++)
		{		
			printf("%-4d", i * j);
		}
		printf("\n");
	}
	return 0;
}