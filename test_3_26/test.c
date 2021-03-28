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
//#include<stdio.h>
//#include<string.h>
//
//void left_move(char* str, int n)
//{
//	int len = strlen(str);
//	int i = 0;
//	while (n--)
//	{
//		char tmp = *str;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//void reverse(char* str1, char* str2)
//{
//	while (str1 < str2)
//	{
//		char tmp = *str1;
//		*str1 = *str2;
//		*str2 = tmp;
//		str1++;
//		str2--;
//	}
//}
//
//void left_move(char* str, int n)
//{
//	int len = strlen(str);
//	reverse(str, str + n - 1);
//	reverse(str + n, str + len - 1);
//	reverse(str, str + len - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}


#include<stdio.h>
#include<string.h>

void reverse(char* str, int n)
{
	int len = strlen(str);
	int i = 0;
	while (n--)
	{
		char tmp = *str;
		for (i = 0; i < len - 1; i++)
		{
			*(str + i) = *(str + i + 1);
		}
		*(str + len - 1) = tmp;
	}
}
int is_move(char* str1, char* str2)
{
	int len = strlen(str2);
	while (len--)
	{
		reverse(str1, 1);
		if (!strcmp(str1, str2))
			return 1;
	}
	return 0;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	if (is_move(arr1, arr2))
		printf("Yes\n");
	else
		printf("NO\n");
	return 0;
}
