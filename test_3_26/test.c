#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()//杨氏矩阵
//{
//	int arr[3][3] = { 1,2,3,
//					  4,5,6,
//					  7,8,9 };
//	int i = 0;
//	int j = 2;
//	int n = 0;
//	int flag = 0;
//	scanf("%d", &n);
//	while (i < 3 && j >= 0)
//	{
//		if (arr[i][j] > n)
//			j--;
//		else if (arr[i][j] < n)
//			i++;
//		else
//		{
//			printf("下标为%d,%d", i, j);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("不存在该元素\n");
//	return 0;
//}
//
#include<stdio.h>

void resever(char* arr, int n)
{
	char* str = arr;

}

int main()
{
	char arr[] = "abcdef";
	resever(arr, 2);
	return 0;
}

